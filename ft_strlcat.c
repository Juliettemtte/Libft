/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:50:18 by jmouette          #+#    #+#             */
/*   Updated: 2024/04/19 15:35:59 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while ((i + j + 1) < size)
	{
		while (src[j])
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		j = 0;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + j + ft_strlen(src));
}
