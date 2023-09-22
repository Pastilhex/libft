/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:29:30 by ialves-m          #+#    #+#             */
/*   Updated: 2022/11/22 11:29:04 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;
	unsigned int	j;

	if (!dst && size == 0)
		return (0);
	dlen = ft_strlen(dst);
	slen = ft_strlen((char *)src);
	i = 0;
	j = dlen;
	if (dlen >= size)
		return (size + slen);
	while (i < size - dlen - 1 && src[i] != '\0')
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (slen + dlen);
}
/*
int main(void)
{
    //char src[] = "lorem";
    char *dst = "rrrrrr\0\0\0\0\0\0\0\0\0";
	dst[11] = 'a';
    
    printf("%zu", ft_strlcat(dst, "lorem", 15));
}
*/
