/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:38:12 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/13 19:00:03 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	finish;
	int	temp;

	start = 0;
	finish = size - 1;
	temp = 0;
	while (start <= finish)
	{
		temp = tab[start];
		tab[start] = tab[finish];
		tab[finish] = temp;
		start++;
		finish--;
	}
}

/*
int		main(void)
{
	int tab[20];
	int i;
	int size;

	size = 20;
	i = 0;
	while (i < size)
	{
		tab[i] = size - i;
		i++;
	}
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d: %d\n", i + 1, tab[i]);
		i++;
	}
}
*/