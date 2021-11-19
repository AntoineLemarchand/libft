/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:36:33 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/19 10:37:01 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	unsigned long	i;

	i = 0;
	while (i < n)
	{
		if (*(char *)(s + i) == c)
			return (s + i);
		i++;
	}
	return (0);
}
