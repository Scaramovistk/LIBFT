/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:00:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

void *ft_calloc(size_t n, size_t size)
{
    
    size_t      i;
    char       *p;

    i = 0;
    p = malloc(n * size);
    if (p == NULL)
        return (NULL);
    while (i < size * n)
    {
        p[i] = 0;
        i++;
    }
    return (p);
}

#include <stdio.h>
#include <string.h>
int     main (void)
{
    char *s1 = ft_calloc(10, sizeof(char));
    char *s2 = calloc(10, sizeof(char));


    int i = strlen(s1);
    int j = strlen(s2);
    printf("ft_calloc:%s, %d\ncalloc:%s, %d\n", s1, i, s2, j);

    return (0);
}