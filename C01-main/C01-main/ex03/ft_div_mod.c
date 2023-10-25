/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kforouzm <kforouzm@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:50:07 by kforouzm          #+#    #+#             */
/*   Updated: 2023/08/17 18:03:11 by kforouzm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 3;
	int div_result, mod_result;

	ft_div_mod(a, b, &div_result, &mod_result);
	

	printf("div = %d, mod = %d\n", div_result, mod_result);

	return 0;
}
*/
