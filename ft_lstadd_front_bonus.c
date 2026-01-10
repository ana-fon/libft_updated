/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mefische <mefische@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:52:11 by mefische          #+#    #+#             */
/*   Updated: 2025/04/23 14:51:56 by mefische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*  int	main()
{
	t_list	*node1 = malloc(sizeof(t_list));
	node1->content = "oioi";
	t_list	*new = malloc(sizeof(t_list));
	new->content = "tchau";
	t_list	**lst = &node1;
	printf("%s\n", (char *)(*lst)->content);

	ft_lstadd_front(lst, new);
	printf("%s\n", (char *)(*lst)->content);
} */