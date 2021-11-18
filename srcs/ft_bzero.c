/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:18:13 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/18 11:28:29 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned long n)
{
	unsigned long	i;

	i = 0;
	if (!s)
		return ;
	while (i < n)
		*(unsigned char *)(s + i++) = 0;
}