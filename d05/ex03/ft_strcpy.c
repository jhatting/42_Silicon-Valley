/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 19:44:44 by shat              #+#    #+#             */
/*   Updated: 2018/09/24 19:44:49 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = src[i];
	return (dest);
}

int		main(void)
{
	char dest[] = "jarrod";
	char src[] = "sam";

	ft_strcpy(dest, src);
	printf("%s\n""%s\n", dest, src);
}
