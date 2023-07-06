/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 12:21:32 by szko              #+#    #+#             */
/*   Updated: 2023/05/29 17:16:09 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > -2147483648 || nb <= 2147483647)
	{
		if (nb == -2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			ft_putnbr(147483648);
			return ;
		}
		else if (nb < 0)
		{	
			ft_putchar('-');
			nb = -nb;
			ft_putnbr(nb);
		}
		else if (nb >= 10)
		{	
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
		{	
			ft_putchar(nb + '0');
		}	
	}
}
