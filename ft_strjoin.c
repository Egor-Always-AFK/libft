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

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size1;
	size_t	size2;
	size_t	size_couple;
	char	*trash_couple;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	size_couple = ft_strlen(s1) + ft_strlen(s2);
	trash_couple = malloc(sizeof(char) * (size_couple + 1));
	if (trash_couple == NULL)
		return (NULL);
	size1 = 0;
	size2 = 0;
	while (*(s1 + size1))
	{
		*(trash_couple + size1) = *(s1 + size1);
		size1++;
	}
	while (*(s2 + size2))
	{
		*(trash_couple + size1 + size2) = *(s2 + size2);
		size2++;
	}
	*(trash_couple + size1 + size2) = '\0';
	return (trash_couple);
}
