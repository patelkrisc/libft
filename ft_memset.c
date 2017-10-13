/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 16:15:45 by kpatel            #+#    #+#             */
/*   Updated: 2017/10/10 16:51:26 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*d;
	unsigned char	e;

	d = (unsigned char *)b;
	e = (unsigned char)c;
	while (len-- > 0)
	{
		*d = c;
		d++;
	}
	return (b);
}
