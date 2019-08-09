/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 16:22:32 by shat              #+#    #+#             */
/*   Updated: 2018/09/25 17:20:03 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && (i < n - 1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
    int result;
	
	result = ft_strncmp("asdf", "asdf", 4);
	printf("strcmp(str1, str2) = %d\n", result);
	result = ft_strncmp("asde", "asdf", 4);
	printf("strcmp(str1, str3) = %d\n", result);
	result = ft_strncmp("asdg", "asdf", 4);
	printf("strcmp(str1, str3) = %d\n", result);
	result = ft_strncmp("asdf", "asdf", 3);
    printf("strcmp(str1, str3) = %d\n", result);
	result = ft_strncmp("asde", "asdf", 3);
	printf("strcmp(str1, str3) = %d\n", result);
	return (0);
}
