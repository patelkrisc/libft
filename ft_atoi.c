/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 19:34:08 by kpatel            #+#    #+#             */
/*   Updated: 2017/10/13 17:27:31 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	i;
	int res;
	int n;

	i = 0;
	res = 0;
	n = 1;
	while (str[i] == ' ' || str[i] == '\n'
			|| str[i] == '\t' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		n = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\0' && (str[i] <= '9' && str[i] >= '0'))
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (n * res);
}
