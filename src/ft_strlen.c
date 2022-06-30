/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwuthric <dwuthric@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:51:30 by dwuthric          #+#    #+#             */
/*   Updated: 2022/06/30 15:39:38 by dwuthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Returns length of a null-terminated string
*/

int	ft_strlen(char *str)
{
	int	count;

	count = -1;
	while (str[++count])
		;
	return (count);
}
