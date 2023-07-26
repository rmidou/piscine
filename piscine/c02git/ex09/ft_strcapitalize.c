/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:34:07 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/20 15:28:21 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	newword;

	i = 0;
	newword = 1;
	while (str[i] != '\0')
	{
		if (newword == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (newword == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str [i] + 32;
		if ((str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			newword = 0;
		else
			newword = 1;
		i++;
	}
	return (str);
}

