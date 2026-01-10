/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:43:16 by mefische          #+#    #+#             */
/*   Updated: 2025/04/21 17:47:48 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;
	size_t	total;

	i = 0;
	l = 0;
	while (dst[l])
	{
		l++;
	}
	total = l + ft_strlen(src);
	if (size > l)
	{
		while ((src[i]) && (i + l < size - 1))
		{
			dst[i + l] = src[i];
			i++;
		}
		dst[i + l] = '\0';
	}
	else
		return (size + ft_strlen(src));
	return (total);
}

/*int	main(void)
{
	char	dest[11] = "a";
	char	src[] = "lorem";

	printf("%zu\n", ft_strlcat(dest, src, 15));
	printf("%s\n", dest);
}*/