/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshaw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:18:14 by pshaw             #+#    #+#             */
/*   Updated: 2022/07/14 15:37:55 by pshaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*This function tests if the character is part of the
 * ASCII table,on the decimal side. In which case it shall return a 1, 
 * otherwise a 0 shall be returned. */
/*#include <stdio.h>*/
#include "libft.h"

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	int x;
	x = ft_isascii('3');
	printf("%d\n", x);
	return (0);
}
*/
