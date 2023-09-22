/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:28:34 by ialves-m          #+#    #+#             */
/*   Updated: 2022/11/07 13:11:00 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < (int)n)
	{
		if (((char *)str)[i] == c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
