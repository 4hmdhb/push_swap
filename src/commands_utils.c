/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basylbek <basylbek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 19:32:50 by vsanta            #+#    #+#             */
/*   Updated: 2019/12/17 17:15:02 by basylbek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	apply_s(t_stack **stack)
{
	int	tmp;

	if (*stack && (*stack)->next)
	{
		tmp = (*stack)->val;
		(*stack)->val = (*stack)->next->val;
		(*stack)->next->val = tmp;
		return (1);
	}
	return (-1);
}

int	apply_r(t_stack **stack)
{
	if (*stack && (*stack)->next)
	{
		stack_push_back(stack, stack_pop_front(stack));
		return (1);
	}
	return (-1);
}

int	apply_rr(t_stack **stack)
{
	if (*stack && (*stack)->next)
	{
		stack_push_front(stack, stack_pop_back(stack));
		return (1);
	}
	return (-1);
}

int	apply_p(t_stack **from, t_stack **to)
{
	if (*from)
	{
		stack_push_front(to, stack_pop_front(from));
		return (1);
	}
	return (-1);
}
