/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:41:22 by ialves-m          #+#    #+#             */
/*   Updated: 2022/11/19 10:03:10 by ledos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	int		i;

	i = 0;
	subs = (char *)malloc(len * sizeof(char) + 1);
	if (!s || !len || start >= ft_strlen(s))
	{
		subs[0] = '\0';
		return (subs);
	}
	else if (!subs)
		return (NULL);
	while (i < (int)len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}

/*
int main(void)
{
	char str[] = "uma bem frase comprida";
	
	printf("%s", ft_substr(str, 14, 3));
}
*/
