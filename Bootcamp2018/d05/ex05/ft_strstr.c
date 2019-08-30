/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 10:18:22 by shat              #+#    #+#             */
/*   Updated: 2018/09/25 12:19:10 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] == to_find[j] && str[i] != '\0' && to_find[j] != '\0')
		{
			i++;
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i - j);
		else
			i = i - j;
		i++;
	}
	return (0);
}

int		main(void)
{
	printf("%s\n", ft_strstr("asdf qwerty", "wer"));
	printf("%s\n", ft_strstr("asdf qwerty qwerty", "wer"));
	printf("%s\n", ft_strstr("asdf qwerty", "qwerty1"));
	printf("%s\n", ft_strstr("", "wer"));
	printf("%s\n", ft_strstr("asdf qwerty", "zxcv"));
	printf("%s\n", ft_strstr("asdf qwerty", ""));
	return (0);
}
