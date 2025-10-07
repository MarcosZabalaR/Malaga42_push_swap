/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:44:13 by mzabala-          #+#    #+#             */
/*   Updated: 2025/03/29 18:44:14 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *ptr, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)ptr;
	while (n > 0)
	{
		*str = 0;
		str++;
		n--;
	}
}
