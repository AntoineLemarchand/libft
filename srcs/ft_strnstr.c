/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 00:14:43 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/19 10:41:22 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(char *big, char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return (big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		if (big[i] == little[0])
		{
			while (little[j] == big[i + j] && little[j] != '\0')
				j++;
			if (little[j] == '\0' && (i + j) <= len)
				return (big + i);
		}
		i++;
	}
	return (0);
}
