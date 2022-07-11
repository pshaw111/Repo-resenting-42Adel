/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshaw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:08:32 by pshaw             #+#    #+#             */
/*   Updated: 2022/07/04 19:02:44 by pshaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Memset is a function which writes bytes of value
 *  to the string pointed to by x, example if a was 'P' and b was '5' 
 *  it would fill the pointed string with 'PPPPP'. */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			index;
	char			*str;

	str = (char *)b;
	index = 0;
	while (index < len)
	{
		str[index] = (unsigned char)c;
		index++;
	}
	return (b);
}
/*
int	main(void)
{
	char str [] = "Blah Blah Blah";
	ft_memset(str, '*', 15);
	printf("%s\n", str);
	return (0);
}*/
