/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:20:46 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/18 21:52:44 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlcat(char *dest, char *src, unsigned long size)
{
	unsigned long	i;
	unsigned long	dest_len;
	unsigned long	src_len;

	i = 0;
	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size > dest_len)
	{
		while (src[i] && i < (size - 1) - dest_len)
		{
			dest[dest_len + i] = *(char *)(src + i);
			i++;
		}
		dest[dest_len + i] = '\0';
		return (dest_len + src_len);
	}
	else
		return (size + src_len);
}
