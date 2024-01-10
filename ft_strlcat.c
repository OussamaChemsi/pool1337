/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochemsi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:13:38 by ochemsi           #+#    #+#             */
/*   Updated: 2023/11/21 17:42:36 by ochemsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;

	if (size == 0 && dst == NULL)
		return (ft_strlen(src));
	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	i = 0;
	if (size == 0 && !dst)
		return (lendst + lensrc);
	if (size != 0)
	{
		while (lendst + i < size - 1 && src[i] != '\0')
		{
			dst[lendst + i] = src[i];
			i++;
		}
	}
	dst[lendst + i] = '\0';
	if (size > lendst)
		return (lendst + lensrc);
	else
		return (size + lensrc);
}
