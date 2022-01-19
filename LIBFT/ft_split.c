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

#include "libft.h"

static char	**ft_mkmatrix(char const *s, char t)
{
	char	**matrix;
	int		row;
	int		size;

	row = 0;
	if (s[row] == t)
		size = 0;
	else
		size = 1;
	while (s[row] != '\0')
	{
		if (s[row] == t)
		{
			while (s[row] == t)
				row++;
			size++;
		}
		row++;
	}
	matrix = malloc(sizeof(char *) * size);
	if (!matrix)
		return (NULL);
	return (matrix);
}

static char	*ft_s(char const *s, char c, int row)
{
	char	*strsplit;
	int		tmpnb;
	int		i;

	i = 0;
	tmpnb = row;
	while (s[row] != '\0' && s[row] != c)
		row++;
	strsplit = malloc((row - tmpnb) * (sizeof(char)) + 1);
	if (!strsplit)
		return (NULL);
	while (s[tmpnb] != '\0')
	{
		strsplit[i] = s[tmpnb];
		if (s[tmpnb] == c)
		{
			strsplit[i] = '\0';
			return (strsplit);
		}
		i++;
		tmpnb++;
	}
	strsplit[i] = '\0';
	return (strsplit);
}

char	**ft_split(char const *s, char c)
{
	int		row;
	int		i;
	char	**strsplit;

	row = 0;
	i = 0;
	strsplit = ft_mkmatrix(s, c);
	if (!strsplit)
		return (NULL);
	if (c == 0)
	{
		strsplit[0] = (char *)s;
		strsplit[1] = NULL;
		return (strsplit);
	}
	while (s[row] != '\0')
	{	
		while (s[row] == c && s[row] != '\0')
			row++;
		strsplit[i] = ft_s(s, c, row);
		while (s[row] != c && s[row] != '\0')
			row++;
		i++;
		row++;
	}
	strsplit[i] = NULL;
	return (strsplit);
}

		// int	main(void)
		// {
		// 	int row;
		// 	char a[] = "--1-2--3---4----5-----42";
		// 	char **c;

		// 	printf("Before: %s\n", a);
		// 	c = ft_split("  tripouille  42 ", ' ');
		// 	row = 0;
		// 	while(c[row] != NULL)
		// 	{
		// 		printf("After: %s\n", c[row]);
		// 		row++;
		// 	}
		// 	return (0);
		// }