/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:23:37 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/19 00:33:22 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/libft.h"

int	ft_count_word(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != '\0')
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	*ft_worddup(char const *s, char c)
{
	char	*dest;
	int		s_len;
	int		i;

	s_len = 0;
	while (s[s_len] != c && s[s_len])
		s_len++;
	i = 0;
	dest = malloc((s_len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (s[i] != c && s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		i;
	int		size;

	i = 0;
	size = ft_count_word(s, c);
	ret = malloc((size + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	while (i <= size)
	{
		while (*s == c)
			s++;
		ret[i] = ft_worddup(s, c);
		while (*s != c)
			s++;
	}
	ret[i][0] = 0;
	return (ret);
}
