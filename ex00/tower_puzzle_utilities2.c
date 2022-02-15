/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tower_puzzle_utilities2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Knickel <Knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:54:51 by Knickel           #+#    #+#             */
/*   Updated: 2022/02/15 14:19:16 by Knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tower_puzzle_utilities2.h"

int	can_use_number(int *cur_row, int *cur_col, int nb)
{
	int	*open_nums_row;
	int	*open_nums_coll;

	open_nums_row = (int *) malloc(5 * sizeof(int));
	open_nums_coll = (int *) malloc(5 * sizeof(int));
	open_nums_row = get_open_numbers_in_array(cur_row, 4);
	open_nums_coll = get_open_numbers_in_array(cur_col, 4);
	if (arr_contains(open_nums_row, nb, 5)
		|| arr_contains(open_nums_coll, nb, 5))
	{
		return (0);
	}
	return (1);
}

int	row_works(int *row, int border_val1, int border_val2)
{
	if (visible_tower_amount(row, 4) == border_val1
		&& visible_tower_amount_rev(row, 4) == border_val2)
		return (1);
	return (0);
}

void	set_values(int *cur_row, int *cur_col, int *matrix, int start)
{
	int	counter;

	counter = 0;
	while (counter < 4)
	{
		cur_row[counter] = matrix[start - (start % 4) + counter];
		cur_col[counter] = matrix[start % 4 + counter * 4];
		counter++;
	}
}
