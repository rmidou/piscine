/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:29:10 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/16 10:22:33 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int nb, int *tab, int affiche)
{
	int	i;

	if (affiche == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	i = 0;
	while (i < nb)
	{
		ft_putchar(tab[i] + 48);
		i++;
	}
}

void	ft_increment(int nb, int *tab)
{
	int	i;
	int	max;

	i = nb - 1;
	max = 9;
	while (tab[i] == max)
	{
		i -= 1;
		max -= 1;
	}
	tab[i] += 1;
	while (i < nb)
	{
		tab[i + 1] = tab[i] + 1;
		i += 1;
	}
}

void	ft_print_combn(int nb)
{
	int	tab[10];
	int	i;

	i = 0;
	while (i < nb)
	{
		tab[i] = i;
		i++;
	}
	ft_print(nb, tab, 0);
	while (tab[0] != 10 - nb)
	{
		if (tab[nb - 1] != 9)
		{
			tab[nb - 1] += 1;
		}
		else
		{
			ft_increment(nb, tab);
		}
		ft_print(nb, tab, 1);
	}
}
/*
int	main(void)
{
	ft_print_combn(5);
}
*/
