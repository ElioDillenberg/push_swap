/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   less_than_four.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edillenb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 11:06:21 by edillenb          #+#    #+#             */
/*   Updated: 2019/07/08 13:27:00 by edillenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"


void	sort_three(int *a)
{
	if (check_arr(a, 3, 0) == 0)
		return ;
	else if (a[1] > a[0] && a[0] > a[2])
	{
		ft_putstr("ra\n");
		ft_putstr("sa\n");
		ft_putstr("ra\n");
	}
	else if (a[2] > a[0] && a[1] > a[0])
	{
		ft_putstr("ra\n");
		ft_putstr("sa\n");
	}
	else if (a[2] > a[0] && a[])
}

void	less_than_four(int *a, size_t *top)
{
	if (top[0] == 2)
		if (a[0] < a[1])
			ft_putstr("pa\n");
	else if (top[0] == 3)
		sort_three(a);
}
