/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 13:14:33 by shat              #+#    #+#             */
/*   Updated: 2019/08/29 13:15:27 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		n;

	if (s == NULL || c == 0)
		return (NULL);
	n = ft_countwords(s, c);
	if (!(strs = (char **)malloc(sizeof(char *) * (n + 1))))
		return (NULL);
	strs[n] = 0;
	i = 0;
	while (s[i])
		i++;
	while (--n >= 0)
	{
		while (i > 0 && s[i - 1] == c)
			i--;
		j = i;
		while (j > 0 && s[j - 1] != c)
			j--;
		strs[n] = ft_strndup(s + j, i - j);
		i = j;
	}
	return (strs);
}
