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
	int i;
	int len;
	t_stack *stk_a;

	i = 1;
	stk_a = NULL;

	while (i != argc)
	{
		ft_lstadd_back(&stk_a, ft_lstnew(atoi(argv[i])));
		i++;
	}
	printf("Original stack is : \n");
	print_list(stk_a);
	len = ft_lstsize(stk_a);

	printf("\nStack length is %i: \n", len);


	stk_a = swap_nodes_by_value(&stk_a, 0, 1);


	printf("Swaping elements with content 0 and 1 places gives the following stack: \n");
	print_list(stk_a);

	stk_a = swap_nodes_by_index(&stk_a, 1, 0);
	printf("\nSwaping elements at indexes 1 and 2 places gives the following stack: \n");
	print_list(stk_a);

	bubble_sort(&stk_a);
	printf("\nSorted stack is: \n");

	print_list(stk_a);






	free_list(stk_a);
	return (0);

//    t_stack		stk_a;
////	stk_a.size = argc - 1;
//
//	stk_a = NULL;
//
//    stk_a.stack = malloc(sizeof(int) * argc);
//    if(argc < 2) {
//        write(1,"you need more arguments", 23);
//        return (1);
//    }
//    stk_a.i = 0;
//    while(stk_a.i < stk_a.size)
//    if(ft_isdigit2(argv[stk_a.i + 1]) == -1) {
//        write(1, "Error", 5);
//        exit(1);
//    }
//    else
//    {
//		if (stk_a)
//		{
//			ft_lstnew(ft_atoi(argv[stk_a.i + 1]);
//		}
//		else
//		{
//		    ft_lstadd_back(*stk_a.stack, ft_atoi(argv[stk_a.i + 1]);
//		}
//        stk_a.i++;
//    }
//
//        for(int i = 0; i < stk_a.size;i++)
//            printf("%d\n", stk_a.stack[i]);
//    free(stk_a.stack);
//    return (0);
}
