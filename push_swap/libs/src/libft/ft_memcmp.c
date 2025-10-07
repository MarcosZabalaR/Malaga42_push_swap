/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:41:38 by mzabala-          #+#    #+#             */
/*   Updated: 2025/03/29 18:41:38 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *p1, const void *p2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)p1;
	s2 = (unsigned char *)p2;
	if (s1 == s2)
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	if (i == n)
		i--;
	return (s1[i] - s2[i]);
}
