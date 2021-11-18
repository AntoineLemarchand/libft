/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 00:18:10 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/18 14:15:47 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(void *s1, void *s2, unsigned long n)
{
	unsigned long	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1
		&& *(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i))
		i++;
	return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}
