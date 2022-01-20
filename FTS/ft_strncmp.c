/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:00:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	row;

	row = 0;
	while ((s1[row] != '\0' || s2[row] != '\0') && row < n)
	{
		if (s1[row] != s2[row])
			return (s1[row] - s2[row]);
		row++;
	}
	return (0);
}

//	#include <stdio.h>
//	int main (void)
//	{
//
//	char a[] = "123456";
//		char b[] = "123457";
//		int c = ft_strncmp(a,b, 4);
//		printf("%d", c);
//
//		return 0;
//	}
