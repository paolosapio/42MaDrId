/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:41:12 by psapio            #+#    #+#             */
/*   Updated: 2023/07/23 13:13:47 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
/*
int	main(void)
{

	int a;
	int b;
	int div;
	int mod;

	a = 7;
	b = 2;

	ft_div_mod(a, b, &div, &mod);
	printf("dividido %d, resta %d, \n", div, mod);

		return(0);
}*/
