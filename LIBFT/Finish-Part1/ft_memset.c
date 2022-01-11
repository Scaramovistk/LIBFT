/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:24:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/11 11:33:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memset(void *s, int c, size_t n)
{
    int             i;
    char   *str;

    i = 0;
    str = (char *)s;
    while(n > 0)
    {
        *str = c;
        str++;
        n--;
    }
    return (str);
}

#include <stdio.h>
int		main(void)
{
	char	dest[] = "hello world";

	ft_memset(dest + 3, '$', 4);
	// memset(dest + 3, '$', 4);
	printf("new dest is: %s\n", dest);
	return (0);
}