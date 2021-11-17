/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:27:53 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/17 14:22:44 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *s)
{
	char	*dest;
	int		s_len;
	int		i;

	s_len = 0;
	while (s[s_len] != '\0')
		s_len++;
	i = 0;
	if (!(dest = malloc((s_len + 1) * sizeof(char))))
		return (NULL);
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
