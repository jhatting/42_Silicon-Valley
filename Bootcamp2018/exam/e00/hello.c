/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 20:03:49 by shat              #+#    #+#             */
/*   Updated: 2018/09/26 21:51:06 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Assignment name  : hello
Expected files   : hello.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays "Hello World!" followed by a \n.

Example:

$>./hello
Hello World!
$>./hello | cat -e
Hello World!$
$>
*/

#include <unistd.h>

int main(void)
{
	write(1, "Hello World\n", 13);
	return (0);
}
