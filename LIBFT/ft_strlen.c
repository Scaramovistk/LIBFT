/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:30:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t		size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

//	#include <stdio.h>
//	#include <string.h>
//	int main(void)
//	{
//		char a[10] = "Hello";
//		int c = ft_strlen(a);
//
//		printf("%d\n", c);
//		return 0;
//	}
