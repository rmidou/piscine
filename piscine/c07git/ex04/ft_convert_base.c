/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 09:32:25 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/26 15:34:11 by nbiron           ###   ########.fr       */
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

int	ft_atoi(char *str)
{
	int		i;
	int		signe;
	int		nbr;

	i = 0;
	signe = 1;
	nbr = 0;
	if (!str[i])
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i += 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
		{
			signe *= -1;
		}
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += (str[i] - 48);
		i++;
	}
	return (nbr * signe);
}

void	ft_putnbr_base(int nb, char *base)
{
	if (str_len(base) >= 2 && nb < 0)
		ft_nbnegative(nb, base);
	else if (!(str_len(base) < 2))
		ft_display(nb, base);
}



char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	
}
