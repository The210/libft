/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhorvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 12:03:22 by dhorvill          #+#    #+#             */
/*   Updated: 2017/11/11 12:04:28 by dhorvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrimc(char const *s, char c)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	str = "";
	if ((str = ft_strnew(ft_strlen(s))) == NULL)
		return (NULL);
	i = 0;
	while (s[i] == c)
		i++;
	j = i - 1;
	i = ft_strlen(s) - 1;
	while (s[i] == c)
		i--;
	k = i;
	i = 0;
	while (++j <= k)
	{
		str[i] = s[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
