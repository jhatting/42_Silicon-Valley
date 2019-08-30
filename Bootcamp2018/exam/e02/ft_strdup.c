/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 14:30:37 by shat              #+#    #+#             */
/*   Updated: 2018/10/06 15:05:59 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
*/

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int s;
	char *dest;
	int i;

	i = 0;
	s = 0;
	while (src[s] != '\0')
		s++;
	dest = (char *)malloc(sizeof(*dest) * (s + 1));
	while (i < s)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int main(void) {
  printf("%s", ft_strdup("Salut"));
  return 0;
}
