/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 12:10:57 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/23 12:18:27 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	int		i;

	i = 0;
	if (!lst || !f || !del)
		return (NULL);
	ret = ft_lstnew(f(lst->content));
	lst = lst->next;
	i++;
	if (!ret)
	{
		free(ret);
		return (NULL);
	}
	lst = lst->next;
	while (lst)
	{
		ft_lstadd_back(&ret, ft_lstnew(f(lst->content)));
		if (ft_lstsize(ret) != i++)
			ft_lstclear(&ret, del);
		lst = lst->next;
	}
	return (ret);
}
