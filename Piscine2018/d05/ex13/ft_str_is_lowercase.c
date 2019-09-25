/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 21:05:09 by shat              #+#    #+#             */
/*   Updated: 2018/09/25 21:06:45 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int i;
	
	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main(void)
{
	int result;

    result = ft_str_is_lowercase("asdf");
    printf("Result: %d\n", result);

    result = ft_str_is_lowercase("asdF");
    printf("Result: %d\n", result);

    result = ft_str_is_lowercase("ASDF");
    printf("Result: %d\n", result);

    result = ft_str_is_lowercase("1234");
    printf("Result: %d\n", result);

    result = ft_str_is_lowercase("");
    printf("Result: %d\n", result);

    return 0;
}
