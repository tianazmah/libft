/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnait <hnait@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 03:13:47 by hnait             #+#    #+#             */
/*   Updated: 2022/10/14 12:44:27 by hnait            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_space(char c)
{
	if (
		c == ' '
		|| c == '\t'
		|| c == '\n'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r'
	)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long	i;

	i = 0;
	while (is_space(*str))
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i += *str - '0';
		i *= 10;
		str++;
	}
	return (i / 10);
}
