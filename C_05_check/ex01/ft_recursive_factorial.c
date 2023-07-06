/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:22:41 by szko              #+#    #+#             */
/*   Updated: 2023/05/30 12:34:35 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	printf("%i,%i,%i,%i,%i",
		ft_recursive_factorial(1),
		ft_recursive_factorial(0),
		ft_recursive_factorial(-1),
		ft_recursive_factorial(3),
		ft_recursive_factorial(13));
}
*/
