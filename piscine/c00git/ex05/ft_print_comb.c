/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:41:50 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/12 12:42:05 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	chek_not_in(int nb1, int nb2, int nb3)
{
	if ((nb1 * 100 + nb2 * 10 + nb3) > (nb2 * 100 + nb1 * 10 + nb3))
		return (0);
	else if ((nb1 * 100 + nb2 * 10 + nb3) > (nb2 * 100 + nb3 * 10 + nb1))
		return (0);
	else if ((nb1 * 100 + nb2 * 10 + nb3) > (nb3 * 100 + nb2 * 10 + nb1))
		return (0);
	else if ((nb1 * 100 + nb2 * 10 + nb3) > (nb3 * 100 + nb1 * 10 + nb2))
		return (0);
	else if ((nb1 * 100 + nb2 * 10 + nb3) > (nb1 * 100 + nb3 * 10 + nb2))
		return (0);
	else
		return (1);
}

void	print(int nb1, int nb2, int nb3)
{
	if (nb1 != nb2 && nb2 != nb3 && nb1 != nb3)
	{
		if (chek_not_in(nb1, nb2, nb3))
		{
			if (!(nb1 == 0 && nb2 == 1 && nb3 == 2))
				ft_putchar(32);
			ft_putchar(nb1 + 48);
			ft_putchar(nb2 + 48);
			ft_putchar(nb3 + 48);
			if (!(nb1 == 7 && nb2 == 8 && nb3 == 9))
				ft_putchar(44);
		}
	}
}

void	ft_print_comb(void)
{
	int	nb1;
	int	nb2;
	int	nb3;

	nb1 = 0;
	nb2 = 0;
	nb3 = 0;
	while (nb1 != 8)
	{
		nb2 = 0;
		while (nb2 != 10)
		{
			nb3 = 0;
			while (nb3 != 10)
			{
				print(nb1, nb2, nb3);
				nb3++;
			}
			nb2++;
		}
		nb1++;
	}
}
