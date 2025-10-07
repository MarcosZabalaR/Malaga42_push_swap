/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:39:48 by mzabala-          #+#    #+#             */
/*   Updated: 2025/03/29 18:39:49 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	size_t	i;
	size_t	len;
	char	*dest;

	len = 0;
	while (src[len] != '\0')
		len++;
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (0);
	i = -1;
	while (++i < len)
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	dest[len] = '\0';
	return (dest);
}
