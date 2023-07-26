/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:03:19 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/24 15:45:16 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(int *tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	a;

	a = 0;
	i = min;
	if (min >= max)
		return ((void *)0);
	tab = malloc(sizeof(int) * (max - min));
	if (tab == ((void *)0))
		return ((void *)0);
	while (i < max)
	{
		tab[a] = i;
		i++;
		a++;
	}
	return (tab);
}
