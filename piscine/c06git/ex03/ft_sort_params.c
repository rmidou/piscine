/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:28:29 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/24 10:29:08 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_char_tab(char **tab, int size)
{
	int		count1;
	int		count2;
	char	*temp;

	count1 = 1;
	count2 = 1;
	temp = 0;
	while (count1 < size - 1)
	{
		count2 = 0;
		while (count2 < size - 1)
		{
			if (ft_strcmp(tab[count2], tab[count2 + 1]) > 0)
			{
				temp = tab[count2];
				tab[count2] = tab[count2 + 1];
				tab[count2 + 1] = temp;
			}
			count2++;
		}
		count1++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_char_tab(argv, argc);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
		ft_putchar('\n');
	}
}
