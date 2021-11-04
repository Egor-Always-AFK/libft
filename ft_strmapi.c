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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	trash_size;
	size_t	idk;
	char	*trash_d;

	if (s == NULL)
		return (NULL);
	trash_size = ft_strlen(s);
	trash_d = malloc(sizeof(char) * (trash_size + 1));
	if (trash_d == NULL)
		return (NULL);
	idk = 0;
	while (*(s + idk))
	{
		*(trash_d + idk) = (*f)(idk, *(s + idk));
		idk++;
	}
	*(trash_d + idk) = '\0';
	return (trash_d);
}
