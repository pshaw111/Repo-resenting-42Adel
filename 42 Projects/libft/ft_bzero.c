/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshaw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:20:14 by pshaw             #+#    #+#             */
/*   Updated: 2022/07/01 16:38:02 by pshaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Bzero is a function that writes 'n' zeroed bytes to the string 's'*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*c;

	c = (char *)s;
	while (n > 0)
	{
		*(c++) = '\0';
		n--;
	}
}
/*
int	main(void)
{
	char	str[] = "What's got Billy so spooked";
	ft_bzero(str, 11);
	printf("%s\n", str);
	return (0);
}
*/
