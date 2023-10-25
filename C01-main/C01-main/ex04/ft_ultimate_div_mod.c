/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kforouzm <kforouzm@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:08:21 by kforouzm          #+#    #+#             */
/*   Updated: 2023/08/20 12:11:11 by kforouzm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	remainder;	

	division = *a / *b;
	remainder = *a % *b;
	*b = remainder;
	*a = division;
}

/*
#include <stdio.h>

	int main(void){

		int num1 = 10;
		int num2 = 2;

		ft_ultimate_div_mod(&num1, &num2);

		printf("a = %d, b = %d\n", num1, num2);

		return 0;
}
*/
