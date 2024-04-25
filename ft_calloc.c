/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:21:43 by jmouette          #+#    #+#             */
/*   Updated: 2024/04/19 15:28:36 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*s;
	size_t			i;
	size_t			total;

	total = count * size;
	if (count > 0 && total > 0 && (total / count != size))
		return (NULL);
	s = malloc(total);
	i = 0;
	if (s == NULL)
		return (0);
	while (i < total)
		s[i++] = 0;
	return (s);
}
