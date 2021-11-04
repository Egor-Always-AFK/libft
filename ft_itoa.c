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
#include <math.h>

static int	check_min(int c)
{
	if (c == (-2147483648))
		return (0);
	return (1);
}

static size_t check_len_int(int n)
{
	size_t i; 

	i = 0;
	if (n < 0)
		n *= -1;
	while (n > 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static int ft_pow(int i)
{
	int b;

	b = 1;
	while (i > 1)
	{
		b *= 10;
		i--;
	}
	return (b);
}

static char *copy_my_str_pls(char *c, const char *b)
{
	size_t	i;

	i = 0;
	while (c[i])
	{
		c[i] = b[i];
		i++;
	}
	c[i] = '\0';
	return(c);
}

char	*ft_itoa(int n)
{
	size_t	idk;
	char	*trash_res;
	int		trash;

	idk = check_len_int(n);
	trash = ft_pow(idk - 1);
	trash_res = malloc(sizeof(char) * (idk + 2));
	if (trash_res == NULL)
		return (NULL);
	if (check_min(n) == 0)
		return (copy_my_str_pls(trash_res, "-2147483648"));
	idk = 0;
	if (n < 0)
	{
		trash_res[idk++] = '-';
		n *= -1;
	}
	while (trash > 0)
	{
		trash_res[idk] = ((n / trash) + '0');
		idk++;
		trash /= 10;
	}
	trash_res[idk] = '\0';
	return (trash_res);
}
