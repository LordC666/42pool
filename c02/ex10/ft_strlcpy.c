/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 00:09:31 by cnieto            #+#    #+#             */
/*   Updated: 2024/07/17 14:02:27 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	s;

	i = 0;
	s = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[s] != '\0')
	{
		s++;
	}
	return (s);
}

/*int	main()
{
	char	i[] = "Buenas";
	char	j[15];
	unsigned int	s = 6;
	unsigned int	result = ft_strlcpy(j, i, s);
	
	printf("%s\n", j);
	printf("%u\n", result);

	return (0);
}*/
