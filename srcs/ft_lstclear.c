/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwuthric <dwuthric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:59:49 by dwuthric          #+#    #+#             */
/*   Updated: 2022/07/08 17:17:43 by dwuthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **list, void (*del)(void *))
{
	t_list	*current;
	t_list	*temp;

	if (!list)
		return ;
	current = *list;
	while (current)
	{
		temp = current;
		current = current->next;
		del(temp->content);
		free(temp);
	}
	*list = NULL;
}
