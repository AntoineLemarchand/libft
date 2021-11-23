/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:34:49 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/23 09:49:15 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	i;

	i = 0;
	ret = malloc((len + 1) * sizeof(char));
	if (!ret || !s)
		return (NULL);
	else if (start > ft_strlen((char *)s))
		return ("");
	while (i < len && i < ft_strlen((char *)s))
		ret[i++] = s[start++];
	ret[i] = '\0';
	return (ret);
}
