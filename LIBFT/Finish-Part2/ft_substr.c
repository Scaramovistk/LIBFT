/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:00:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#inlcude "libft.h"
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

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *nstr;
    int row;

    if (start > len)
        return (NULL);
    row = 0;
    nstr = malloc(sizeof(char) * ft_strlen(s + start) + 1);
    if (nstr == NULL)
        return (NULL);
    while (start < len)
    {
        nstr[row] = s[start];
        row++;
        start++;
    }
    return (nstr);
}

#include <stdio.h>
int main (void)
{
    char str[] = "Hello World";
    char *sbstr = ft_substr(str, 6, 12);
    printf("%s\n", sbstr);
    return (0);
}