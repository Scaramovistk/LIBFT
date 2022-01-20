/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 23:13:42 by gscarama          #+#    #+#             */
/*   Updated: 2022/01/15 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst;
	char	*origin;

	if (dest == NULL && src == NULL)
		return (NULL);
	dst = (char *)dest;
	origin = (char *)src;
	i = 0;
	while (n > i)
	{
		dst[i] = origin[i];
		i++;
	}
	return (dest);
}

//	#include <stdlib.h>
//	#include <stdio.h>
//
//	int main (void)
//	{
//		char    s1[] = "world Hell";
//		char    src2[] = " worldHello";
//		int row = 5;
//
//		/////////// set       final   string size
//		ft_memcpy(s1 + row, s1 + (row  + 1), (11 - row));
//		//ft_memcpy(src + 6, src + 7, 5);
//		memcpy(src2 + 3, src2, 5);
//
///		printf("ft_memcpy:%s\n", s1);
//		printf("memcpy: %s\n", src2);
//		return (0);
//	}
