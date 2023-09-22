/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:12:53 by ialves-m          #+#    #+#             */
/*   Updated: 2022/11/21 13:12:49 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_start(char *s1, char *set)
{
	size_t	i;

	i = 0;
	while (ft_strchr(set, s1[i]) != NULL)
		i++;
	return (i);
}

int	ft_end(char *s1, char *set, int start)
{
	int	j;

	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[j]) != NULL && j > start)
		j--;
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		start;
	int		end;

	if (!set || !s1)
		return (0);
	start = ft_start((char *)s1, (char *)set);
	end = ft_end((char *)s1, (char *)set, start);
	if ((size_t)start >= ft_strlen(s1))
	{
		trim = malloc(1 * sizeof(char *));
		trim[0] = '\0';
		return (trim);
	}
	trim = ft_substr(s1, start, (end - start) + 1);
	return (trim);
}
/*
int main(void)
{
	char a[] = "aaaaa";
	char b[] = " a\t\n";

	printf("%s", ft_strtrim(a, b));
}
*/
