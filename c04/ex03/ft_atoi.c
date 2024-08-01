/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:46:52 by cnieto            #+#    #+#             */
/*   Updated: 2024/07/24 16:00:04 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	res;
	int	i;
	int	s;

	res = 0;
	i = 0;
	s = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			s *= -1;
			i++;
		}
		else
			i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * s);
}
/*int main()
{
    char str1[] = "  ---+--+1234ab5678";
    char str2[] = "5678";
    char str3[] = "   --42";
    char str4[] = "   987 with words";
    char str5[] = "words and 234";

    printf("%d\n", ft_atoi(str1));
    printf("%d\n", atoi(str1));
    printf("%d\n", ft_atoi(str2));
    printf("%d\n", atoi(str2));
    printf("%d\n", ft_atoi(str3));
    printf("%d\n", atoi(str3));
    printf("%d\n", ft_atoi(str4));
    printf("%d\n", atoi(str4));
    printf("%d\n", ft_atoi(str5));
    printf("%d\n", atoi(str5));

    return 0;
}*/
