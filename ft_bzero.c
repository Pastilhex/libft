/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:34:33 by ialves-m          #+#    #+#             */
/*   Updated: 2022/11/21 14:54:03 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	int		index;

	ptr = s;
	index = 0;
	while (index < ((int)n))
	{
		ptr[index] = '\0';
		index++;
	}
}
/*
int main() {
  char str[] = "ivo";
  printf("%s\n", str);
  ft_bzero(str, 1);
  printf("%s\n", str);
  return 0;
}
*/
