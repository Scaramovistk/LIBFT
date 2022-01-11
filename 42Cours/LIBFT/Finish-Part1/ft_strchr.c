/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:13:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/14 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strchr(const char *s, int c)
{
    int     i;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            return (s + i);
        i++;
    }
    if (c == '\0')
        return (s + i);
    return (0);
}

    #include <stdio.h>
    #include <string.h>
    int main (void)
    {
        char s[] = "Hello World";
        char *p;
        p = ft_strchr(s, 'z');
        printf("%s\n%s\n", p, s);

        return 0;
    }