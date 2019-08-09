/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 10:52:48 by shat              #+#    #+#             */
/*   Updated: 2018/09/24 18:46:30 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int sign;
	int ans;

	sign = 1;
	ans = 0;
	while (*str == '\n' || *str == '\t' || *str == '\f' || *str == '\v'
			|| *str == '\r' || *str == ' ')
		str++;
	if (*str == '-' && str++)
		sign = -1;
	else if (*str == '+' && str++)
		sign = 1;
	while (*str >= '0' && *str <= '9')
	{
		ans = ans * 10 + (*str - '0');
		str++;
	}
	return (ans * sign);
}

int		main(void)
{
	printf("%d\n", ft_atoi("-123"));
	printf("%d\n", ft_atoi("\t\n\r 456"));
	return (0);
}
