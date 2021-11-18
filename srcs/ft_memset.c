/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:09:08 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/18 11:17:39 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned long n)
{
	unsigned long	i;

	i = 0;
	while (i < n)
		*(unsigned char *)(s + i++) = c;
	return (s);
}
