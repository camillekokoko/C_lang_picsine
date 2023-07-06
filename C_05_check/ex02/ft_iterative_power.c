/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:41:24 by szko              #+#    #+#             */
/*   Updated: 2023/05/29 17:51:14 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
	{
		return (0);
	}
	while (power > 0)
	{
		res *= nb;
		power --;
	}
	return (res);
}
/*
int	main(void)
{
	printf("%i,%i,%i,%i,%i,%i",
		ft_iterative_power(0, 0),
		ft_iterative_power(-1, 2),
		ft_iterative_power(2, 4),
		ft_iterative_power(2, 32),
		ft_iterative_power(5, -2),
		ft_iterative_power(5, 0));
}
*/
