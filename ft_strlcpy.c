/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:37:44 by ialves-m          #+#    #+#             */
/*   Updated: 2022/11/22 09:36:21 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	slen;
	unsigned int	i;

	slen = ft_strlen((char *)src);
	i = 0;
	if ((int)size > 0)
	{
		while ((src[i] != '\0') && (i < size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (slen);
	}
	return (slen);
}
/*
int	main(void)
{
	char	src[] = "daniel";
	char	dst[4];
	//int	size;
	int	a;
	
	a = ft_strlcpy(dst, src, sizeof(dst));
	printf("%d", a);
}
*/
