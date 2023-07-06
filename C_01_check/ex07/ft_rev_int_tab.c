/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:57:34 by szko              #+#    #+#             */
/*   Updated: 2023/05/20 11:17:00 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
/*
void ft_putnbr(int num) {
    if (num == 0) {
        char digit = '0';
        write(1, &digit, 1);
        return;
    }
    
    if (num < 0) {
        char sign = '-';
        write(1, &sign, 1);
        num = -num;
    }
    
    int reversedNum = 0;
    while (num > 0) {
        int digit = num % 10;
        char digitChar = '0' + digit;
        write(1, &digitChar, 1);
        num /= 10;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    write(1, "Original array: ", 16);
    for (int i = 0; i < size; i++) {
        ft_putnbr(arr[i]);
        write(1, " ", 1);
    }
    
    ft_rev_int_tab(arr, size);
    
    write(1, "\nReversed array: ", 16);
    for (int i = 0; i < size; i++) {
        ft_putnbr(arr[i]);
        write(1, " ", 1);
    }
    
    return 0;
}
*/
