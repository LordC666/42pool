/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:52:39 by cnieto            #+#    #+#             */
/*   Updated: 2024/07/25 18:02:16 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 0 && nb >= 0)
	{
		i *= nb;
		power--;
	}
	return (i);
}
/*int	main()
{
	int	nb = 9;
	int	power = 2;

	printf("%d\n", ft_iterative_power(nb, power));
	return (0);
}*/
