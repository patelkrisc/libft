/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 12:25:18 by kpatel            #+#    #+#             */
/*   Updated: 2017/10/10 13:40:07 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*t;

	if (!alst || !del)
		return ;
	while (*alst)
	{
		t = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = t;
	}
	*alst = NULL;
	return ;
}
