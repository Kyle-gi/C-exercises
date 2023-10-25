/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kforouzm <kforouzm@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:30:58 by kforouzm          #+#    #+#             */
/*   Updated: 2023/08/21 16:55:41 by kforouzm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int main(void)
{
	int arr[] = {5, 2, 9, 1, 5};
	int size = sizeof(arr) / sizeof(arr[0]);

	ft_sort_int_tab(arr, size);

	int i = 0;
	while (i < size)
	{
		char digit = arr[i] + '0';
		write(1, &digit, 1);
		i++;
	}
	write(1, "\n", 1);
	
	return (0);
}
*/
