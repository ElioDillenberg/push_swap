/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edillenb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 13:54:51 by edillenb          #+#    #+#             */
/*   Updated: 2019/07/08 11:44:20 by edillenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

static void	swapy(size_t i_p, size_t j, size_t top_a, size_t top_b)
{
	size_t	i_p_counter;
	size_t	j_counter;
	size_t	x;

	i_p_counter = 0;
	j_counter = 0;
	x = 0;
	while (top_a > i_p)
	{
		if (top_a > j)
			j_counter++;
		i_p_counter++;
		ft_putstr("pb\n");
		top_a--;
		top_b++;
	}
	while (x < i_p_counter - j_counter)
	{
		ft_putstr("rb\n");
		x++;
	}
	ft_putstr("pa\n");
	top_a++;
	top_b--;
	x = 0;
	while (x < j_counter)
	{
		ft_putstr("rb\n");
		x++;
	}
	x = 0;
	while (x < i_p_counter  - j_counter - 1)
	{
		ft_putstr("pa\n");
		top_a++;
		top_b--;
		x++;
	}
	ft_putstr("rrb\n");
	while (top_b > 0)
	{
		ft_putstr("pa\n");
		top_a++;
		top_b--;
	}
}

size_t	quick_sort(int *a, size_t p, size_t j, size_t *top)
{
	size_t	i;
	size_t	x;

	if (!(p < j))
		return (1);
	i = j;
	x = j;
	while (i > p)
	{
		if (a[i] < a[p])
		{
			if (i != j)
			{
				swapy(i, j, top[0], top[1]);
				ft_swap(&a[i], &a[j]);
			}
			j--;
		}
		i--;
	}
	if (j != p)
	{
		swapy(p, j, top[0], top[1]);
		ft_swap(&a[p], &a[j]);
	}
	return (quick_sort(a, p, j == 0 ? 0 : j - 1, top)
			+ quick_sort(a, j + 1 == 0 ? j : j + 1, x, top));
}
