/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:20:46 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/17 14:47:27 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	i = 0;
	if (size > dest_len)
	{
		while (src[i] && i < (size - 1 - dest_len))
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = 0;
		return (dest_len + src_len);
	}
	else
		return (size + src_len);
}
