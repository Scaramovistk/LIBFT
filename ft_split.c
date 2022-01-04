/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:13:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char    **ft_split(char const *s, char c)
{
    int row;
    char *strsplit;

    row = 0;
    while (s[row] != '\0' && s[row] != c)
        row++;
    strsplit = malloc(row * (sizeof(char)) + 1);
    row = 0;
    while (s[row] != '\0')
    {
        strsplit[row] = s[row];
        if (s[row] == c)
        {
            strsplit[row] = '\0';
            return (strsplit);
        }
        row++;
    }
}

#include <stdio.h>

int main (void)
{
    char a[] = "Hello World";
    printf("Before: %s\n", a);
    char *c = ft_split(a,'o');
    printf("After: %s\n", c);

    return (0);
}