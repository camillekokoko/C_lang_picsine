/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:16:33 by szko              #+#    #+#             */
/*   Updated: 2023/06/05 13:25:27 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*res;

	i = 0;
	if (min >= max)
		return (NULL);
	res = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}
/*
int	main(void)
{
	int *range;

	range = ft_range(0, 100);
	printf("%d,%d,%d,%p", range[0], range[50], range[99], ft_range(20, 20));
}
*/
