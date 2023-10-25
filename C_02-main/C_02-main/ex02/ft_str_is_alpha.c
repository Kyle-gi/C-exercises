/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kforouzm <kforouzm@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:20:32 by kforouzm          #+#    #+#             */
/*   Updated: 2023/08/27 17:27:32 by kforouzm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int main() {
    char str1[] = "";
    char str2[] = "Hello123";
    
    char result1 = ft_str_is_alpha(str1) + '0';
    write(1, &result1, 1);
    write(1, "\n", 1);
    
    char result2 = ft_str_is_alpha(str2) + '0';
    write(1, &result2, 1);
    write(1, "\n", 1);
    
    return 0;
}
*/
