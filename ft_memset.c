/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:44:10 by ialves-m          #+#    #+#             */
/*   Updated: 2022/11/07 15:06:58 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < (int)n)
	{
		((char *)s)[i] = c;
		i++;
	}
	return (s);
}
/*
int main(void)
{
	char str[] = "ivo daniel alves marques";
	printf("%s\n", str);
	memset(str, 'a', 7);
	printf("%s\n", str);
	return (0);
}
*/
