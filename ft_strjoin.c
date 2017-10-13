/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 16:12:48 by kpatel            #+#    #+#             */
/*   Updated: 2017/10/10 17:11:24 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*n;
	int		i;
	int		j;
	int		k;

	if (!s1 || !s2)
		return (NULL);
	k = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	j = 0;
	n = (char *)malloc(sizeof(*n) * k + 1);
	if (n == NULL)
		return (NULL);
	while (s1[i])
	{
		n[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		n[i + j] = s2[j];
		j++;
	}
	n[i + j] = '\0';
	return (n);
}
