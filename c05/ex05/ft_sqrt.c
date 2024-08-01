/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:50:17 by cnieto            #+#    #+#             */
/*   Updated: 2024/07/25 15:20:16 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i <= nb)
	{
		while (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*int	main()
{
	int	nb = 50;
	printf("%d\n", ft_sqrt(nb));
	return (0);
}*/
