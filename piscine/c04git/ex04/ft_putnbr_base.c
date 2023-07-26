/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:41:25 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/26 17:11:37 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	str_len(char *str)
{
	int	i;
	int	y;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 33 || str[i] > 126 || ((str[i] == 43) || (str[i] == 45)))
			return (0);
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		y = i + 1;
		while (str[y] != '\0')
		{
			if (str[i] == str[y])
				return (0);
			y++;
		}
		i++;
	}
	return (i);
}

void	ft_display(unsigned int nb, char *base)
{
	unsigned int	remain;
	unsigned int	tab[45];
	unsigned int	counter;
	unsigned int	len_b;

	len_b = str_len (base);
	remain = nb;
	counter = 0;
	while (remain >= len_b)
	{
		tab[counter] = (base[(remain % len_b)]);
		remain = remain / len_b;
		counter++;
	}
	if (remain > 0)
		ft_putchar (base[remain]);
	else if (remain == 0)
		ft_putchar(48);
	while (counter > 0)
	{
		ft_putchar(tab[counter - 1]);
		counter--;
	}
}

void	ft_nbnegative(int nb, char *base)
{
	ft_putchar(45);
	if (nb == -2147483648)
	{
		ft_display(2147483648, base);
	}
	else
		ft_display(-nb, base);
}

void	ft_putnbr_base(int nb, char *base)
{
	if (str_len(base) >= 2 && nb < 0)
		ft_nbnegative(nb, base);
	else if (!(str_len(base) < 2))
		ft_display(nb, base);
}
