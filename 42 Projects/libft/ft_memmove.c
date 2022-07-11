/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshaw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:02:15 by pshaw             #+#    #+#             */
/*   Updated: 2022/07/04 18:58:07 by pshaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Memmove function copies x length of bytes from string 'src'
 *  to string 'dst'. The two strings may overap.*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (!dest && !src)
		return (NULL);
	ptr1 = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	if ((size_t)(ptr1 - ptr2) >= len)
		while (len--)
			*ptr1++ = *ptr2++;
	else
		while (len--)
			ptr1[len] = ptr2[len];
	return (dest);
}
