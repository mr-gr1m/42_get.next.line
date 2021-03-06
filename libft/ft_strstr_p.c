/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwillems <dwillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 14:05:16 by dwillems          #+#    #+#             */
/*   Updated: 2015/12/19 14:05:16 by dwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strstr_p(const char *haystack, const char *needle)
{
	int		i;
	size_t	len_needle;

	if (!needle || !haystack || *needle == '\0')
		return (-1);
	i = 0;
	len_needle = ft_strlen(needle);
	while (haystack[i])
	{
		i = ft_strchr_p(haystack, *needle);
		if (i == NOT_FOUND)
			return (NOT_FOUND);
		else if (ft_strnequ(haystack + i, needle, len_needle) == TRUE)
			return (i);
		i++;
	}
	return (NOT_FOUND);
}
