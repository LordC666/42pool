/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:32:43 by cnieto            #+#    #+#             */
/*   Updated: 2024/07/23 19:36:24 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar ('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}
/*int	main()
{
	int	i =  42;
	int	j = 5163;
	int	k = -2147483648;
	int	l = -2147483647;

	ft_putnbr(i);
	ft_putchar('\n');
	ft_putnbr(j);
	ft_putchar('\n');
	ft_putnbr(k);
	ft_putchar('\n');
	ft_putnbr(l);
	ft_putchar('\n');
	
	return (0);
}*/
