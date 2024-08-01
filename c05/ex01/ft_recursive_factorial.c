/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:42:56 by cnieto            #+#    #+#             */
/*   Updated: 2024/07/25 18:01:59 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (1);
}
/*int	main()
{
	int	nb = 5;
	printf("%d\n", ft_recursive_factorial(nb));
	return (0);
}*/
