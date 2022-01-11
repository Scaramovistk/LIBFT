/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:13:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t		size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	row;
	char			*nstr;

	nstr = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!(s) || !(f) || !(nstr))
	{
		free(nstr);
		return (NULL);
	}
	row = 0;
	while (s[row])
	{
		nstr[row] = f(row, s[row]);
		row++;
	}
	nstr[row] = '\0';
	return (nstr);
}

#include <stdio.h>

char	f(unsigned int i, char c)
{
	char str;
	str = c + 32;
	return (str);
}

int	main(void)
{
	char str1[] = "HELLO WORLD";
	char* str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
}