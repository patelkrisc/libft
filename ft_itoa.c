/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 16:55:46 by kpatel            #+#    #+#             */
/*   Updated: 2017/10/13 15:43:06 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_stlen(int n)
{
	size_t	i;

	i = 0;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char				*str;
	size_t				i;
	unsigned int		j;

	i = ft_stlen(n);
	j = n;
	if (n < 0)
		j = -n;
	i++;
	str = malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (NULL);
	i--;
	str[i] = ((j % 10) + '0');
	i--;
	while (j /= 10)
	{
		str[i] = ((j % 10) + '0');
		i--;
	}
	if (n < 0)
		str[i] = '-';
	return (str);
}
