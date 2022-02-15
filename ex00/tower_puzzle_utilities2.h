/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tower_puzzle_utilities2.h                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Knickel <Knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:52:31 by Knickel           #+#    #+#             */
/*   Updated: 2022/02/15 14:21:07 by Knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOWER_PUZZLE_UTILITIES2_H
# define TOWER_PUZZLE_UTILITIES2_H

# include <stdlib.h>
# include "tower_puzzle_utilities.h"
# include "arr_utilities.h"

int		can_use_number(int *cur_row, int *cur_col, int nb);
int		row_works(int *row, int border_val1, int border_val2);
void	set_values(int *cur_row, int *cur_col, int *matrix, int start);

#endif