/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 08:46:50 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/21 10:41:30 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
/*
int	main(void)
{
	printf("%d",ft_atoi("   -------fgdjg++0000071514  566hkrbg"));
}
*/
