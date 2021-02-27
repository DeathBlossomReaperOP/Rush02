/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lberto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 14:23:52 by lberto            #+#    #+#             */
/*   Updated: 2021/02/27 15:38:43 by lberto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strings.h"
#include "ft_error_arg.h"

void	ft_error_arg(int argc, char **argv)
{
	(void)argv;
	if (argc < 2 || argc > 3)
	{
		ft_putstr("Error\n");
		ft_putstr("usage:\n\t./rush-02: [source_file] value\n");
		if (argc < 2)
			ft_putstr("Not enough arguments\n");
		if (argc > 3)
			ft_putstr("Too many arguments\n");
	}
	if (ft_atoi(argv[1]) == -1)
	{
		ft_putstr("Error\n");
	}
}
