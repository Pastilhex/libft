/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:56:30 by ialves-m          #+#    #+#             */
/*   Updated: 2022/11/22 09:49:24 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*aux;

	if (!lst || !del)
		return ;
	tmp = *lst;
	aux = *lst;
	while (tmp)
	{
		aux = tmp->next;
		ft_lstdelone(tmp, del);
		tmp = aux;
	}
	*lst = NULL;
}
