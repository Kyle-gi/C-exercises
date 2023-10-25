/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kforouzm <kforouzm@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:30:39 by kforouzm          #+#    #+#             */
/*   Updated: 2023/08/28 15:51:17 by kforouzm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = 0;
	i = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
/*
int main()
{
    char dest[50] = "Hello, ";
    char src[] = "World!";
    unsigned int max_chars = 4;

    ft_strncat(dest, src, max_chars);

    write(1, dest, sizeof(dest) - 1);
    write(1, "\n", 1);

    return 0;
}
*/
