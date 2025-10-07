/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:41:17 by mzabala-          #+#    #+#             */
/*   Updated: 2025/03/29 18:41:18 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *ptr, int value, size_t n)
{
	unsigned char	*str;
	unsigned char	c;

	str = (unsigned char *)ptr;
	c = (unsigned char)value;
	while (n > 0)
	{
		*str = c;
		str++;
		n--;
	}
	return (ptr);
}
