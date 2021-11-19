/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:42:37 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/19 12:22:00 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*to_del;

	to_del = *lst;
	curr = to_del->next;
	while (curr->next)
	{
		ft_lstdelone(to_del, del);
		to_del = curr;
		curr = curr->next;
	}
}
