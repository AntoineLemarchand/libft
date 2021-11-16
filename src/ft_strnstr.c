/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 00:14:43 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/17 00:17:50 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(char *big, char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (little[0] == '\0')
		return (big);
	while (big[i] != '\0' && len <= n)
	{
		j = 0;
		if (big[i] == little[0])
		{
			while (little[j] == big[i + j] && little[j] != '\0')
				j++;
			if (little[j] == '\0')
				return (big + i);
		}
		i++;
	}
	return (0);
}
