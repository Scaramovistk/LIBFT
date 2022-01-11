/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:13:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t 		i;
	size_t		row;

	i = 0;
	row = ft_strlen(dest);
	while(i != size && src[i] != '\0')
	{
		dest[(row + i)] = src[i];
		i++;
	}
	dest[(row + i)] = '\0';	
	return(sizeof(dest));
}

    #include <unistd.h>
	#include <stdio.h>
	int		main(void)
	{

		char a[10] = "Hello ";
		char b[] = "World";
        
		int c = ft_strlcat(a, b, 5);

		printf("%s  %d\n", a, c);

		return 0;
	}