/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwuthric <dwuthric@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:16:56 by dwuthric          #+#    #+#             */
/*   Updated: 2022/10/24 16:57:45 by dwuthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	s_len;

	res = malloc(len + 1);
	if (!res || !s)
		return (NULL);
	i = -1;
	s_len = ft_strlen(s);
	while (++i < len && (start + i) < s_len)
		res[i] = s[start + i];
	res[i] = 0;
	return (res);
}
