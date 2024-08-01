/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:23:45 by cnieto            #+#    #+#             */
/*   Updated: 2024/07/25 18:04:25 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	if (nb == 1 || nb == 0)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
			count++;
		if (count > 2)
			return (0);
		i++;
	}
	return (1);
}
/*int	main()
{
	printf("%d\n", ft_is_prime(10));
	return (0);
}*/
