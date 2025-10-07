/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:38:55 by mzabala-          #+#    #+#             */
/*   Updated: 2025/03/29 18:38:56 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*s1_copy;
	char	*s2_copy;
	size_t	i;
	size_t	j;

	i = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	while (*s1 && i < n)
	{
		s1_copy = (char *)s1;
		s2_copy = (char *)s2;
		j = i;
		while (*s1_copy == *s2_copy && *s1_copy && *s2_copy && j < n)
		{
			s1_copy++;
			s2_copy++;
			j++;
		}
		if (*s2_copy == '\0')
			return ((char *)s1);
		s1++;
		i++;
	}
	return (NULL);
}
