/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:00:03 by szko              #+#    #+#             */
/*   Updated: 2023/05/25 16:55:42 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*
int main(void)
{
    char str1[] = "ABC";
    char str2[] = "AsdfsdfdsfSSSSSSSS";
    char str3[] = "";

    printf("Result for str1: %s\n", ft_strlowcase(str1));
    printf("Result for str2: %s\n", ft_strlowcase(str2));
    printf("Result for str3: %s\n", ft_strlowcase(str3));

    return (0);
}
*/
