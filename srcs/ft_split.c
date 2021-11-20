/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:23:37 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/19 17:42:04 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s[i] != c)
	{
		count++;
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

static int	ft_word_len(char const *s, char c)
{
	int	size;

	size = 0;
	while (s[size] != c)
		size++;
	return (size);
}

static char	*ft_worddup(char const *s, char c)
{
	char	*ret;
	int		i;

	i = 0;
	ret = malloc(ft_word_len(s, c));
	if (!ret)
		return (NULL);
	while (s[i] != '\0' && i < ft_word_len(s, c))
	{
		ret[i] = s[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		size;
	int		i;

	i = 0;
	size = ft_count_words(s, c);
	ret = malloc((size + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	while (*s != '\0')
	{
		if ((*s == c) || i == 0)
		{
			while (*s == c)
				s++;
			if (*s != '\0' && i < size)
				ret[i++] = ft_worddup(s, c);
		}
		s++;
	}
	ret[i] = NULL;
	return (ret);
}
