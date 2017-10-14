/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 23:45:18 by kpatel            #+#    #+#             */
/*   Updated: 2017/10/13 23:47:01 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		l;
	char	t;

	l = 0;
	while (str[l] != '\0')
		l++;
	i = -1;
	while (++i < --l)
	{
		t = str[i];
		str[i] = str[l];
		str[l] = t;
	}
	return (str);
}
