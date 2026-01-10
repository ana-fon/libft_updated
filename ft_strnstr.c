/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:16:44 by mefische          #+#    #+#             */
/*   Updated: 2025/04/16 15:03:18 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && little[j] && big[i + j]
			== little[j] && (i + j < len))
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[(i)]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	big[] = "Today is a good day.";
	char	little[] = "good";
	char	*p;

	p = ft_strnstr(big, little, 15);
	printf("%s", p);
}*/