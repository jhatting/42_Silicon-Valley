/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhatting <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 22:11:25 by jhatting          #+#    #+#             */
/*   Updated: 2018/08/01 22:27:42 by jhatting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (--argc)
	{
		while (argv[argc][i])
			ft_putchar(argv[argc][i++]);
		i = 0;
		ft_putchar('\n');
	}
	return (0);
}
