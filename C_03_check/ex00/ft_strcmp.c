# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
#                                                     +:+ +:+         +:+      #
#    By: szko <szko@student.42adel.org.au>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/25 15:24:41 by szko              #+#    #+#              #
/*   Updated: 2023/05/25 16:37:25 by szko             ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return s1[i] -s2[i];
		}
	i++;
	}
	return (0);
}

/*
int	main(void)
{
	char str1[] = "Hello";
	char str2[] = "World";
	char str3[] = "Hello";

	printf("cmp str1 and str2 %d\n", ft_strcmp(str1, str2);
	printf("cmp str1 and str 

}

