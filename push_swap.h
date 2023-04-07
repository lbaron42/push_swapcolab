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
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_stack
{
    int *stack;
    int size;
    int i;
}t_stack;

int	ft_isdigit(int c);
int ft_isdigit2(const char *str);
int	ft_atoi(const char *str);

#endif //PUSH_SWAP_H
