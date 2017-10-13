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
	size_t	k;

	i = 0;
	k = ft_strlen(src);
	while (dst[i] && i < size)
		i++;
	j = i;
	while (src[i - j] && i < size - 1)
	{
		dst[i] = src[i - j];
		i++;
	}
	if (j < size)
		dst[i] = '\0';
	return (j + k);
}
