/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:21:28 by cnieto            #+#    #+#             */
/*   Updated: 2024/07/23 13:36:13 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned int)s2[i]);
		}
		i++;
	}
	return (0);
}
/*int	main()
{
	char	i[] = "hgCh";
	char	j[] = "hGCds";
	unsigned int	n = 4;
	
	printf("%d\n", ft_strncmp(j, i, n));
	printf("%d\n", strncmp(i, j, n));

	return (0);
}*/
