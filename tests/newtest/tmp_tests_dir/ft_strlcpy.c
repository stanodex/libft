/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hceviz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 13:23:44 by hceviz            #+#    #+#             */
/*   Updated: 2024/12/01 14:20:59 by hceviz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!size || !src)
		return (src_len);
	while (*src && --size)
	{
		*dst = *src;
		src++;
		dst++;
	}
	*dst = '\0';
	return (src_len);
}
/*#include <stdio.h>
int	main(void)
{
	const char *x = "hasan";
	char		y[5];
	int	res = ft_strlcpy(y, x, 6);
	int	i = 0;
	while (y[i])
	{
		printf("%c", y[i]);
		i++;
	}
	printf("%d", res);
	return 1;
}*/