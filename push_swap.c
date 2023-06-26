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

int ft_error_handler_and_parser(t_stack *stk_a, int argc, char **argv)
{
	int i;
	int len;
	//t_stack *stk_a;
	char **checked_values;
	int checked_values_i;
    //stk_a = NULL;


	i = 1;

	if (argc < 2)
		return (1);
	while (i+1 <= argc)
	{
		checked_values = ft_split(argv[i], ' ');
		checked_values_i = 0;
		while (checked_values[checked_values_i] != NULL)
		{
			printf("Checked_values_i is %d \n", checked_values_i);
			printf("Checked_values is %s\n", checked_values[checked_values_i]);
			//checked_value = ft_atoi(checked_values[checked_values_i]);
			printf("Checked_value is %d\n", (int)ft_atoi(checked_values[checked_values_i]));
			ft_lstadd_back(&stk_a, ft_lstnew(ft_atoi(checked_values[checked_values_i])));
			ft_check_ll_doubles(&stk_a, ft_atoi(checked_values[checked_values_i]));
			printf("List contains\n");
			print_list(stk_a);
			checked_values_i++;
		}
		clean_ptrs(checked_values);
		i++;
	}
	return (0);
}


int		main(int argc, char **argv)
{
	//int i;
	int len;
	t_stack *stk_a;
	stk_a = (t_stack *)malloc(sizeof(stk_a));
//stk_a = NULL;


//	t_stack	*new_node;
//
//	new_node = (t_stack *)malloc(sizeof(*new_node));
//	ft_lstadd_back(&stk_a, new_node);

//	char **checked_values;
//	int checked_values_i;
	//stk_a = NULL;


	//i = 1;
	/*
	// test block in order not to use argv and argc(for gdb use)
	int test_argc = 2;
	char *test_argv1 = (char *)malloc(sizeof(char)*4);

	test_argv1[0] = '1';
	test_argv1[1] = ' ';
	test_argv1[2] = '2';
	test_argv1[3] = '\0';

	printf("Test_argv1 is %s\n", test_argv1);
	checked_values_i = 0;
	checked_values = ft_split(test_argv1, ' ');
//	while (checked_values[checked_values_i] != NULL)
//	{
//		printf("Checked values after split are %s\n", checked_values[checked_values_i]);
//		checked_values_i++;
//	}
	free(test_argv1);
	//clean_ptrs(checked_values);
	stk_a = NULL;
*/

//	if (argc < 2)
//		return (1);

//
//	while (i+1 <= argc)
//	{
//		checked_values = ft_split(argv[i], ' ');
//		checked_values_i = 0;
//		while (checked_values[checked_values_i] != NULL)
//		{
//			printf("Checked_values_i is %d \n", checked_values_i);
//			printf("Checked_values is %s\n", checked_values[checked_values_i]);
//			//checked_value = ft_atoi(checked_values[checked_values_i]);
//			printf("Checked_value is %d\n", (int)ft_atoi(checked_values[checked_values_i]));
//			ft_lstadd_back(&stk_a, ft_lstnew(ft_atoi(checked_values[checked_values_i])));
//			ft_check_ll_doubles(&stk_a, ft_atoi(checked_values[checked_values_i]));
//			print_list(stk_a);
//			checked_values_i++;
//		}
//		clean_ptrs(checked_values);
//		i++;
//	}

	if (ft_error_handler_and_parser(stk_a, argc, argv) == 1)
	{
		printf("yeahhh! error handling is working");
		return (1);
	}

//
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
}
