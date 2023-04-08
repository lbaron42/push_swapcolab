/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <mrizakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:56:29 by mrizakov          #+#    #+#             */
/*   Updated: 2022/12/06 19:27:58 by mrizakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
/* 
typedef struct  s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;
 */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!del)
		return ;
	while (lst && *lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

/* 
int	main(void)
{
	void *c = "hello";
	char *result;
	t_list *new_node = ft_listnew(c);
	result = new_node->content;

	printf("content is : %s", result);
	free(new_node);

	return (0);
}
 */