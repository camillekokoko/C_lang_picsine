/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:28:47 by szko              #+#    #+#             */
/*   Updated: 2023/05/29 16:33:01 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	parity;
	int	number;

	parity = 0;
	number = 0;
	if (str == NULL)
		return (0);
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			parity++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		number *= 10;
		number += *str - 48;
		++str;
	}
	if (! (parity % 2))
		return (number);
	return (-number);
}
/*
int	main(void)
{
	char	*s = "   ---+--+1234ab567";
	printf("%d\n", ft_atoi(s));
}
*/
