/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 22:25:00 by kpatel            #+#    #+#             */
/*   Updated: 2017/10/11 13:42:00 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	j;
	unsigned char	*k;

	i = 0;
	j = (unsigned char)c;
	k = (unsigned char *)s;
	while (i < n)
	{
		if (k[i] == j)
			return (k + i);
		i++;
	}
	return (NULL);
}
