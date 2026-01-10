/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:49:37 by mefische          #+#    #+#             */
/*   Updated: 2025/04/15 10:23:55 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	if (dest == src)
		return (dest);
	if (!dest && !src && n > 0)
		return (NULL);
	if (src < dest)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/*int	main(void)
{
	char	str[] = "lets gooo";
	char	dest[] = "";

	ft_memmove(dest, str, 2); //copies 2 bytes
	printf("%s", dest);
}*/

/*Quero copiar n bytes do source para dest e ver algo
para overlapping memory*/