/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tower_puzzle_utilities.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Knickel <Knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:34:56 by Knickel           #+#    #+#             */
/*   Updated: 2022/02/15 14:19:19 by Knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOWER_PUZZLE_UTILITIES_H
# define TOWER_PUZZLE_UTILITIES_H

# include <stdlib.h>
# include "arr_utilities.h"
# include "tower_puzzle_utilities2.h"

int	*get_open_numbers_in_array(int *arr, int n);
int	row_is_filled(int *arr, int n);
int	visible_tower_amount(int *arr, int n);
int	visible_tower_amount_rev(int *arr, int n);

#endif