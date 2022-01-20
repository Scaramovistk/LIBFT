/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:24:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/11 11:33:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libc.h"

void	ft_bzero(void *dst, size_t n)
{
	char	*str;

	str = (char *)dst;
	while (n > 0)
	{
		*str = '\0';
		str++;
		n--;
	}
}

//	#include <stdlib.h>
//	#include <stdio.h>
//
//	int main( void )
//	{
//		char buffer[80] = "hello world";
//
//		printf("Before:%s\n", buffer);
//
//		ft_bzero(buffer, 5);
//
//		printf("After:%s", buffer);
//
//		return 0;
//	}