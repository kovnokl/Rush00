/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   towers_puzzle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Knickel <Knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 09:12:19 by Knickel           #+#    #+#             */
/*   Updated: 2022/02/15 14:26:34 by Knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "towers_puzzle.h"

void	start_puzzle(char *args)
{
	int	*border_vals;
	int	*matrix;
	int	error_code;

	border_vals = (int *)malloc(16 * sizeof(int));
	matrix = (int *)malloc(16 * sizeof(int));
	error_code = fetch_inputs(args, border_vals);
	if (error_code == 0)
		ft_putstr("Err 000: Not enough arguments\n");
	if (error_code == -1)
		ft_putstr("Err 001: Too many arguments\n");
	if (error_code == -2)
		ft_putstr("Err 002: BDU/Layer 11 error found\n");
	if (error_code < 1)
		return ;
	paste_array_values(matrix, add_value_recursive(border_vals, matrix, 0), 16);
	if (*matrix == 0)
		ft_putstr("Error\n");
	else
		print_square(matrix);
}

// return values:
// 1		worked fine!
// 0		not enough arguments
// -1		too many arguments
// -2		wrong argument syntax/values
int	fetch_inputs(char *args, int *output)
{
	int	counter;

	counter = 0;
	while (*args)
	{
		if (counter == 16)
			return (-1);
		else if (*args >= '1' && *args <= '4')
		{
			output[counter] = *args - '0';
			counter++;
			if (args[1] == ' ')
				args += 2;
			else if (!args[1])
				break ;
			else
				return (-2);
		}
		else
			return (-2);
	}
	if (counter < 16)
		return (0);
	return (1);
}

int	*add_value_recursive(int *b_v, int *matrix, int s)
{
	int	*new_matrix;
	int	counter;
	int	*cur_row;
	int	*cur_col;

	new_matrix = (int *)malloc(16 * sizeof(int));
	cur_row = (int *)malloc(4 * sizeof(int));
	cur_col = (int *)malloc(4 * sizeof(int));
	paste_array_values(new_matrix, matrix, 16);
	if (should_return_matrix(new_matrix, b_v, s))
		return (new_matrix);
	counter = 0;
	set_values(cur_col, cur_row, matrix, s);
	while (counter < 4)
	{
		if (can_use_number(cur_row, cur_col, counter + 1))
		{
			new_matrix[s] = counter + 1;
			if (*add_value_recursive(b_v, new_matrix, s + 1) != 0)
				return (add_value_recursive(b_v, new_matrix, s + 1));
		}
		counter++;
	}
	new_matrix[0] = 0;
	return (new_matrix);
}

int	should_return_matrix(int *matrix, int *b_v, int s)
{
	int	*c_r;
	int	*c_c;

	c_r = (int *)malloc(4 * sizeof(int));
	c_c = (int *)malloc(4 * sizeof(int));
	set_values(c_c, c_r, matrix, s - 1);
	if ((row_is_filled(c_c, 4)
			&& ! row_works(c_c, b_v[8 + (s - 1) / 4], b_v[12 + (s - 1) / 4]))
		|| (row_is_filled(c_r, 4)
			&& ! row_works(c_r, b_v[(s - 1) % 4], b_v[((s - 1) % 4) + 4])))
	{
		matrix[0] = 0;
		return (1);
	}
	if (row_is_filled(c_c, 4)
		&& row_works(c_c, b_v[8 + (s - 1) / 4], b_v[12 + (s - 1) / 4])
		&& row_is_filled(c_r, 4)
		&& row_works(c_r, b_v[(s - 1) % 4], b_v[((s - 1) % 4) + 4]))
		return (1);
	return (0);
}

void	print_square(int *matrix)
{
	int	counter1;
	int	counter2;
	int	p;

	counter1 = 0;
	while (counter1 < 4)
	{
		counter2 = 0;
		while (counter2 < 4)
		{
			p = matrix[counter1 * 4 + counter2] + '0';
			write(1, &p, 1);
			write(1, " ", 1);
			counter2++;
		}
		write(1, "\n", 1);
		counter1++;
	}
}
