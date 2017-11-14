/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhorvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 22:36:51 by dhorvill          #+#    #+#             */
/*   Updated: 2017/11/14 16:17:41 by dhorvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nb_words(char *s, char c)
{
	int i;
	int sym;
	int count;

	i = 0;
	sym = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] != c && s[i])
		{
			i++;
			sym = 1;
		}
		if (s[i] == c)
		{
			count += (sym == 1) ? 1 : 0;
			sym = 0;
			i++;
		}
	}
	return (count + 2);
}

static int		lnw(char *s, int i, char c)
{
	int count;

	count = 0;
	while (s[i] != c && s[i])
	{
		count++;
		i++;
	}
	return (count + 1);
}

char			**ft_strsplit(const char *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if ((res = malloc(sizeof(char*) * (ft_nb_words((char*)s, c)))) == NULL)
		return (NULL);
	if (s != NULL)
	{
		while (s[i])
		{
			while (s[i] == c && s[i])
				i++;
			if (s[i])
			{
				k = 0;
				if ((res[j] = malloc(sizeof(c) * lnw((char*)s, i, c))) == NULL)
					return (NULL);
				while (s[i] != c && s[i])
					res[j][k++] = s[i++];
				res[j++][k] = '\0';
			}
		}
		res[j] = NULL;
	}
	return (res);
}
