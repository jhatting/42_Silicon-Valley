/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 14:12:48 by shat              #+#    #+#             */
/*   Updated: 2019/08/20 15:39:45 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*strdup(const char *src)
{
	size_t len;
	char *dst;

	len = strlen(src) + 1;
	dst = malloc(len);
	if (dst == NULL)
	return (NULL);
	memcpy(dst, src, len);
	return (dst);
}
