/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:34:31 by jmouette          #+#    #+#             */
/*   Updated: 2024/04/19 15:14:45 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.c"

static void	ft_free(char *s)
{
	while (s)
		free(s);
	free(s);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	w;
	int	t;

	i = 0;
	w = 0;
	t = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && t == 0)
		{
			w++;
			t = 1;
		}
		else if (s[i] == c)
			t = 0;
		i++;
	}
	return (w);
}

/*
char	**ft_split(char const *s, char c)
{
*/
