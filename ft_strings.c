/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 13:24:23 by alellouc          #+#    #+#             */
/*   Updated: 2021/02/27 16:09:20 by lberto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

long long int		ft_atoi(char *str)
{
	long long int		atoi;

	atoi = 0;
	while (*str == 43 || *str == 45)
		return (-1);
	while (*str >= 48 && *str <= 57)
	{
		atoi = atoi * 10 + (*str - 48);
		str++;
	}
	return (atoi);
}
int		ft_isspace(char str)
{
	if (str == 32 || (str >= 9 && str <= 13))
		return (1);
	return (0);
}
