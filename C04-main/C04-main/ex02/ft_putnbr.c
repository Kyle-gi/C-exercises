/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kforouzm <kforouzm@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:52:20 by kforouzm          #+#    #+#             */
/*   Updated: 2023/08/28 19:39:50 by kforouzm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	digit;
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (n >= 10)
	{
		ft_putnbr(nb / 10);
	}
	digit = nb % 10 + '0';
	write(1, &digit, 1);
}

int main() {
    int value = 0;

    while (1) {
        ft_putnbr(value);
        write(1, "\n", 1);
        value++;

        if (value < 0) {
            // Handle overflow for signed int
            break;
        }
    }

    return 0;
}
