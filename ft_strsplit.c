/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 16:49:15 by kpatel            #+#    #+#             */
/*   Updated: 2017/10/10 17:55:46 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cwords(const char *str, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			j++;
		i++;
	}
	if (str[0] != '\0')
		j++;
	return (j);
}

static char	*ft_slen(const char *s, char c, int *i)
{
	char	*k;
	int		l;

	if (!(k = (char *)malloc(sizeof(k) * ft_strlen(s))))
		return (NULL);
	l = 0;
	while (s[*i] != c && s[*i])
	{
		k[l] = s[*i];
		l++;
		*i += 1;
	}
	k[l] = '\0';
	while (s[*i] == c && s[*i])
		*i += 1;
	return (k);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**str;

	i = 0;
	j = 0;
	k = ft_cwords(s, c);
	if (!s)
		return (NULL);
	if (!(str = (char **)malloc(sizeof(str) * (k + 2))))
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (j < k && s[i])
	{
		str[j] = ft_slen(s, c, &i);
		j++;
	}
	str[j] = NULL;
	return (str);
}
