/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:12:43 by ialves-m          #+#    #+#             */
/*   Updated: 2022/11/22 09:09:33 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	else
	{
		while (i <= (int)ft_strlen(s))
		{
			ptr[i] = s[i];
			i++;
		}
		return (ptr);
	}
}
/*
int main(void)
{
	char *str;
	str = "ivo";
	printf("%s, ", ft_strdup(str)[>, ft_strlen((char*)str)+1<]);
}
*/
