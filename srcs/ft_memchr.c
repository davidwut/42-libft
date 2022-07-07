/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwuthric <dwuthric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 23:00:39 by dwuthric          #+#    #+#             */
/*   Updated: 2022/07/05 23:08:43 by dwuthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		if (((unsigned char *)ptr)[i] == (unsigned char)c)
			return ((void *)(ptr + i));
	return (NULL);
}
