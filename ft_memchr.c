/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:32:42 by mefische          #+#    #+#             */
/*   Updated: 2025/04/11 11:23:24 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	c = (unsigned char) c;
	while (i < n)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	//char	string[] = "ab\0cdef\0gh\0ij";
	int		tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	int	c = -1;
	char	*res;

	res = (char *)ft_memchr(tab, c, 7);
	printf("%s", res);
}*/