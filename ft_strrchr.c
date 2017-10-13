/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 14:03:57 by kpatel            #+#    #+#             */
/*   Updated: 2017/10/10 13:49:47 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s2;

	s2 = (char *)s + ft_strlen(s);
	while (*s2 != c)
	{
		if (s2 == s)
			return (NULL);
		s2--;
	}
	return (s2);
}
