/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:34:49 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/18 21:51:41 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	i;

	i = 0;
	ret = malloc((len + 1) * sizeof(char));
	if (!ret || !s)
		return (NULL);
	while (i < len)
		ret[i++] = s[start++];
	ret[i] = '\0';
	return (ret);
}
