/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:16:25 by szko              #+#    #+#             */
/*   Updated: 2023/05/30 14:08:35 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (nb > 0)
	{
		fac *= nb;
		nb--;
	}
	return (fac);
}
/*
int	main(void)
{
	printf("%i,%i,%i,%i,%i",
		ft_iterative_factorial(1),
		ft_iterative_factorial(0),
		ft_iterative_factorial(-1),
		ft_iterative_factorial(3),
		ft_iterative_factorial(13));
}
*/
