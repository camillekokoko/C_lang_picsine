/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:45:10 by szko              #+#    #+#             */
/*   Updated: 2023/05/29 17:50:56 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
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
