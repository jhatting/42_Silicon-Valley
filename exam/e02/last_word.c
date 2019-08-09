/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:52:57 by shat              #+#    #+#             */
/*   Updated: 2018/10/11 12:44:49 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/


#include <unistd.h>

int main(int argc, char *argv[])
{
    int i = 0;
    
    if (argc == 2)
    {
        while (argv[1][i])
            i++;
        i--;
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i--;
        while (argv[1][i] != '\0' &&(argv[1][i] != ' ' && argv[1][i] != '\t'))
            i--;
        i++;
        while (argv[1][i] != '\0' &&(argv[1][i] != ' ' && argv[1][i] != '\t'))
            write(1, &argv[1][i++], 1);
    }
    write(1, "\n", 1);
    return(0);
}

