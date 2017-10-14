/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 16:55:46 by kpatel            #+#    #+#             */
/*   Updated: 2017/10/13 23:55:53 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char				*str;
	size_t				i;
	int					j;
	char				s;

	s = (n < 0) ? -1 : 1;
	i = 2 + (n < 0);
	j = n;
	while (n /= 10)
		i++;
	n = j;
	if ((str = (char *)malloc(sizeof(char) * i--)) == NULL)
		return (NULL);
	str[i--] = '\0';
	str[i--] = s * (n % 10) + 48;
	while (n /= 10)
		str[i--] = s * (n % 10) + 48;
	if (s < 0)
		str[i] = '-';
	return (str);
}
