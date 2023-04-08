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

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp;

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
