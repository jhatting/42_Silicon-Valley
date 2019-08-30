/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 20:00:22 by shat              #+#    #+#             */
/*   Updated: 2018/09/26 21:46:57 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : ft_countdown
Expected files   : ft_countdown.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays all digits in descending order, followed by a
newline.

Example:
$> ./ft_countdown | cat -e
9876543210$
$>
*/

#include <unistd.h>

int main(void)
{
	write(1, "9876543210\n", 11);
		return (0);
}
