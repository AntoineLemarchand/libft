/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:29:33 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/18 12:32:41 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, void *src, unsigned long n)
{
	unsigned long	i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)dest;
	while (i < n)
	{
		*(tmp + i) = *(unsigned char *)(src + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(tmp + i);
		i++;
	}
	return (dest);
}
