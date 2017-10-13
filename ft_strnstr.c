/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 13:59:35 by kpatel            #+#    #+#             */
/*   Updated: 2017/10/12 19:34:50 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *d, size_t n)
{
	size_t	i;
	size_t	l;
	size_t	len;

	i = 0;
	if (d[i] == '\0')
		return ((char *)s);
	while (s[i] && i < n)
	{
		l = 0;
		len = i;
		while (s[i] == d[l] && i < n)
		{
			i++;
			l++;
			if (!d[l])
				return ((char *)s + len);
		}
		i = len;
		i++;
	}
	return (0);
}
