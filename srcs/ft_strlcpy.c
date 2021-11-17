/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:00:44 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/17 14:11:39 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t			src_len;
	unsigned int	i;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';

	}
	return (src_len);
}
