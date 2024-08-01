/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:36:59 by cnieto            #+#    #+#             */
/*   Updated: 2024/07/25 17:59:15 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	while (nb >= 1)
	{
		i *= nb;
		nb--;
	}
	return (i);
}
/*int	main()
{
	int	nb = 5;
	printf("%d! = %d\n", nb, ft_iterative_factorial(nb));
	return (0);
}*/
