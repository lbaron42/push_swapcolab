/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <lbaron@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 08/04/23 00:02:23 by lbaron              #+#    #+#             */
/*   Updated: 08/04/23 00:02:23 by lbaron             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H



# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack {
	int content;
	struct s_stack *next;
} t_stack;

//
//typedef struct s_stack
//{
//	int *stack;
//	struct s_stack *next;
//	int size;
//	int i;
//} t_stack;

/*
typedef struct s_stack
{
    int *stack;
    int size;
    int i;
}t_stack;*/

int     ft_isdigit(int c);
int     ft_isdigit2(const char *str);
int     ft_atoi(const char *str);
void    ft_lstadd_back(t_stack **lst, t_stack *new);
void    ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstclear(t_stack **lst, void (*del)(void *));
void	ft_lstdelone(t_stack *lst, void (*del)(void *));
void	ft_lstiter(t_stack *lst, void (*f)(void *));
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*ft_lstmap(t_stack *lst, void *(*f)(void *), void (*del)(void *));
t_stack	*ft_lstnew(int content);
int	    ft_lstsize(t_stack *lst);
void    free_list(t_stack *head);
void    print_list(t_stack *head);



#endif //PUSH_SWAP_H
