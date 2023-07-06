/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:59:59 by szko              #+#    #+#             */
/*   Updated: 2023/05/19 16:01:19 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	number1;
	int	number2;
	int	div;
	int	*pdiv;
	int	mod;
	int	*pmod;

	pdiv = &div;
	pmod = &mod;
	number1 = 10;
	number2 = 2;
	ft_div_mod(number1, number2, &div, &mod);
	printf("%d%d\n", div, mod);
	return (0);
}
*/
