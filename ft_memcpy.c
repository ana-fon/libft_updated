/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:34:03 by mefische          #+#    #+#             */
/*   Updated: 2025/04/23 15:36:26 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*pdest;
	char	*psrc;

	if ((dest == NULL && src == NULL) || (n == 0))
		return (dest);
	i = 0;
	pdest = dest;
	psrc = (char *)src;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}

/* int	main()
{
	char	source[] = "This is me trying.";
	char	dest[20] = "";

	ft_memcpy(dest, source, 2);
	printf("%s\n", dest);
	memcpy(dest, source, 2);
	printf("%s\n", dest);
} */
