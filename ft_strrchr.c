/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:34:03 by ialves-m          #+#    #+#             */
/*   Updated: 2022/11/07 12:39:13 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		slen;
	char	*ptr;

	ptr = (char *)s;
	slen = ft_strlen(s);
	if (c == '\0')
		return (ptr + slen);
	while (slen >= 0)
	{
		if (s[slen] == c)
			return ((char *)s + slen);
		slen--;
	}
	return (NULL);
}
/*
int main(void)
{
	char str[] = "ivo daniel";

	printf("%s", ft_strrchr(str, 'i'));

}*/
