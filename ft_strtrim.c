/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochemsi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 02:17:21 by ochemsi           #+#    #+#             */
/*   Updated: 2023/11/22 21:50:06 by ochemsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	if (end > 0)
	{
		while (ft_strchr(set, s1[start]) && s1[start])
			start++;
		while (ft_strchr(set, s1[end - 1]) && end > start)
			end--;
	}
	return (ft_substr(s1, start, end - start));
}
