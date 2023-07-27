/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 19:59:28 by psapio            #+#    #+#             */
/*   Updated: 2023/07/19 18:11:36 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	otebafla;

	otebafla = 'z';
	while (otebafla >= 'a')
	{
		write (1, &otebafla, 1);
		otebafla += -1;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
