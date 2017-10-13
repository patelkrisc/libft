/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 15:18:17 by kpatel            #+#    #+#             */
/*   Updated: 2017/10/12 20:13:00 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*n;

	if (!s)
		return (0);
	if (s == NULL)
		return (NULL);
	n = ft_memalloc(len + 1);
	n = ft_strncpy(n, (s + start), len);
	return (n);
}
