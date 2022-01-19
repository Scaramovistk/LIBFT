/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 07:14:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/15 07:06:10 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	row;

	i = 0;
	row = ft_strlen(dest);
	while (i != size && src[i] != '\0')
	{
		dest[(row + i)] = src[i];
		i++;
	}
	dest[(row + i)] = '\0';
	return (sizeof(dest));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*nstr;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	nstr = malloc(sizeof(char) * len);
	if (s1 == 0 || s2 == 0)
		return (0);
	if (nstr == NULL)
		return (NULL);
	nstr[0] = '\0';
	ft_strlcat(nstr, s1, len);
	ft_strlcat(nstr, s2, len);
	return (nstr);
}

//	#include <stdio.h>
//	int main(void)
//	{
//		char str1[] = "hello";
//		char str2[] = "world";
//		char *nstr = ft_strjoin(str1, str2);
//
//		printf("%s\n", nstr);
//		return (0);
//	}