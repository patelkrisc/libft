/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 15:12:54 by kpatel            #+#    #+#             */
/*   Updated: 2017/10/12 19:05:34 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*s;

	s = (t_list *)malloc(sizeof(t_list));
	if (!s)
		return (NULL);
	if (!content)
	{
		s->content = NULL;
		s->content_size = 0;
	}
	else
	{
		s->content = (void *)malloc(content_size);
		if (!s->content)
			return (NULL);
		ft_memcpy(s->content, content, content_size);
		s->content_size = content_size;
	}
	s->next = NULL;
	return (s);
}
