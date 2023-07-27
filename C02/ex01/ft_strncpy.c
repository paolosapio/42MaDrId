/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:42:37 by psapio            #+#    #+#             */
/*   Updated: 2023/07/26 00:09:31 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	v;

	v = 0;
	while (src[v] != '\0' && v < n)
	{
		dest[v] = src[v];
		v += 1;
	}
	while (v < n)
	{
		dest[v] = '\0';
	}
	return (dest);
}

int	main(void)
{
	char	*dest;

	ft_strncpy(dest, "casa dolce casa", 1);
	write(1, dest, 15);
	return (0);
}
