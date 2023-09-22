/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:16:35 by ialves-m          #+#    #+#             */
/*   Updated: 2022/11/04 16:20:10 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int					i;
	unsigned char		*src;
	unsigned char		*dst;

	i = 0;
	src = (unsigned char *)s2;
	dst = (unsigned char *)s1;
	while ((src[i] != '\0' || dst[i] != '\0') && (i < (int)n))
	{
		if (src[i] > dst[i])
			return (dst[i] - src[i]);
		else if (src[i] < dst[i])
			return (dst[i] - src[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	
	char    stra[] = "ABC";
	char    strb[] = "AB";
	printf("%d\n", ft_strncmp(stra, strb, 3));
	//printf("%ld\n", sizeof("@"));
	//printf("%ld\n", ft_strlen("\100"));
}
*/
