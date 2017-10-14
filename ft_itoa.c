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

#include <limits.h>
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
	if (n == INT_MAX)
		return (ft_strdup("2147483647"));
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		j = -n;
	i++;
	str = malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (NULL);
	i--;
	str[i] = ((j % 10) + 48);
	i--;
	while (j /= 10)
	{
		str[i] = ((j % 10) + 48);
		i--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
