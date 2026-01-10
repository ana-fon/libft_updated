/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:48:22 by mefische          #+#    #+#             */
/*   Updated: 2025/04/23 14:51:46 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*#include <stdio.h>
int main() 
{
	t_list *node1;
	char *content = "hello world";

	node1 = ft_lstnew(content);
	printf("%p\n", node1);
	printf("%s\n", (char *)node1->content);
	printf("%s\n", (char *)node1->next);
	return 0;
}  */
