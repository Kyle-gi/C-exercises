/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kforouzm <kforouzm@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:06:37 by kforouzm          #+#    #+#             */
/*   Updated: 2023/08/26 17:24:39 by kforouzm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char str[] = "Hello, World!";

	ft_strupcase(str);

	write(STDOUT_FILENO, str, sizeof(str) - 1);
	write(STDOUT_FILENO, "\n", 1);

	return (0);
}
*/
