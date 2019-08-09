/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 21:41:55 by shat              #+#    #+#             */
/*   Updated: 2018/09/26 21:43:46 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : aff_z
Expected files   : aff_z.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the first 'z'
character it encounters in it, followed by a newline. If there are no
'z' characters in the string, the program writes 'z' followed
by a newline. If the number of parameters is not 1, the program displays
'z' followed by a newline.

Example:

$> ./aff_z "abc" | cat -e
z$
$> ./aff_z "dubO a POIL" | cat -e
$
$> ./aff_z "zaz sent le poney" | cat -e
z$
$> ./aff_z | cat -e
z$ */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc != 2)	// if argc is not equal(!=) to 2
		write(1, "z\n", 2);// write "z" followed by a new line
	else
	{
		while (argv[1][i])// or everything else must run the function with argv[1] as a parameter
		{
			if (argv[1][i] != 'z')// parameter is that is argv[1] is not equal to "z" then move on and increment by one

				i++;// increment by one
			else
			{
				write(1, "z", 1);// or else print "z"
				break;// print only only once by breaking the loop "break" function
			}
		}
		write(1, "\n", 1);// regardless about what is found in the "else" function print a newline
	}
	return (0);
}
// argc is the argument count.
// an argument count can be understood as the following:
// when you run ./<filename> ... to execute a program, this is considered 1 argument
// when you run ./<filename> "whatever is in these quotes" this is considered 2 arguments
// when you run ./<filename> "whatever is in these quotes" "and these" this is considered 3 arguments
// argc essentially just keeps track of the number of arguments the user uses.
//
// the question says specifically asks us  "if the number of parameters is not 1"
// parameters (in this case) is the arguments that follows the initial command: ./<filename>
// so ./<filename> "whatever is in these quotes" is considered 1 parameter.
//
// **argv (argument vector) takes arguments as input
// argv takes .<filename> "whatever is in these quotes"
// and passes .<filename> as argv[0] and "whatever is in these quotes" as argv[1] as parameters
//
// notice that **argv is a pointer to a pointer
// this pointer points to *str
// using this relationship, we can pass "whatever is in these quotes"
// as argv[1] through *str so we can print out the output using array
