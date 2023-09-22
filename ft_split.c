/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:58:20 by ialves-m          #+#    #+#             */
/*   Updated: 2022/11/21 13:33:46 by ledos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(char const *s, char c)
{
	int	i;
	int	found;

	i = 0;
	found = 0;
	if (s[i] == '\0')
		return (0);
	while (i < (int)ft_strlen(s))
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != '\0')
			found++;
		while (s[i] != c && s[i])
			i++;
	}
	return (found);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	int		found;
	char	**str;

	if (s == NULL)
		return (NULL);
	found = count(s, c);
	str = (char **)malloc((found + 1) * (sizeof(char *)));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	str[found] = 0;
	while (j < found)
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		str[j++] = ft_substr(s, start, i - start);
	}
	return (str);
}
/*int	main()
{
	char str[] =  "lorem ipsum ";
	char c = ' ';
	char** array;
	int i = 0;

	array = ft_split(str, c);
	while(array[i] != 0)
	{	printf("%s\n", array[i]);
		i++;}
}
*/
