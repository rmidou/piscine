/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:56:18 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/20 14:53:42 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	i2 = 0;
	while (src[i] != '\0')
		i++;
	if (size > 0)
	{
		while (src[i2] != '\0' && i2 = (size - 1))
		{
			dest[i2] = src[i2];
			i2++;
		}
		dest[i2] = '\0';
	}
	return (i);
}
