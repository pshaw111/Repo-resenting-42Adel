/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshaw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:12:45 by pshaw             #+#    #+#             */
/*   Updated: 2022/07/25 16:31:42 by pshaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*dst)(void *))
{
	t_list	*temp;

	temp = NULL;
	if (lst != NULL)
	{
		while (*lst != NULL)
		{
			temp = (*lst)->next;
			ft_lstdelone(*lst, dst);
			*lst = temp;
		}
	}
}
