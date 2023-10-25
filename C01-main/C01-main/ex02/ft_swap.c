/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kforouzm <kforouzm@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:38:19 by kforouzm          #+#    #+#             */
/*   Updated: 2023/08/18 15:01:17 by kforouzm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>

int main(void)
{
	int a = 5, b = 10;

	printf("a = %d, b = %d\n", a, b);

	ft_swap(&a, &b);

	printf("a = %d, b = %d\n", a, b);

	return 0;
}
*/
