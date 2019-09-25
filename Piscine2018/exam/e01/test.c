/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 16:48:41 by shat              #+#    #+#             */
/*   Updated: 2018/10/10 18:34:41 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_repeat_alpha(char *str)
{
	int i;

	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			i = *str;
			while (i-- >= 'A')
				write(1, &*str, 1);
		}
		else if (*str >= 'a' && *str <= 'z')
		{
			i = *str;
			while (i-- >= 'a')
				write(1, &*str, 1);
		}
		else
			write(1, &*str, 1);
		str++;
	}
	write(1, "\n", 1);
	return (*str);
}

int		main(int ac, char **av)
{
	if (ac > 1)
		ft_repeat_alpha(av[1]);
	else
		write(1, "\n", 1);
	return (0);
}
