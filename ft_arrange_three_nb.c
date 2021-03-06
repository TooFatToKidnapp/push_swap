/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrange_three_nb.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:57:40 by aabdou            #+#    #+#             */
/*   Updated: 2022/02/16 15:49:47 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_arrange_three_numbers(t_array *stack_a)
{
	if (stack_a->array[0] > stack_a->array[1])
		ft_sa_or_sb(stack_a, ON, 'a');
	if (!(ft_check_sorted(stack_a)))
		ft_rra(stack_a, ON);
	if (stack_a->array[0] > stack_a->array[1])
		ft_sa_or_sb(stack_a, ON, 'a');
}
