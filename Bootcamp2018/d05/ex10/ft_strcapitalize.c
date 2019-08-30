/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shat <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 18:52:47 by shat              #+#    #+#             */
/*   Updated: 2018/09/25 20:32:22 by shat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*head;

	head = str;
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
	++str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		if (!(*(str - 1) >= '0' && *(str - 1) <= '9')
				&& !(*(str - 1) >= 'A' && *(str - 1) <= 'Z')
					&& !(*(str - 1) >= 'a' && *(str - 1) <= 'z')
						&& *str >= 'a' && *str <= 'z')
			*str -= 32;
		++str;
	}
	return (head);
}

int		main(void)
{
 char str[] = "asdf qWeRtY ZXCV 100TIS\n";
printf("%s", ft_strcapitalize(str));
char str2[] = "asdf-qWeRtY ZXCV 100TIS";
printf("%s", ft_strcapitalize(str2));
return (0);
}

