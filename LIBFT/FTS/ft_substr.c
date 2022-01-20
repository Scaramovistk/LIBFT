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

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*nstr;
	size_t	row;
	size_t	size;

	row = 0;
	size = 0;
	while (s[start + size] && size < len)
		size++;
	nstr = malloc(sizeof(*nstr) * (size + 1));
	if (nstr == NULL || !s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		ft_memset(nstr, 0, size + 1);
		return (nstr);
	}
	while (row < size)
	{
		nstr[row] = s[start];
		row++;
		start++;
	}
	nstr[row] = '\0';
	return (nstr);
}

//	#include <stdio.h>
//	int main (void)
//	{
//		char str[] = "Hello World";
//		char *sbstr = ft_substr(str, 6, 12);
//		printf("%s\n", sbstr);
//		return (0);
//	}