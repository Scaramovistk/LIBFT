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

static char	**ft_mkmatrix(char const *s, char t)
{
	char	**matrix;
	int		c;
	int		row;
	int		size;
	int		tmp;

	row = 0;
	size = 1;
	while (s[row] != '\0')
	{
		if (s[row] == t)
			size++;
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
	if (strsplit == NULL)
		return (NULL);
	while(s[row] != '\0')
	{	
		strsplit[i] = ft_s(s, c, row);
		while (s[row] != c && s[row] != '\0')
			row++;
		i++;
		row++;
	}
	return (strsplit);
}

#include <stdio.h>

	int	main(void)
	{
		int row;
		char a[] = "Hello-World-Como-Estas-Amiguito";
		char **c;

		printf("Before: %s\n", a);
		c = ft_split(a,'-');
		row = 0;
		while(row != 5)
		{
			printf("After: %s\n", c[row]);
			row++;
		}
		return (0);
	}
