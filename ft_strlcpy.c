/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwuthric <dwuthric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 05:48:11 by dwuthric          #+#    #+#             */
/*   Updated: 2022/07/07 08:10:01 by dwuthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	str_len;

	str_len = ft_strlen((char *)src);
	if (size < 1)
		return (str_len);
	i = -1;
	while (++i < size - 1 && src[i])
		dest[i] = src[i];
	dest[i] = 0;
	return (str_len);
}
