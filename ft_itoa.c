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

static int check_len_int(int n)
{
	int i; 

	i = 0;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int	idk;
	char	*trash_res;
	int		sign_trash;
 
	sign_trash = 1;
	idk = check_len_int(n);
	trash_res = malloc(sizeof(char) * (idk + 1 + (n < 0)));
	if (trash_res == NULL)
		return (NULL);
	trash_res[idk + 1] = '\0';
	if (n < 0)
	{
		trash_res[0] = '-';
		sign_trash *= -1;
		idk += 1;
	}
	if (n == 0)
		trash_res[0] = '0';
	while (n)
	{
		trash_res[--idk] = ((n % 10) * sign_trash) + '0';	
		n /= 10;
	}
	return (trash_res);
}
