/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 01:32:13 by cnieto            #+#    #+#             */
/*   Updated: 2024/07/15 03:08:34 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= '1' && str[i] <= '9')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int	main()
{
	char	i[] = "1b34";
	int	result = ft_str_is_numeric(i);

	printf("%d\n", result);

	return (0);
}*/
