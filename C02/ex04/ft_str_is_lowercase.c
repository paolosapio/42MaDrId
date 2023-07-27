/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:27:35 by psapio            #+#    #+#             */
/*   Updated: 2023/07/26 22:10:44 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while ((str[i] >= 'a') && (str[i] <= 'z'))
		i += 1;
	if (str[i] == '\0')
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
		printf("%d", ft_str_is_lowercase(""));
		return(0);
	}*/
