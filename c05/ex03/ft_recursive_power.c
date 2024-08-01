/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:58:23 by cnieto            #+#    #+#             */
/*   Updated: 2024/07/25 18:02:44 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	if (power > 0 && nb >= 0)
		return (nb * (ft_recursive_power(nb, power - 1)));
}
/*int	main()
{
	int	nb = 12;
	int	power = 1;

	printf("%d\n", ft_recursive_power(nb, power));
	return (0);
}*/
