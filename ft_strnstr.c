/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:20:29 by ialves-m          #+#    #+#             */
/*   Updated: 2022/11/22 09:37:10 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (len == 0 && !little)
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len)
	{
		while (little[i] == big[j] && j < len)
		{
			i++;
			j++;
			if (little[i] == '\0')
				return ((char *)big + j - i);
		}
		i = 0;
		if (little[i] != big[j] && j < len)
			j++;
		if (j == len)
			return (NULL);
	}
	return (0);
}
/*
int main(void)
{
	char big[] = "";
	char little[] = "Baz";
	char *ptr;
	ptr = ft_strnstr(big, little, 19);
	printf("%s", ptr);
}
*/
