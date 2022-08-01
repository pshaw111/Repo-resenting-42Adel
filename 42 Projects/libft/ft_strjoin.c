/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshaw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:14:20 by pshaw             #+#    #+#             */
/*   Updated: 2022/07/29 16:38:15 by pshaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//This function uses malloc to return a new string, which is the result of 
//connecting(concatenating) 's1' and 's2'

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	unsigned int	i;
	char			*result;
	unsigned int	s1_len;
	unsigned int	s2_len;

	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * s1_len + s2_len +1);
	if (result == NULL)
		return (NULL);
	while (i < s1_len)
	{
		result[i] = s1[i];
		i++;
	}
	while (i < s2_len + s1_len)
	{
		result[i] = s2[i - s1_len];
		i++;
	}
	result[i] = '\0';
	return (result);
}
