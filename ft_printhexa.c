/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 14:08:06 by mefische          #+#    #+#             */
/*   Updated: 2025/07/02 11:54:55 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printhexa(unsigned long n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_printhexa(n / 16, base);
	return (count + ft_putchar(base[n % 16]));
}
