/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhorvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:42:44 by dhorvill          #+#    #+#             */
/*   Updated: 2017/11/09 16:56:48 by dhorvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	size_t	j;
	char	*ss1;

	j = 0;
	i = 0;
	ss1 = (char *)s;
	while (ss1[i] && i < n)
	{
		if (ss1[i] == c)
			return (&ss1[i]);
		i++;
	}
	if (!ss1[i] && c == '\0')
		return (&ss1[i]);
	return (NULL);
}
