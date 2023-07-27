/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 01:30:50 by psapio            #+#    #+#             */
/*   Updated: 2023/07/19 18:41:57 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	numeros;

	numeros = '0';
	while (numeros <= '9')
	{
		write (1, &numeros, 1);
		numeros += 2;
	}	
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
