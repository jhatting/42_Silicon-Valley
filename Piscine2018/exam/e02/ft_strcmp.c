/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 12:19:52 by shat              #+#    #+#             */
/*   Updated: 2018/10/09 14:02:30 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions: 
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);
*/

#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && (s1[i] == s2[i]))
	{
		s1 += 1;
		s2 += 2;
	}
	return(s1[i] - s2[i]);
}
int main(void)
{
	char s1[] = "abcd";
	char s2[] = "AbCd";
	int result;

	result = ft_strcmp(s1, s2);
	printf("strcmp(str1, str2) = %d\n", result);
	return(0);
}~
~
