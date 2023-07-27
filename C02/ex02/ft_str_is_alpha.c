/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 01:13:17 by psapio            #+#    #+#             */
/*   Updated: 2023/07/26 13:14:20 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	v;

	v = 0;
	while ((str[v] >= 'a' && str[v] <= 'z') || (str[v] >= 'A' && str[v] <= 'Z'))
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

int	main(void)
{
	printf ("%d", ft_str_is_alpha("pizzaConfrutaNOO!"));
	return (0);
}
