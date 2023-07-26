/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 08:32:18 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/15 09:09:22 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_is_numeric(char *str)
{
	int	booleen;
	int	i;

	i = 0;
	booleen = 1;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			booleen = 0;
		i++;
	}
	return (booleen);
}
