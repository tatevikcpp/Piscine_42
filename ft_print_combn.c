/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhechoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:37:07 by tkhechoy          #+#    #+#             */
/*   Updated: 2022/02/17 22:10:58 by tkhechoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int arr[], int n)
{
	int		i;
	char	c;

	i = -1;
	while (++i < n)
	{
		c = arr[i] + '0';
		write (1, &c, 1);
	}
	if (arr[0] != 10 - n)
		write (1, ", ", 2);
}

void	ft_rec(int arr[], int n, int i)
{
	if (i == 0)
		arr[i] = 0;
	else
		arr[i] = arr[i - 1] + 1;
	while (arr[i] < 11 - n + i)
	{
		if (i == n - 1)
			ft_print(arr, n);
		else
			ft_rec(arr, n, i + 1);
		arr[i] = arr[i] + 1;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];

	ft_rec(arr, n, 0);
}
