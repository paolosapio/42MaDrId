/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:21:12 by psapio            #+#    #+#             */
/*   Updated: 2023/07/23 15:49:36 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divisione;
	int	resto;

	divisione = (*a / *b);
	resto = (*a % *b);
	*a = divisione;
	*b = resto;
}
/*
int main(void)

{
	int a;
	int b;

	a = 7;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("divisione%d\n", a);
	printf("resto%d\n", b);
	return (0);
}*/
