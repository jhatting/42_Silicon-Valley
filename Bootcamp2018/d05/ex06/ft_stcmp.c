/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stcmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 11:50:53 by shat              #+#    #+#             */
/*   Updated: 2018/09/25 12:33:55 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int 	main()
{
    char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
    int result;
    result = ft_strcmp(str1, str2);
    printf("strcmp(str1, str2) = %d\n", result);
	result = ft_strcmp(str1, str3);
	printf("strcmp(str1, str3) = %d\n", result);
	printf("strcmp('A', '') = %d\n", result);
	printf("strcmp('', 'A') = %d\n", result);
	printf("\nInt - Null: %d\n", 'A' - '\0');
	return (0);
}
