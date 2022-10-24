/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwuthric <dwuthric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:49:19 by dwuthric          #+#    #+#             */
/*   Updated: 2022/07/11 21:58:55 by dwuthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new_node)
{
	if (!new_node)
		return ;
	if (!*list)
		*list = new_node;
	else
		ft_lstlast(*list)->next = new_node;
}
