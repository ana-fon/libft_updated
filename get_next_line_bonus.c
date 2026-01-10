/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:46:48 by mefische          #+#    #+#             */
/*   Updated: 2025/07/02 13:18:15 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*read_line(int fd, char *stash)
{
	char	*buffer;
	char	*temp;
	int		bytes;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	bytes = 1;
	while (!ft_gnlstrchr(stash, '\n') && bytes != 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes == -1)
			return (free(buffer), free(stash), (NULL));
		buffer[bytes] = '\0';
		temp = stash;
		stash = ft_gnlstrjoin(temp, buffer);
		free(temp);
		if (!stash)
			return (free(buffer), (NULL));
	}
	free(buffer);
	buffer = NULL;
	return (stash);
}

static char	*ft_get_line(char *stash)
{
	char	*line;
	int		len;
	int		i;

	line = NULL;
	len = 0;
	if (!stash || !*stash)
		return (NULL);
	while (stash[len] && stash[len] != '\n')
		len++;
	if (stash[len] == '\n')
		len++;
	line = malloc ((len + 1) * sizeof (char));
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

static char	*update_stash(char *stash, char *line)
{
	char	*new_stash;
	size_t	line_len;

	if (!line)
		return (free(stash), (NULL));
	line_len = ft_gnlstrlen(line);
	if (stash[line_len] == '\0')
		return (free(stash), (NULL));
	new_stash = ft_gnlstrndup(stash, line_len);
	if (stash)
		free(stash);
	return (new_stash);
}

char	*get_next_line(int fd)
{
	static char	*stash[1024];
	char		*line;

	if (fd < 0 || fd >= 1024 || BUFFER_SIZE <= 0)
		return (NULL);
	stash[fd] = read_line(fd, stash[fd]);
	if (!stash[fd])
		return (NULL);
	line = ft_get_line(stash[fd]);
	if (!line)
	{
		free(stash[fd]);
		stash[fd] = NULL;
		return (NULL);
	}
	stash[fd] = update_stash(stash[fd], line);
	return (line);
}

/* int	main(void)
{
	int		fd;
	int		fd2;
	int		fd3;
	char	*line;

	fd = open("text.txt", O_RDONLY);
	fd2 = open("text2.txt", O_RDONLY);
	fd3 = open("text3.txt", O_RDONLY);
	if (fd == -1 || fd2 == -1 || fd3 == -1)
	{
		printf("Error: Could not open text.txt\n");
		return (1);
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	printf("\n");
	while ((line = get_next_line(fd2)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	printf("\n");
	while ((line = get_next_line(fd3)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	printf("\n");
	close(fd);
	close(fd2);
	close(fd3);
	return (0);
} */
