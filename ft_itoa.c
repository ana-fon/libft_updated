/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:40:04 by mefische          #+#    #+#             */
/*   Updated: 2025/04/17 14:36:42 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		len++;
	while (nbr)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		size;
	int		i;

	nbr = (long) n;
	size = count_len(nbr);
	str = malloc((size + 1) * sizeof (char));
	if (!str)
		return (NULL);
	if (nbr == 0)
		str[0] = '0';
	i = size - 1;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		str[i--] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	str[size] = '\0';
	return (str);
}

/*int	main(void)
{
	printf("number: %s\n", ft_itoa(1000647));
	printf("count: %d\n", count_len(1000647));
}*/