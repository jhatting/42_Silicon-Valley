/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 11:51:03 by shat              #+#    #+#             */
/*   Updated: 2018/09/21 12:00:08 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <unistd.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		length;
	char	temp;

	length = 0;
	while (str[length] != '\0')
		length++;
	i = -1;
	while (++i < --length)
	{
		temp = str[i];
		str[i] = str[length];
		str[length] = temp;
	}
	return (str);
}

int		main ()
{
	char test1[] = "asdf";
	printf("%s\n", ft_strrev(test1));
	char test2[] = "qwert";
	printf("%s\n", ft_strrev(test2));
	char test3[] = "z";
	printf("%s\n", ft_strrev(test3));
	char test4[] = "bc";
	printf("%s\n", ft_strrev(test4));
}
