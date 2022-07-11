/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshaw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:02:18 by pshaw             #+#    #+#             */
/*   Updated: 2022/07/04 17:33:17 by pshaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*s;
	size_t	i;
	size_t	dstlen;

	s = (char *)src;
	i = 0;
	dstlen = ft_strlen(dst);
	if (dstsize == 0)
		return (ft_strlen(s));
	if (dstsize < dstlen + 1)
		return (dstsize + ft_strlen(s));
	while (dstsize > 0 && i + dstlen < dstsize - 1 && s[i] != 0)
	{
		dst[dstlen + i] = s[i];
		i++;
	}
	dst[dstlen + i] = 0;
	return (dstlen + ft_strlen(s));
}
