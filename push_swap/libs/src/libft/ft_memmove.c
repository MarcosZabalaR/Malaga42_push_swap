/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:41:22 by mzabala-          #+#    #+#             */
/*   Updated: 2025/03/29 18:41:22 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str_dest;
	unsigned char	*str_src;

	str_dest = (unsigned char *)dest;
	str_src = (unsigned char *)src;
	if (!dest && !src)
		return (0);
	if (dest < src)
	{
		i = -1;
		while (++i < n)
			str_dest[i] = str_src[i];
	}
	else
	{
		while (n--)
			str_dest[n] = str_src[n];
	}
	return (dest);
}
