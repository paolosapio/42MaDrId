/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:49:01 by psapio            #+#    #+#             */
/*   Updated: 2023/07/27 16:27:02 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	while ((str[i] >= 'A') && (str[i] <= 'Z'))
		i += 1;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
/*	int main (void)
{
	printf("%d", ft_str_is_uppercase("tontoelquelolea"));
	return(0);
}*/
