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
# include <limits.h>

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

int         ft_isdigit(int c);
void        ft_putchar_fd(char c, int fd);
void        ft_putstr_fd(char *s, int fd);
void        ft_putstr_fd(char *s, int fd);
char        **ft_free(char **strs, int j);
int         ft_word_count(const char *str, char c);
int         ft_size_word(const char *s, char c, int i);
char        **ft_split(char const *s, char c);
char        **ft_free_split(char **strs);
void        clean_ptrs(char **double_ptr);
size_t      ft_strlen(const char *str);
char        *ft_substr(char const *s, unsigned int start, size_t len);
int         ft_isdigit2(const char *str);
long long   ft_atoi(const char *str);
void        ft_lstadd_back(t_stack **lst, t_stack *new);
void        ft_lstadd_front(t_stack **lst, t_stack *new);
void        ft_lstclear(t_stack **lst, void (*del)(void *));
void        ft_lstdelone(t_stack *lst, void (*del)(void *));
void        ft_lstiter(t_stack *lst, void (*f)(void *));
t_stack     *ft_lstlast(t_stack *lst);
t_stack     *ft_lstmap(t_stack *lst, void *(*f)(void *), void (*del)(void *));
t_stack     *ft_lstnew(int content);
int         ft_lstsize(t_stack *lst);
void        free_list(t_stack *head);
void        print_list(t_stack *head);
int         ft_lstsize(t_stack *lst);
void        ft_sort_int_tab(int *tab, int size);
t_stack     *swap_nodes_by_value(t_stack **head, int val1, int val2);
t_stack     *swap_nodes_by_index(t_stack **head, int index1, int index2);
void        bubble_sort(t_stack **head);
int         ft_check_ll_doubles(t_stack **lst, int new);
int         ft_error_handler_and_parser(t_stack **stk_a, int argc, char **argv);


#endif //PUSH_SWAP_H
