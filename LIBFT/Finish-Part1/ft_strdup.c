/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 07:14:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/15 07:06:10 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *src)
{
    size_t i;
    char *dest;

    i = 0;
    dest = malloc(sizeof(char) * ft_strlen(src) + 1);
    if (dest == NULL)
        return (NULL);
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

//////////
#include <stdio.h>
int main (void)
{
    char a[] = "hello world";
    char *b = ft_strdup(a);
    printf("%s", b);
}