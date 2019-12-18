/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basylbek <basylbek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 15:02:10 by vsanta            #+#    #+#             */
/*   Updated: 2019/12/17 17:34:59 by basylbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void			stack_push_back(t_stack **stack, t_stack *new)
{
	t_stack *last;

	if (*stack == NULL)
	{
		*stack = new;
		return ;
	}
	last = last_node(*stack);
	last->next = new;
}

void			stack_push_front(t_stack **stack, t_stack *new)
{
	if (*stack == NULL)
		*stack = new;
	else
	{
		new->next = *stack;
		*stack = new;
	}
}

t_stack			*stack_push_back_int(t_stack **stack, int val)
{
	t_stack *new;

	if ((new = create_node(val)) == NULL)
		return (NULL);
	stack_push_back(stack, new);
	return (*stack);
}
