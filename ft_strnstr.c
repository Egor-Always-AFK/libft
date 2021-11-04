/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocapers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:13:45 by ocapers           #+#    #+#             */
/*   Updated: 2021/10/22 14:13:52 by ocapers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;
	char	*trash;

	trash = (char *)haystack;
	i = 0;
	if (*needle == '\0')
		return (trash);
	while (trash[i] != '\0')
	{
		if (trash[i] == needle[0])
		{
			k = 0;
			while (needle[k] == trash[i + k] && i + k < len
				&& needle[k] && trash[i + k])
				k++;
			if (!needle[k])
				return (&trash[i]);
		}
		i++;
	}
	return (NULL);
}
