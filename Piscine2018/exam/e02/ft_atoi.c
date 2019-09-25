/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 11:31:27 by shat              #+#    #+#             */
/*   Updated: 2018/10/06 14:23:59 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
*/
#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str)
{
	int		sign;
	int		ans;

	ans = 0;
	sign = 1;
	if (str)
	{
		while (*str && (*str == '\t' || *str == '\f' || *str == '\r'
					|| *str == '\n' || *str == '\v' || *str == ' '))
			str++;
		if (*str == '-' && str++)
			sign = -1;
		else if (*str == '+' && str++)
			sign = 1;
		while (*str && *str >= 48 && *str <= 57)
				ans = ans * 10 + (*str++ - '0');
	}
	printf("%d\n", (sign * ans));
	return (sign * ans);
}

int		main(void)
{
	ft_atoi("\n \t \t \v \f \r 		2147483647");
	printf("%d\n", atoi(" \n \t \v \f \r  	2147483647"));
	return 0;
}
