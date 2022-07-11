/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshaw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:35:59 by pshaw             #+#    #+#             */
/*   Updated: 2022/06/29 19:59:49 by pshaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*This functions tells us if your input (int i) is a digit 
 * character or not (returns 0)*/
/*#include <stdio.h>*/
#include "libft.h"

int	ft_isdigit(int i)
{
	if (i >= 48 && i <= 57)
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	int	x;

		x = ft_isdigit('5');
		printf("%d\n", x);
		return (0);
		}
*/
