/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 14:26:02 by kpatel            #+#    #+#             */
/*   Updated: 2017/10/12 18:26:54 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d;
	size_t	s;

	i = 0;
	j = ft_strlen(dst);
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (size < d + 1)
		return (s + size);
	if (size > d + 1)
	{
		while (j < size - 1)
			*(dst + j++) = *(src + i++);
		*(dst + j++) = '\0';
	}
	return (d + s);
}
