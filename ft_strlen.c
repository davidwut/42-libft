/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwuthric <dwuthric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:51:30 by dwuthric          #+#    #+#             */
/*   Updated: 2022/07/07 15:30:03 by dwuthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Returns length of a null-terminated string
*/

size_t	ft_strlen(const char *str)
{
	int	count;

	count = -1;
	while (str[++count])
		;
	return (count);
}
