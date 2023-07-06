/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:14:40 by szko              #+#    #+#             */
/*   Updated: 2023/05/30 10:47:56 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb > 2147395600 || nb <= 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%i,%i,%i,%i,%i",
		ft_sqrt(4),
		ft_sqrt(64),
		ft_sqrt(0),
		ft_sqrt(-16),
		ft_sqrt(INT_MAX));
	return (0);
}
*/
