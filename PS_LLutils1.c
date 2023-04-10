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


void	ft_sort_int_tab_og(int *tab, int size)
{
	int	counter;
	int	storage;
	int	step;

	counter = 0;
	step = 0;
	while (counter < size && step < size)
	{
		while (step <= size)
		{
			while (counter + 1 < size)
			{
				if (tab[counter + 1] < tab[counter])
				{
					storage = tab[counter];
					tab[counter] = tab[counter + 1];
					tab[counter + 1] = storage;
				}
				counter++;
			}
			counter = 0;
			step++;
		}
	}
}
//
//void	ft_sort_linked_list(t_stack **head, int size)
//{
//	int	counter;
//	int	storage;
//	int	step;
//
//	counter = 0;
//	step = 0;
//
//	if (*head == NULL || (*head)->next == NULL) {
//		return; // List is empty or has only one node, no sorting needed
//	}
//	while (counter < size && step < size)
//	{
//		while (step <= size)
//		{
//			while (counter + 1 < size)
//			{
//				if (tab[counter + 1] < tab[counter])
//				{
//					storage = tab[counter];
//					tab[counter] = tab[counter + 1];
//					tab[counter + 1] = storage;
//				}
//				counter++;
//			}
//			counter = 0;
//			step++;
//		}
//	}
//}

void swap_nodes(t_stack *node1, t_stack *node2) {
	int temp = node1->content;
	node1->content = node2->content;
	node2->content = temp;
}


void bubble_sort(t_stack **head) {
	if (*head == NULL || (*head)->next == NULL) {
		return; // List is empty or has only one node, no sorting needed
	}

	int swapped;
	t_stack *ptr1 = *head;
	t_stack *lptr = NULL;

	swapped = 1;
	t_stack *prev = NULL;

	while (swapped) {
		swapped = 0;
		t_stack *temp = *head;

		while (temp->next != prev) {
			if (temp->content > temp->next->content) {
				swap_nodes(temp, temp->next);
				swapped = 1;
			}
			temp = temp->next;
		}
		prev = temp;
	}
}

t_stack *swap_nodes_by_value(t_stack **head, int val1, int val2) {
	if (head == NULL || val1 == val2) {
		return *head;
	}

	t_stack *prev1 = NULL, *prev2 = NULL, *curr = *head;
	t_stack *node1 = NULL, *node2 = NULL, *tempNode = NULL;

	while (curr) {
		if (node1 && node2) {
			break;
		}
		if (curr->content == val1) {
			node1 = curr;
			prev1 = tempNode;
		}
		if (curr->content == val2) {
			node2 = curr;
			prev2 = tempNode;
		}
		tempNode = curr;
		curr = curr->next;
	}

	if (!node1 || !node2) {
		return *head;
	}

	if (prev1) {
		prev1->next = node2;
	} else {
		head = &node2;
	}

	if (prev2) {
		prev2->next = node1;
	} else {
		head = &node1;
	}

	tempNode = node1->next;
	node1->next = node2->next;
	node2->next = tempNode;

	return *head;
}

t_stack *swap_nodes_by_index(t_stack **head, int index1, int index2)
{
	if (head == NULL || index1 == index2) {
		return *head;
	}

	t_stack *prev1 = NULL, *prev2 = NULL, *curr = *head;
	t_stack *node1 = NULL, *node2 = NULL, *tempNode = NULL;
	int i = 0;

	// Traverse the list to find the nodes at index1 and index2
	while (curr) {
		if (i == index1) {
			node1 = curr;
			prev1 = tempNode;
		}
		if (i == index2) {
			node2 = curr;
			prev2 = tempNode;
		}
		tempNode = curr;
		curr = curr->next;
		i++;
	}

	// If either node1 or node2 is not found
	if (!node1 || !node2) {
		return *head;
	}

	// Update the links to swap the nodes
	if (prev1) {
		prev1->next = node2;
	} else {
		head = &node2;
	}

	if (prev2) {
		prev2->next = node1;
	} else {
		head = &node1;
	}

	tempNode = node1->next;
	node1->next = node2->next;
	node2->next = tempNode;

	return *head;
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
