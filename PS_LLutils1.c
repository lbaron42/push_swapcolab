/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PS_LLutils1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:48:14 by mrizakov          #+#    #+#             */
/*   Updated: 2023/04/08 18:48:20 by mrizakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//
//void	ft_lstiter(t_stack *lst, void (*f)(void *))
//{
//	t_stack *temp;
//
//	temp = *lst;
//	if (*lst == NULL)
//	{
//		*lst = new;
//		return ;
//	}
//	if (new == NULL)
//		return ;
//	while (temp->next != NULL)
//		temp = temp->next;
//	temp->next = new;
//}

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
//
//void	ft_lstclear(t_stack **lst, void (*del)(void *))
//{
//	t_stack	*temp;
//
//	if (!del)
//		return ;
//	while (lst && *lst)
//	{
//		temp = (*lst)->next;
//		ft_lstdelone(*lst, del);
//		*lst = temp;
//	}
//}
//
//void	ft_lstdelone(t_stack *lst, void (*del)(void *))
//{
//	if (!del)
//		return ;
//	del(lst->content);
//	free(lst);
//}
//
//void	ft_lstiter(t_stack *lst, void (*f)(void *))
//{
//	if (!lst)
//		return ;
//	while (lst->next != NULL)
//	{
//		f(lst->content);
//		lst = lst->next;
//	}
//	f(lst->content);
//}
