/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:00:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    int     i;
    char    *p;

    p = (char *)s;
    i = 0;
    while (i < n)
    {
        if (p[i] == c)
            return (p + i);
        i++;
    }
    return (0);
}

    #include <stdio.h>
    #include <string.h>
    int main (void)
    {
        char s[] = "Hello World";
        char *p;
        p = ft_memchr(s, 'W', sizeof(char) * 7);
        printf("%s\n%s\n", p, s);

        return 0;
    }