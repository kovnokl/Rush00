/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_utilities.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Knickel <Knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:25:07 by Knickel           #+#    #+#             */
/*   Updated: 2022/02/15 14:24:51 by Knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arr_utilities.h"

void	ft_putstr(char *str)
{
	int	ctr;

	ctr = 0;
	while (str[ctr])
		ctr++;
	write(1, str, ctr);
}

void	clear_elements(int *arr, int n)
{
	int	counter;

	counter = 0;
	while (counter < n)
	{
		arr[counter] = 0;
		counter++;
	}
}

void	paste_array_values(int *dest, int *src, int n)
{
	int	counter;

	counter = 0;
	while (counter < n)
	{
		dest[counter] = src[counter];
		counter++;
	}
}

int	arr_contains(int *arr, int c, int n)
{
	int	counter;

	counter = 0;
	while (counter < n)
	{
		if (arr[counter] == c)
			return (1);
		counter++;
	}
	return (0);
}
