/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 23:13:42 by gscarama          #+#    #+#             */
/*   Updated: 2022/01/15 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	len;
	size_t	row;

	row = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (row < (size - 1) && src[row])
	{
		dest[row] = src[row];
		row++;
	}
	dest[row] = '\0';
	return (len);
}

//	#include <stdio.h>
//	int		main(void)
//	{
//		char src[] = "Source";
//		char dest[] = "";
//		int n;
//		int c;
//
//		n = 0;
//		c = 0;
//		printf("BEFORE\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n", src, dest, c);
//
//		c = ft_strlcpy(dest, src, 10);
//
//		printf("AFTER\n\tsrc: %s\n\tdes: %s\n\tsize: %d", src, dest, c);
//		return (0);
//	}