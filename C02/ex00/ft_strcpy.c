/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <psapio@student.42madrid.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:46:06 by psapio            #+#    #+#             */
/*   Updated: 2023/07/26 00:26:14 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	v;

	v = 0;
	while (src[v] != '\0')
	{
		dest[v] = src[v];
		v += 1;
	}
	dest[v] = '\0';
	return (dest);
}

int	main(void)
{
	char	*dest;

	ft_strcpy(dest, "casa dolce casa");
	write(1, dest, 15);
	return (0);
}
