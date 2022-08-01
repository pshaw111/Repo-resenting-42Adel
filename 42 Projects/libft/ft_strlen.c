/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshaw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:53:07 by pshaw             #+#    #+#             */
/*   Updated: 2022/07/14 16:00:00 by pshaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*This function works out how long a string of characters is,*/
/* not counting the nul character.*/
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	printf("%i\n", ft_strlen("count me"));
	return (0);
}
*/
