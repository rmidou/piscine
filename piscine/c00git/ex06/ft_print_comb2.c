/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:44:59 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/17 10:17:28 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	number_r(int start1, int start2, int nb11, int nb12)
{
	int	nb1;
	int	nb2;

	nb1 = start1;
	nb2 = start2 + 2;
	while (nb1 <= 9)
	{
		nb2 = start2;
		while (nb2 <= 9)
		{
			if (!((nb1 == 0 && nb2 == 1) && (nb11 == 0 && nb12 == 0)))
				ft_putchar(32);
			ft_putchar(nb11 + 48);
			ft_putchar(nb12 + 48);
			ft_putchar(32);
			ft_putchar(nb1 + 48);
			ft_putchar(nb2 + 48);
			if (!(nb11 == 9 && nb12 == 8))
				ft_putchar(44);
			nb2++;
		}
		start2 = 0;
		nb1++;
	}
}

void	ft_print_comb2(void)
{
	int	nb11;
	int	nb12;

	nb11 = 0;
	nb12 = 0;
	while (nb11 <= 9)
	{
		nb12 = 0;
		while (nb12 <= 9)
		{
			number_r(nb11, nb12 + 1, nb11, nb12);
			nb12++;
		}
		nb11++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
