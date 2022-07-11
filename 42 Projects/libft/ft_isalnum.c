/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshaw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:02:12 by pshaw             #+#    #+#             */
/*   Updated: 2022/06/29 19:57:23 by pshaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* This function tests if the input is either a digit
 * or an alphabet, it returns 1
 * if this is true otherwise it returns 0 */

/*#include <stdio.h>*/
#include "libft.h"

int	ft_isalnum(int i)
{
	if ((i >= 48 && i <= 57) || (i >= 65 && i <= 90) || (i >= 97 && i <= 122))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	int	x;
	x = ft_isalnum('}');
	printf("%d\n", x);
	return(0);
}
*/
