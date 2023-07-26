/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:43:15 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/25 09:31:18 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (dest[i] != '\0')
		i++;
	while (src[i2] != '\0')
	{
		dest[i] = src[i2];
		i2++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		total;

	total = 0;
	i = 0;
	str = "";
	if (size == 0)
		return (str);
	while (strs[i])
	{
		total += str_len(strs[i]);
		if (strs[i++ + 1])
			total += str_len(sep);
	}
	str = malloc(sizeof(char) * total);
	i = 0;
	while (strs[i])
	{
		ft_strcat(str, strs[i]);
		if (strs[i++ + 1])
			ft_strcat(str, sep);
	}
	return (str);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n",  ft_strjoin(argc, argv, "___"));
}*/
