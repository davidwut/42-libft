/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwuthric <dwuthric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:05:24 by dwuthric          #+#    #+#             */
/*   Updated: 2022/07/07 15:13:25 by dwuthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*res;

	len = ft_strlen((char *)s);
	res = malloc(len + 1);
	if (res == 0)
		return (NULL);
	i = -1;
	while (++i < len)
		res[i] = s[i];
	res[i] = 0;
	return (res);
}
