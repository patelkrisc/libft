/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 14:26:54 by kpatel            #+#    #+#             */
/*   Updated: 2017/10/12 19:29:14 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	else
	{
		while (*s1 == *s2 && *s1 != '\0' && i < n)
		{
			s1++;
			s2++;
			i++;
		}
	}
	if (i == n)
		return (0);
	else
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
