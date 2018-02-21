/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:50:17 by gwood             #+#    #+#             */
/*   Updated: 2018/02/20 22:56:40 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *save;

	save = s1;
	while (*s1)
			s1++;
	while (n-- && *s2)
		*s1++ = *s2++;
	*s1++ = 0;

	return (save);
}