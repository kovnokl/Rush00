/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_utilities.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Knickel <Knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:25:31 by Knickel           #+#    #+#             */
/*   Updated: 2022/02/15 14:30:15 by Knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARR_UTILITIES_H
# define ARR_UTILITIES_H

# include <unistd.h>

void	ft_putstr(char *str);
void	clear_elements(int *arr, int n);
void	paste_array_values(int *dest, int *src, int n);
int		arr_contains(int *arr, int c, int n);

#endif