/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 15:01:26 by kpatel            #+#    #+#             */
/*   Updated: 2017/10/10 16:27:30 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*n;
	int		i;
	size_t	l;

	i = 0;
	if (!s || !f)
		return (NULL);
	l = ft_strlen(s);
	n = ft_memalloc(l + 1);
	while (*s)
	{
		n[i] = f(i, *s);
		i++;
		s++;
	}
	return (n);
}
