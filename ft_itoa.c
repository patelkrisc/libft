/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 16:55:46 by kpatel            #+#    #+#             */
/*   Updated: 2017/10/13 14:30:15 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char				*str;
	size_t				i;
	unsigned int		j;

	i = 4;
	j = n;
	if (n < 0)
		j = -n;
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
