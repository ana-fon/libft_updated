/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:59:30 by mefische          #+#    #+#             */
/*   Updated: 2025/04/23 16:49:49 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*# include <fcntl.h> //for open

int	main(void)
{
	int		fd;
	char	c;

	c = 'a';
	fd = open("z", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
		return (1);
	ft_putchar_fd(c, fd);
	close(fd);
	if (close(fd) == -1)
		return (1);
}*/