/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:22:55 by mefische          #+#    #+#             */
/*   Updated: 2025/04/22 16:03:07 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (!j)
		return (ft_strdup(""));
	while (ft_check(s1[i], set))
		i++;
	while (ft_check(s1[j], set))
		j--;
	return (ft_substr(s1, i, j - (i - 1)));
}

/*#include <stdio.h>

int	main(void)
{
	char str1[] = "aaeThis has to be trimmed.eae";
	char str2[] = "ae"; 
	char *new;

	new = ft_strtrim(str1, str2);
	printf("%s\n", new);
	free(new);
	return (0);
}*/