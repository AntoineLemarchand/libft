/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 12:10:57 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/19 13:20:51 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

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
		ret = ret->next;
		lst = lst->next;
	}
	ft_lstclear(&begin_lst, del);
	return (begin_ret);
}
