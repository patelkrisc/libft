/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 18:03:26 by kpatel            #+#    #+#             */
/*   Updated: 2017/10/10 17:12:11 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	b;
	size_t	c;

	b = 0;
	while (s1[b] != '\0')
		b++;
	c = 0;
	while (s2[c] != '\0' && (c < n))
	{
		s1[b + c] = s2[c];
		c++;
	}
	s1[b + c] = '\0';
	return (s1);
}
