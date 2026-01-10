/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:33:33 by mefische          #+#    #+#             */
/*   Updated: 2025/07/02 11:56:12 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	l;

	l = 0;
	if (!s)
		return (0);
	while (s[l])
	{
		l++;
	}
	return (l);
}

/*int	main()
{
	printf("%zu", ft_strlen("Hello"));
}*/