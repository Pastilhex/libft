/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:47:07 by ialves-m          #+#    #+#             */
/*   Updated: 2022/11/22 09:00:52 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		slen;
	char	*ptr;
	int		last;

	last = ft_strlen(s);
	ptr = (char *)s;
	slen = 0;
	if (c == '\0')
		return (ptr + last);
	while (s[slen] != '\0')
	{
		if (s[slen] == c)
			return ((char *)s + slen);
		slen++;
	}
	return (NULL);
}
/*
int main(void)
{
	char str[] = "ivo daniel";

	printf("%s", ft_strchr(str, 'd'));

}
*/
