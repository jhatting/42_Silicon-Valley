/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 15:15:47 by shat              #+#    #+#             */
/*   Updated: 2018/10/02 20:10:49 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : aff_a
Expected files   : aff_a.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program just writes a newline. If the number of parameters is not
1, the program displays 'a' followed by a newline.

Example:

$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "dubO a POIL" | cat -e
a$
$> ./aff_a "zz sent le poney" | cat -e
$
$> ./aff_a | cat -e
a$ 
#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc != 2)	// if argc is not equal(!=) to 2
		write(1, "a\n", 2);// write "a" followed by a new line
	else
	{
		while (argv[1][i])// or everything else must run the function with argv[1] as a parameter
		{
			if (argv[1][i] != 'a')// parameter is that is argv[1] is not equal to "a" then move on and increment by one

				i++;// increment by one
			else
			{
				write(1, "a", 1);// or else print "a" 
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
// as argv[1] through *str so we can print out the output using arrays
//
// 
 * compile normally with gcc
 * test this with ./<filename> | cat -e
 		* and it should display: a$
 * test this with ./<filename> "swarley" | cat -e
 		* and it should display: a$
 * test this with ./<filename> "swarley" | cat -e
 		* and it should display: $
 * good job! you got it!*/

#include <unistd.h>

int		main(int argc, char *agrv[])
{
	int i = 0;

	if (argc != 2)
		write(1, "a\n", 2);
	else
	{
		while (argv[1][i])
		{
			if (argv[1][i] != 'a')
				i++;
			else
			{
				write(1, "a", 1);
				break;
			}
		}
		write(1, "\n", 1);
	}
	return (0);
}
