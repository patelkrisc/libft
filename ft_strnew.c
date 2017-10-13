/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 14:38:10 by kpatel            #+#    #+#             */
/*   Updated: 2017/10/10 13:49:04 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;
	size_t	i;

	i = 0;
	size++;
	s = (char*)malloc(sizeof(*s) * size);
	if (!s)
		return (NULL);
	while (i < size)
	{
		s[i] = '\0';
		i++;
	}
	return (s);
}
