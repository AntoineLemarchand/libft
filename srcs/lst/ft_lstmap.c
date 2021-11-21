/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 12:10:57 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/21 20:12:42 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static void	ft_free_lstmap(t_list *lst)
{
	t_list *curr;
	t_list *next;

	curr = lst;
	next = curr->next;
	while (curr->next)
	{
		free(curr->content);
		free(curr);
		curr = next;
		next = curr->next;
	}
	free(lst);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*begin_lst;
	t_list	*begin_ret;

	ret = malloc(sizeof(t_list));
	begin_ret = ret;
	begin_lst = lst;
	f(lst->content);
	ret->content = lst->content;
	ft_lstadd_back(&ret, malloc(sizeof(t_list)));
	while (ret->next)
	{
		f(lst->content);
		ret->content = lst->content;
		ft_lstadd_back(&ret, malloc(sizeof(t_list)));
		if (ret->next == NULL)
		{
			ft_free_lstmap(ret);
		}
		ret = ret->next;
		lst = lst->next;
	}
	ft_lstclear(&begin_lst, del);
	return (begin_ret);
}
