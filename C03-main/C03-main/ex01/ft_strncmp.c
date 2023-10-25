/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kforouzm <kforouzm@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:55:17 by kforouzm          #+#    #+#             */
/*   Updated: 2023/08/28 12:21:47 by kforouzm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		if (*s1 == '\0')
		{
			break ;
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>

int main() {
    char s1[] = "Hello, World!";
    char s2[] = "Hello, everybody!";
    unsigned int n = 7;
    int result = ft_strncmp(s1, s2, n);
    if (result == 0)
        printf("First %u characters of both strings are equal.\n", n);
    else if (result < 0)
        printf("First %u characters of s1 is less than s2.\n", n);
    else
        printf("First %u characters of s1 is greater than s2.\n", n);
    return 0;
}
*/
