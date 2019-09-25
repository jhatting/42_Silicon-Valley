/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 16:05:51 by shat              #+#    #+#             */
/*   Updated: 2018/09/27 16:11:23 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions: 
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);*/

char *ft_strcpy(char *s1, char *s2)
{
	int i;
	i = 0;

	while(s2[i])
	{
		s1[i] = s2[i];
		i += 1;
	}
	s1[i] = s2[i];
	return(s1);
}
