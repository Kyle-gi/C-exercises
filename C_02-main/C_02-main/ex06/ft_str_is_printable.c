/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kforouzm <kforouzm@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:16:40 by kforouzm          #+#    #+#             */
/*   Updated: 2023/08/26 16:27:50 by kforouzm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < ' ' || *str > '~')
			return (0);
		str++;
	}
	return (1);
}
/*
int main()
{
    char str1[] = "Hello, World!";
    char str2[] = "Hello,\tWorld!";

    int result1 = ft_str_is_printable(str1);
    int result2 = ft_str_is_printable(str2);

    char digit1 = result1 + '0';
    char digit2 = result2 + '0';

    write(1, &digit1, 1);
    write(1, "\n", 1);

    write(1, &digit2, 1);
    write(1, "\n", 1);

    return (0);
}
*/
