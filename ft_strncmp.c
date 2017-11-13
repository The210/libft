/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhorvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:45:24 by dhorvill          #+#    #+#             */
/*   Updated: 2017/11/08 21:04:20 by dhorvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t o;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
		i++;
	if (s1[i] == '\200' && s2[i] == '\0')
		return (1);
	else if (s1[i] == '\0' && s2[i] == '\200')
		return (-1);
	if (i == n)
		o = s1[i - 1] - s2[i - 1];
	else
		o = s1[i] - s2[i];
	return (o);
}
