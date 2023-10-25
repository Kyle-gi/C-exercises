/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kforouzm <kforouzm@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:13:47 by kforouzm          #+#    #+#             */
/*   Updated: 2023/08/19 16:35:12 by kforouzm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
/*
#include <stdio.h>

int main(void)
{
	char myString[] = "Hello, World!";
	int count = ft_strlen(myString);

	printf("number of charectors in the string = %d\n", count);

	return(0);
}
*/
