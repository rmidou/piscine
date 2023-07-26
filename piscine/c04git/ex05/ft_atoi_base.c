/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:35:21 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/26 17:19:55 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verif_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i + 1])
	{
		j = i + 1;
		while (str[j])
		{
			if ((str[i] == str[j]) || ((str[i] >= 9 && str[i] <= 13) 
					|| str[i] == ' ') || str[i] == '-' || str[i] == '+')
				return (0);
			j++;
		}
		i++;
	}
	if (i < 1)
		return (0);
	return (i + 1);
}

int	get_char_i(char *str, char c)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (i);
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		signe;
	int		nbr;
	int		base_len;

	i = 0;
	signe = 1;
	nbr = 0;
	base_len = verif_base(base);
	if (!base_len)
		return (0);
	if (!str[i])
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			signe *= -1;
	while (get_char_i(base, str[i]) != -1)
	{
		nbr *= base_len;
		nbr += get_char_i(base, str[i]);
		i++;
	}
	return (nbr * signe);
}
