/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Knickel <Knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 09:28:47 by Knickel           #+#    #+#             */
/*   Updated: 2022/02/15 13:57:33 by Knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "towers_puzzle.h"

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		ft_putstr("Error 010: Program got no arguments");
		return (0);
	}
	else if (argc > 2)
	{
		ft_putstr("Error 011: Program got more than 1 argument");
		return (0);
	}
	start_puzzle(argv[1]);
}
