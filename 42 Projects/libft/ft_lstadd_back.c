/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshaw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:58:07 by pshaw             #+#    #+#             */
/*   Updated: 2022/07/25 18:05:04 by pshaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cur;

	cur = *lst;
	if (cur == NULL)
	{
		*lst = new;
		return ;
	}
	while (cur->next != NULL)
	{
		cur = cur->next;
	}
	cur->next = new;
}
