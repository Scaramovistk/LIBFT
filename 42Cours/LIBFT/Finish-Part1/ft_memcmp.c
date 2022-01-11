/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:00:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char *p1;
    char *p2;
    size_t i;

    p1 = (char *)s1;
    p2 = (char *)s2;
    i = 0;
    while (i < n)
    {
        if (p1[i] != p2[i])
            return (p1[i] - p2[i]);
        i++;
    }
    return (0);
}

    #include <stdio.h>
    #include <string.h>
    int main (void)
    {
        char s1[] = "AA";
        char s2[] = "Aa";
        char *p;
        int i;
        i = ft_memcmp(s1, s2, sizeof(char) * 2);
        printf("%d\n", i);

        return 0;
    }