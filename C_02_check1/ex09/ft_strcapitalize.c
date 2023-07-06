/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:18:02 by szko              #+#    #+#             */
/*   Updated: 2023/05/25 14:49:30 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	flag;
	int	i;

	flag = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (flag)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
			flag = 0;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
			}
		}	
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char str1[] = "salut, comment tu vas ?";
    char str2[] = "42mots quarante-deux";
    char str3[] = "cinquante+et+un";

    printf("%s\n", ft_strcapitalize(str1));
    printf("%s\n", ft_strcapitalize(str2));
    printf("%s\n", ft_strcapitalize(str3));

    return (0);

}
*/
