/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:39:44 by cnieto            #+#    #+#             */
/*   Updated: 2024/07/23 13:37:22 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*int	main(int argc, char **argv)
{
	char	i[] = "Hola caracola";
	char	j[] = "n";
	
	if (argc != 3)
		return (1);
	printf("%s\n", ft_strstr(argv[1], argv[2]));
	printf("%s\n", strstr(argv[1], argv[2]));
	
	return (0);
}*/
