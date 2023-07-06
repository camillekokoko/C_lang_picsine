/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:05:54 by szko              #+#    #+#             */
/*   Updated: 2023/05/25 15:06:00 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void)
{
    char str1[] = "asdf\nasfas";
    char str2[] = "123abc";
    char str3[] = "";

    int result1 = ft_str_is_printable(str1);
    int result2 = ft_str_is_printable(str2);
    int result3 = ft_str_is_printable(str3);

    printf("Result for str1: %d\n", result1);
    printf("Result for str2: %d\n", result2);
    printf("Result for str3: %d\n", result3);

    return (0);
}
*/
