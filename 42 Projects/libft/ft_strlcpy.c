/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshaw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:54:24 by pshaw             #+#    #+#             */
/*   Updated: 2022/07/04 16:35:33 by pshaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Strlcpy copies and concatenates(joins together) strings
 * It copies upto dstsize - 1 characters from the string src to dst. */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*s;
	size_t	i;

	s = (char *)src;
	i = 0;
	while (dstsize > 0 && i < dstsize - 1 && s[i] != '\0')
	{
		dst[i] = s[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (ft_strlen(s));
}
/*
int	main(void)
{
	char	dest [] = "";
	char	src [] = "0uryrhfh";
	printf("%ld\n", ft_strlcpy(dest, src, 9));
	return (0);
}
*/
