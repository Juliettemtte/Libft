/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:34:38 by jmouette          #+#    #+#             */
/*   Updated: 2024/04/18 12:32:47 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	const char	*s;
	size_t	i;

	d = (char *)dst;
	s = (const char *)src;
	i = 0;
	if (s < d && s < (d + len))
	{
		i = len;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
#include<string.h>
#include<stdio.h>
int	main()
{
	char src[] = "Bonjour tout le m0nde!";
	char dest[20] = "Bonjour k";
	size_t len = strlen(src) + 1;

	ft_memmove(dest, src, len);
	printf("ft : %s \n", dest);
	memmove(dest, src, len);
	printf("og : %s \n", dest);
	return (0);
}
	
