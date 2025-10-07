/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:41:48 by mzabala-          #+#    #+#             */
/*   Updated: 2025/03/29 18:41:49 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *ptr, int value, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	c;

	i = 0;
	str = (unsigned char *)ptr;
	c = (unsigned char)value;
	while (i < n)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (0);
}
