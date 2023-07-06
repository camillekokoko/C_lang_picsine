/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:52:52 by szko              #+#    #+#             */
/*   Updated: 2023/05/18 17:03:21 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char d)
{
	write(1, &d, 1);
}

void	ft_putchar_comb(int a, int b, int c)
{
	ft_putchar('0' + a);
	ft_putchar('0' + b);
	ft_putchar('0' + c);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;	

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{	
			c = b + 1;
			while (c <= 9)
			{
				ft_putchar_comb(a, b, c);
				if (a != 7 || b != 8 || c != 9)
				{
					write(1, ", ", 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
