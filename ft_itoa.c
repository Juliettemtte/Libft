/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:14:55 by jmouette          #+#    #+#             */
/*   Updated: 2024/04/22 14:14:40 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_nb(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;

	result = (char *)malloc((ft_len_nb(n) + 1) * sizeof(char));
	if (!result)
		return (0);
	if (n < 0)
		n = -n;
	i = ft_len_nb(n) - 1;
	while (n != 0)
	{
		result[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	if (i < 0)
		result[0] = '-';
	result[ft_len_nb(n)] = '\0';
	return (result);
}
