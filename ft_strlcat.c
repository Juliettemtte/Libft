/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:50:18 by jmouette          #+#    #+#             */
/*   Updated: 2024/04/18 10:44:06 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + j + strlen(src));
}

#include <stdio.h>
int	main()
{
	char	d[50]="bonjour";
	const char	s[]=" tout le monde";
	size_t	size = sizeof(d);
	ft_strlcat(d, s, size);
	printf("ft : %s \n", d);
	printf("ft : %zu \n", ft_strlcat(d, s, size)); 
	strlcat(d, s, size);
	printf("og : %s \n", d);
	printf("og : %zu \n", strlcat(d, s, size));
	return (0);
}
