/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:46:54 by shat              #+#    #+#             */
/*   Updated: 2018/10/06 16:52:37 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n);
*/
#include <stdio.h>
#include <stdlib.h>

int        is_power_of_2(unsigned int n)
{
    return ((n != 0) && !(n & (n - 1)));
}

int        main(int ac, char **av)
{
    int nbr = atoi(av[1]);
    printf("%d", is_power_of_2(nbr));
    return (0);
}

