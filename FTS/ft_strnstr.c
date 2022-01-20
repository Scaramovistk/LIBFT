/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:00:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	size;
	size_t	row;
	size_t	read;

	row = 0;
	read = 0;
	size = ft_strlen(to_find);
	if (!ft_strlen(to_find))
		return ((char *) str);
	while (str[row] != '\0' && row < len)
	{
		read = 0;
		while ((str[row + read] == to_find[read]) && read + row < len)
			read++;
		if (read == size)
			return ((char *)str + row);
		row++;
	}
	return (0);
}

//	int main(void)
//	{
//		char a[]= "Hello howworl world how are you";
//		char b[]= "world";
//		char *c = ft_strnstr(a, b, sizeof(char) * 15);
//		printf("%s\n", c);
//
//		return 0;
//	}