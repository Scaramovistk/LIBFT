/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:13:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t		size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t      i;
    char        *dst;
    char        *origin;

    if (dest == NULL && src == NULL)
        return (NULL);
    dst = (char *)dest;
    origin = (char *)src;
    i = 0;
    while (n > i)
    {
        dst[i] = origin[i];
        i++;
    }
    return (&dest[0]);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char *dest;
    int row;
    int a;
    int find;
    int lens1;

    row = 0;
    lens1 = ft_strlen(s1);
    dest = malloc(sizeof(char) * lens1 + 1);
    if (dest == NULL)
        return (NULL);
    ft_memcpy(dest, s1, lens1);
    while (dest[row] != '\0')
    {
        find = 0;
        a = row;
        while (dest[a] == set[find])
        {   
            if (set[find + 1] == '\0')
                ft_memcpy(dest + row, dest + (row + ft_strlen(set)), lens1 - row);
            find++;
            a++;
        }
        row++;
    }
    return(dest);
}


#include <stdio.h>
int     main (void)
{
    char s1[] = "Hello World";
    char *dest;
    int row = 7;

    printf("\nBefore:%s\n", s1);
    dest = ft_strtrim(s1, "o");
    printf("\nAfter:%s\n", dest);
    return (0);
}