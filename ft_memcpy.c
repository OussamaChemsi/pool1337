/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochemsi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:12:22 by ochemsi           #+#    #+#             */
/*   Updated: 2023/11/22 21:56:23 by ochemsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (src == dest)
		return (dest);
	while (i < n)
	{
		(((unsigned char *)dest)[i]) = (((unsigned char *)src)[i]);
		i++;
	}
	return (dest);
}
