/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnieto <cnieto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:36:49 by cnieto            #+#    #+#             */
/*   Updated: 2024/07/10 17:47:15 by cnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	end;

	i = 0;
	end = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[end];
		tab[end] = temp;
		i++;
		end--;
	}
}

/*int	main(void)
{
	int	arr[] = {10, 20, 30, 40, 50};
	int size = sizeof(arr) / sizeof(arr[0]);

	ft_rev_int_tab(arr, size);
	for	(int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
    }
	printf("\n");

	return (0);
}*/
