/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemarch <alemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 12:10:57 by alemarch          #+#    #+#             */
/*   Updated: 2021/11/22 14:11:45 by alemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static void	ft_free_lstmap(t_list *lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*next;

	curr = lst;
	next = curr->next;
	while (curr->next)
	{
		del(curr->content);
		free(curr);
		curr = next;
		next = curr->next;
	}
	free(lst);
}

void	ft_lcpy(t_list *s1, t_list *s2, void *(*f)(void *), void (*del)(void *))
{
	while (s2->next)
	{
		s1->content = f(s2->content);
		ft_lstadd_back(&s1, malloc(sizeof(t_list)));
		if (s1->next == NULL)
		{
			ft_free_lstmap(s1, del);
		}
		s1 = s1->next;
		s2 = s2->next;
	}
	ft_lstadd_back(&s1, malloc(sizeof(t_list)));
	s1->content = f(s2->content);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*begin_ret;

	ret = malloc(sizeof(t_list));
	if (!ret || !lst || !f || !del)
		return (NULL);
	begin_ret = ret;
	f(lst->content);
	ret->content = lst->content;
	ft_lstadd_back(&ret, malloc(sizeof(t_list)));
	ft_lcpy(ret, lst, f, del);
	return (begin_ret);
}
