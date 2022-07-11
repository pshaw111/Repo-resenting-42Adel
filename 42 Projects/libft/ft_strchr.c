/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshaw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:05:36 by pshaw             #+#    #+#             */
/*   Updated: 2022/07/06 14:50:57 by pshaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*strchr function locates the first occurrance of c (converted to a char)
 * in the string pointed to be s.
 */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != (char)c)
		s++;
	if (*s != (char)c)
		return (NULL);
	else
		return ((char *)s);
}
