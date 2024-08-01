/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:26:51 by cnieto            #+#    #+#             */
/*   Updated: 2024/07/21 16:27:14 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122
			&& !(str[i - 1] >= 97 && str[i - 1] <= 122)
			&& !(str[i - 1] >= 65 && str[i - 1] <= 90)
			&& !(str[i] >= 48 && str[i] <= 57)
			&& !(str[i - 1] >= 48 && str[i -1] <= 57))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*int	main()
{
	char	i[] = "salut, coMment tu vas";
	char	*result = ft_strcapitalize(i);

	printf("%s\n", result);

	return (0);
}*/
