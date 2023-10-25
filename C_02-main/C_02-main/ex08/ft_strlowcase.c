/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowercase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kforouzm <kforouzm@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:46:47 by kforouzm          #+#    #+#             */
/*   Updated: 2023/08/27 17:22:16 by kforouzm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] - 'A' + 'a';
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char str[] = "Hello, World!";

	ft_strlowcase(str);

	write(STDOUT_FILENO, str, sizeof(str) - 1);
	write(STDOUT_FILENO, "\n", 1);

	return (0);
}
*/
