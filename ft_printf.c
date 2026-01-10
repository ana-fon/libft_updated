/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:14:53 by mefische          #+#    #+#             */
/*   Updated: 2025/07/02 11:51:14 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char format, va_list ap)
{
	if (format == '%')
		return (ft_putchar('%'));
	else if (format == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (format == 'u')
		return (ft_unsig_putnbr(va_arg(ap, unsigned int)));
	else if (format == 'x')
		return (ft_printhexa(va_arg(ap, unsigned int), "0123456789abcdef"));
	else if (format == 'X')
		return (ft_printhexa(va_arg(ap, unsigned int), "0123456789ABCDEF"));
	else if (format == 'p')
		return (ft_pointer(va_arg(ap, void *)));
	return (-1);
}

int	ft_printf(const char *f, ...)
{
	int		i;
	int		count;
	va_list	ap;

	i = 0;
	count = 0;
	va_start(ap, f);
	if (!f)
		return (0);
	while (f[i])
	{
		if (f[i] == '%')
			count += ft_check(f[++i], ap);
		else
			count += write(1, &f[i], 1);
		i++;
	}
	va_end(ap);
	return (count);
}

/* # include <stdio.h>

int	main()
{
	int		x = 387870;
	int		count = 0;
	char	str[] = "lets go";
	char	c = 'm';
	
	//Percentage
	ft_printf("Percentage: 10%%\n\n");
	
	//Character
	ft_printf("Caracter: ");
	count = ft_printf("%c", c);
	printf ("\nReturn value: %d\n\n", count);

	//String
	ft_printf("String: ");
	count = ft_printf("%s", str);
	ft_printf("\nMy return value: %d\nPrintf: ", count);
	count = printf("%s", str);
	printf("\nPrintf return value: %d\n\n", count);

	//Decimal or integer
	ft_printf("Integer or decimal: ");
	count = ft_printf("%d", x);
	ft_printf ("\nMy return value: %d\nPrintf: ", count);
	count = printf("%d", x);
	printf ("\nPrintf return value: %d\n\n", count);

	//Two variables
	ft_printf("Multiple variables:");
	ft_printf(" Integer %i, character %c and then string %s.\n\n", x, c, str);

	//Unsigned int
	ft_printf ("Unsigned int: ");
	ft_printf ("%u", 10);

	//Hexadecimal underscore
	ft_printf("\nHexadecimal(x): Integer %i in hexadecimal is %x.\n", x, 26);

	//Hexadecimal upperscore
	ft_printf("\nHexadecimal(X): Integer %i in hexadecimal is %X.\n", x, 26);

	//Pointer
	ft_printf("\nMemory address of x is %p.\n", &c);
	printf("Printf memory address of x is %p.\n", &c);
} */