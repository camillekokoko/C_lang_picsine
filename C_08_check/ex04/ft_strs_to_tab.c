/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 19:22:10 by szko              #+#    #+#             */
/*   Updated: 2023/06/08 13:17:38 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
//#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (NULL)
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		len;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL || src == NULL)
	{
		dest = NULL;
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	i = 0;
	arr = (t_stock_str *)malloc(sizeof(arr) * (ac + 1));
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup[i];
		i++;
	}
	arr[ac].size = 0;
	arr[ac].str = 0;
	arr[ac].copy = 0;
	return (arr);
}
