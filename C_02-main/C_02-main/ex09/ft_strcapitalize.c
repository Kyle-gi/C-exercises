/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kforouzm <kforouzm@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:36:21 by kforouzm          #+#    #+#             */
/*   Updated: 2023/08/27 17:31:36 by kforouzm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;	
	int	capitalize_next;

	capitalize_next = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			if (capitalize_next)
			{
				str[i] -= 32;
				capitalize_next = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			capitalize_next = 0;
		else
			capitalize_next = 1;
		i++;
	}
	return (str);
}
/*
int main() {
    char str[] = "Salut, coMment tu vas ? 42mOts quarante-deux; cinquante+et+un";
    ft_strcapitalize(str);
    write(1, str, sizeof(str) - 1);
    write(1, "\n", 1);

    return 0;
}
*/
