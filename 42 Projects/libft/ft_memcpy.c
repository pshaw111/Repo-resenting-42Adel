/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshaw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:46:42 by pshaw             #+#    #+#             */
/*   Updated: 2022/07/04 13:55:48 by pshaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Memcpy function copies 'x' bytes from memory area 'src' 
 * to memory area 'dst'. */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_t;
	unsigned char	*src_t;
	size_t			count;

	if (dst == NULL && src == NULL)
		return (NULL);
	count = 0;
	dst_t = (unsigned char *)dst;
	src_t = (unsigned char *)src;
	while (count < n)
	{
		dst_t[count] = src_t[count];
		count++;
	}
	return (dst);
}
