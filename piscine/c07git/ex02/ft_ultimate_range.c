/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:04:54 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/26 15:58:58 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	a;
	int	*tab;

	a = 0;
	i = min;
	if (min >= max)
	{	*range = NULL;
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (tab == ((void *)0))
		return (-1);
	while (i < max)
	{
		tab[a] = i;
		i++;
		a++;
	}
	*range = tab;
	return (a);
}
