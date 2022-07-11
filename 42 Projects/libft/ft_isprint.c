/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshaw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:33:26 by pshaw             #+#    #+#             */
/*   Updated: 2022/06/29 19:59:24 by pshaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*This function tests for any printing character, including
 * a space. If found a 1 will be returned otherwise a 0.*/
/*#include <stdio.h>*/
#include "libft.h"

int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	int x;

		x = ft_isprint('f');
		printf("%d\n", x);
	return (0);
}
*/
