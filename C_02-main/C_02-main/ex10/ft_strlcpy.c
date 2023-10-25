/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kforouzm <kforouzm@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:40:31 by kforouzm          #+#    #+#             */
/*   Updated: 2023/08/26 17:41:32 by kforouzm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_length;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	src_length = 0;
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	return (src_length);
}
/*
int	main () {
	char src[] = "Hello, World!";
	char dest[20];

	unsigned int copied = ft_strlcpy(dest, src, sizeof(dest));

	write(1, dest, copied);
	write(1, "\n", 1);

	return (0);
}
*/
