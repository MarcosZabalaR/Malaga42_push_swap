/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:39:04 by mzabala-          #+#    #+#             */
/*   Updated: 2025/03/29 18:39:05 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*cp_s1 = (unsigned char *)s1;
	const unsigned char	*cp_s2 = (unsigned char *)s2;

	i = 0;
	if (s1 == s2 || n == 0)
		return (0);
	while (i < n && cp_s1[i] && cp_s2[i])
	{
		if (cp_s1[i] != cp_s2[i])
			return (cp_s1[i] - cp_s2[i]);
		i++;
	}
	if (i >= n)
		i--;
	return (cp_s1[i] - cp_s2[i]);
}
