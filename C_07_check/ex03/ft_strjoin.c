/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:17:08 by szko              #+#    #+#             */
/*   Updated: 2023/06/05 16:42:35 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_total_str(char **strs, int size)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	return (total_len);
}

void	ft_strcpy(char *result, char **strs, int size, char *sep)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	res = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			result[res++] = strs[i][j++];
		}
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
			{
				result[res++] = sep[j++];
			}
		}
		i++;
	}
	result[res] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		t_len;
	int		s_len;
	char	*result;

	t_len = 0;
	s_len = 0;
	result = malloc(sizeof(char) * (t_len + s_len + 1));
	if (result == NULL)
	{
		result[0] = '\0';
		return (result);
	}
	t_len = ft_total_str(strs, size);
	s_len = ft_strlen(sep);
	if (size < 1)
	{
		result[0] = '\0';
		return (result);
	}
	ft_strcpy(result, strs, size, sep);
	return (result);
}	
