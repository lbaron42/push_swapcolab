/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PS_LLutils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:48:26 by mrizakov          #+#    #+#             */
/*   Updated: 2023/04/08 18:48:28 by mrizakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstlast(t_stack *lst)
{
	int		i;
	t_stack	*temp;

	i = 0;
	temp = lst;
	if (lst == NULL)
		return (0);
	while (temp->next != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (temp);
}
//
//t_stack	*ft_lstmap(t_stack *lst, void *(*f)(void *), void (*del)(void *))
//{
//	t_stack	*new_list;
//	t_stack	*new_node;
//
//	new_list = NULL;
//	while (lst != NULL)
//	{
//		new_node = ft_lstnew((*f)(lst->content));
//		if (new_node == NULL)
//		{
//			ft_lstclear(&t_stack, del);
//			return (NULL);
//		}
//		ft_lstadd_back(&t_stack, new_node);
//		lst = lst->next;
//	}
//	return (new_list);
//}

t_stack	*ft_lstnew(int content)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(*new_node));
	if (!new_node) {
		free(new_node);
		return (NULL);
	}
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

int	ft_lstsize(t_stack *lst)
{
	int		i;
	t_stack	*temp;

	i = 0;
	temp = lst;
	if (lst == NULL)
		return (0);
	while (temp->next != NULL)
	{
		i++;
		temp = temp->next;
	}
	if (temp->next == NULL)
		i++;
	return (i);
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*temp;

	temp = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	if (new == NULL)
		return ;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
}

void free_list(t_stack *head)
{
	// printf("the correct answer is : \n");
	t_stack *tmp;

	while (head != NULL) {
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

void print_list(t_stack *head)
{
	while (head != NULL) {
		printf("%d ", head->content);
		head = head->next;
	}
}

int ft_check_ll_doubles(t_stack **lst, int new)
{
	t_stack	*temp;

	temp = *lst;
	if (*lst == NULL)
	{
	return (0);
	}
	while (temp->next != NULL)
	{
		if (temp->content == new)
		{
			ft_putstr_fd("Found a double! Try again", 1);
			return (1);
		}
		temp = temp->next;
	}
	return (0);
}


