/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:18:37 by szko              #+#    #+#             */
/*   Updated: 2023/05/20 11:25:59 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	sorted;
	int	temp;

	i = 0;
	j = 0;
	while (!sorted)
	{
		sorted = 1;
		while (j < size - i - 1)
		{
			temp = tab[j];
			tab[j] = tab[j + 1];
			tab[j + 1] = temp;
			sorted = 0;
		}
		j++;
	}
	i++;
}
/*
int main() {
    int arr[] = {5, 2, 8, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    ft_sort_int_tab(arr, size);

    printf("\nSorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/
