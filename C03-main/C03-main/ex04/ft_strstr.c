/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kforouzm <kforouzm@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:39:47 by kforouzm          #+#    #+#             */
/*   Updated: 2023/08/28 15:50:35 by kforouzm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*s1;
	char	*s2;

	while (*str)
	{
		s1 = str;
		s2 = to_find;
		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (!*s2)
			return (str);
		str++;
	}
	return (NULL);
}
/*
int main()
{
    char str[] = "Hello, World!";
    char to_find[] = "World!";

    char *result = ft_strstr(str, to_find);

    if (result)
        write(1, result, str + sizeof(str) - result);
    else
        write(1, "Not found", 9);

    write(1, "\n", 1);

    return 0;
}
*/
