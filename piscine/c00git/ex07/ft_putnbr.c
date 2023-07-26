/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:42:10 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/17 10:13:46 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int nb)
{
	int	remain;
	int	tab[45];
	int	counter;

	remain = nb;
	counter = 0;
	while (remain >= 10)
	{
		tab[counter] = ((remain % 10) + 48);
		remain = remain / 10;
		counter++;
	}
	if (remain > 0)
		ft_putchar (48 + remain);
	else if (remain == 0)
		ft_putchar(48);
	while ((counter) > 0)
	{
		ft_putchar(tab[counter - 1]);
		counter--;
	}
}

void	ft_nbnegative(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		ft_putchar(45);
		ft_display(nb * (-1));
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
		ft_nbnegative(nb);
	else
		ft_display(nb);
}
/*
int main(void)
{
	ft_putnbr(10);
}
*/
