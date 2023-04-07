/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <lbaron@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 07/04/23 23:58:22 by lbaron              #+#    #+#             */
/*   Updated: 07/04/23 23:58:22 by lbaron             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
    t_stack		stk_a;
    stk_a.size = argc - 1;

    stk_a.stack = malloc(sizeof(int) * argc);
    if(argc < 2) {
        write(1,"you need more arguments", 23);
        return (1);
    }
    stk_a.i = 0;
    while(stk_a.i < stk_a.size)
    if(ft_isdigit2(argv[stk_a.i + 1]) == -1) {
        write(1, "Error", 5);
        exit(1);
    }
    else
    {
        stk_a.stack[stk_a.i] = ft_atoi(argv[stk_a.i + 1]);
        stk_a.i++;
    }

        for(int i = 0; i < stk_a.size;i++)
            printf("%d\n", stk_a.stack[i]);
    free(stk_a.stack);
    return (0);
}
