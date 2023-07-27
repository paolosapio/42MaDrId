/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:11:43 by psapio            #+#    #+#             */
/*   Updated: 2023/07/26 22:01:02 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	v;

	v = 0;
	while ((str[v] >= '0') && (str[v] <= '9'))
	v += 1;
	if (str[v] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*   
int main (void)
{
	printf ("%d", ft_str_is_numeric("123345678u90"));
	return(0);
}*/
