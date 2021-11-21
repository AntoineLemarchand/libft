/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:27:53 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/20 16:09:13 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/libft.h"

char	*ft_strdup(char *s)
{
	char	*dest;
	int		s_len;
	int		i;

	s_len = 0;
	if (!s)
		return (NULL);
	while (s[s_len] != '\0')
		s_len++;
	i = 0;
	dest = malloc((s_len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
