/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swaputils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaron <lbaron@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 08/04/23 12:37:10 by lbaron              #+#    #+#             */
/*   Updated: 08/04/23 12:37:10 by lbaron             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
    return (c < 58 && c > 47);
}

int ft_isdigit2(const char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(!ft_isdigit(str[i]))
            return (-1);
        i++;
    }
    return(0);
}

int	ft_atoi(const char *str)
{
    int	i;
    int	sig;
    int	ret;

    i = 0;
    sig = 1;
    ret = 0;
    while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' \
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sig *= -1;
        i++;
    }
    while (ft_isdigit(str[i]))
    {
        ret = ret * 10 + (str[i] - '0');
        i++;
    }
    return (ret * sig);
}