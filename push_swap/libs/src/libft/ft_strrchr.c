/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:38:49 by mzabala-          #+#    #+#             */
/*   Updated: 2025/03/29 18:38:50 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i > 0 && str[i] != (unsigned char)c)
		i--;
	if (str[i] == (unsigned char)c)
		return ((char *)&str[i]);
	return (0);
}
