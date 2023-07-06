/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:16:28 by szko              #+#    #+#             */
/*   Updated: 2023/05/18 17:02:46 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	char	display;

	if (n < 0)
	{
		display = 'N';
	}
	else
	{
		display = 'P';
	}
	ft_putchar(display);
}
/*
int	main(void)
{
	ft_is_negative(-10);
	return (0);
}
*/
