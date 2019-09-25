/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhatting <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 21:52:12 by jhatting          #+#    #+#             */
/*   Updated: 2018/07/28 23:34:13 by jhatting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int res;

	res = 1;
	while (power > 0)
	{
		if (power & 1)
			res = res * nb;
		power = power >> 1;
		nb = nb * nb;
		if (power <= 0)
			return (0);
	}
	return (res);
}

