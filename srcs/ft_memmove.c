/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:29:33 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/18 14:43:35 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, void *src, unsigned long n)
{
	unsigned long	i;

	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			*(char *)(dest + i - 1) = *(char *)(src + i - 1);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dest);
}
