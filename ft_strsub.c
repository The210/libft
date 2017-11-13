/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhorvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 21:09:18 by dhorvill          #+#    #+#             */
/*   Updated: 2017/11/11 14:00:58 by dhorvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*ss;
	size_t		i;

	i = 0;
	if ((ss = (char *)malloc(sizeof(char) * (len + 1))) == 0)
		return (NULL);
	while (i < len)
	{
		ss[i] = s[start];
		i++;
		start++;
	}
	ss[i] = '\0';
	return (ss);
}
