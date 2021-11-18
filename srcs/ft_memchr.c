/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:36:33 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/18 13:44:37 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(void *s, int c, unsigned long n)
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
