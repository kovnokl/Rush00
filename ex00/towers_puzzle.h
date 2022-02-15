/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   towers_puzzle.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Knickel <Knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 09:12:17 by Knickel           #+#    #+#             */
/*   Updated: 2022/02/15 14:24:00 by Knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOWERS_PUZZLE_H
# define TOWERS_PUZZLE_H

# include <stdio.h>
# include "tower_puzzle_utilities.h"
# include "arr_utilities.h"

void	start_puzzle(char *args);
int		fetch_inputs(char *args, int *output);
int		*add_value_recursive(int *b_v, int *matrix, int start);
int		should_return_matrix(int *matrix, int *b_v, int s);
void	print_square(int *matrix);

#endif