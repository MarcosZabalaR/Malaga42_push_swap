/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:35:28 by mzabala-          #+#    #+#             */
/*   Updated: 2025/03/29 18:35:29 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin_next(char *s1, char *s2)
{
	char	*strjoin;
	size_t	len1;
	size_t	len2;

	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char));
		if (!s1)
			return (0);
		s1[0] = 0;
	}
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	strjoin = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!strjoin)
		return (ft_free(&s1));
	len1 = -1;
	while (s1 && s1[++len1])
		strjoin[len1] = s1[len1];
	len2 = -1;
	while (s2 && s2[++len2])
		strjoin[len1 + len2] = s2[len2];
	strjoin[len1 + len2] = '\0';
	free(s1);
	return (strjoin);
}
