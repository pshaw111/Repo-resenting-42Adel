/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshaw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:13:36 by pshaw             #+#    #+#             */
/*   Updated: 2022/06/30 15:49:30 by pshaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*isalpha function tells us if what you input in the main is in the alphabet
 * (returns 1) or not (returns 0).
 * We're calling the ascii characters here. */
/* #include <stdio.h>*/
/*#include "libft.h"*/
int	ft_isalpha(int i)

{
	if ((i <= 90 && i >= 65) || (i <= 122 && i >= 97))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	int	x;

	x = ft_isalpha('x');
	printf("%d\n", x);
	return(0);
}
*/
