/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:41:22 by ialves-m          #+#    #+#             */
/*   Updated: 2022/11/21 14:56:19 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*a;

	a = malloc(nmemb * size);
	if (!a)
		return (NULL);
	ft_bzero(a, (nmemb * size));
	return ((int *)a);
}
/*int main(void)
{
	printf("%p", ft_calloc(3, 2));
}*/
