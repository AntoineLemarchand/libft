/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 00:35:47 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/19 00:40:06 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned long	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, (s + i));
		i++;
	}
}
