/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:49:52 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/18 12:57:32 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;

	ret = malloc(nmemb * size);
	if (!ret)
		return (NULL);
	ft_bzero(ret, nmemb);
	return (ret);
}
