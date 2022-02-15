/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tower_puzzle_utilities.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Knickel <Knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:34:53 by Knickel           #+#    #+#             */
/*   Updated: 2022/02/15 14:18:31 by Knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tower_puzzle_utilities.h"

int	*get_open_numbers_in_array(int *arr, int n)
{
	int	*output;
	int	counter;

	output = (int *) malloc(5 * sizeof(int));
	counter = 0;
	clear_elements(output, 5);
	while (counter < n)
	{
		output[arr[counter]] = arr[counter];
		counter++;
	}
	return (output);
}

int	row_is_filled(int *arr, int n)
{
	int	ctr;

	ctr = 0;
	while (*arr)
	{
		arr++;
		ctr++;
	}
	if (ctr < n)
		return (0);
	return (1);
}

int	visible_tower_amount(int *arr, int n)
{
	int	counter;
	int	visible_towers;
	int	tmp;

	tmp = 0;
	visible_towers = 0;
	counter = 0;
	while (counter < n)
	{
		if (tmp < arr[counter])
		{
			tmp = arr[counter];
			visible_towers++;
		}
		counter++;
	}
	return (visible_towers);
}

int	visible_tower_amount_rev(int *arr, int n)
{
	int	counter;
	int	visible_towers;
	int	tmp;

	tmp = 0;
	visible_towers = 0;
	counter = n;
	while (counter > 0)
	{
		counter--;
		if (tmp < arr[counter])
		{
			tmp = arr[counter];
			visible_towers++;
		}
	}
	return (visible_towers);
}
