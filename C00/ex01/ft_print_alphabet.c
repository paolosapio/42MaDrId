/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 04:08:53 by psapio            #+#    #+#             */
/*   Updated: 2023/07/26 00:42:50 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alfabeto;

	alfabeto = 'a';
	while (alfabeto <= 'z')
	{
		write (1, &alfabeto, 1);
		alfabeto += 1;
	}
}
/*
int main (void)
{
	ft_print_alphabet();

return(0);
}*/
