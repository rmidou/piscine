/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:13:31 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/13 16:47:03 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	inter;

	inter = *a / *b;
	*b = *a % *b;
	*a = inter;
}

/*
int		main(void)
{
	int a, b, *ptr1, *ptr2;

	a = 841;
	b = 74;
	ptr1 = &a;
	ptr2 = &b;
	ft_ultimate_div_mod(ptr1, ptr2);
	printf("Result (11)= %d\n", a);
	printf("Rest (27)= %d\n", b);
}
*/