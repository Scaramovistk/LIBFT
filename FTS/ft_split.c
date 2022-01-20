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

static size_t	ft_freemx(char **strsplit, int i)
{
	if (!strsplit[i])
	{
		while (i >= 0)
		{
			free(strsplit[i]);
			i--;
		}
		return (1);
	}
	return (0);
}

static size_t	ft_findsize(const char *s, char c)
{
	size_t	size;
	size_t	row;

	size = 0;
	row = 0;
	if (s[0] == c)
		size = 1;
	while (s[row])
	{
		if (s[row] != c)
		{
			while (s[row] != c && s[row + 1])
				row++;
			size++;
		}
		row++;
	}
	return (size);
}

static char	*ft_strndup(const char *src, size_t size)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * size + 1);
	if (dest == NULL)
		return (NULL);
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static void	ft_wrtmtx(char **strsplit, const char *s, char c, size_t i)
{
	size_t	row;
	size_t	size;
	size_t	tmp;

	row = 0;
	while (s[row])
	{
		if (s[row] != c)
		{
			size = row;
			while (s[size] != c && s[size + 1])
				size++;
			tmp = size - row;
			if (s[size + 1] == '\0' && s[size] != c)
				tmp++;
			strsplit[i] = ft_strndup(&s[row], tmp);
			row = ft_freemx(strsplit, i);
			if (row == 1)
				return ;
			row = size;
			i++;
		}
		row++;
	}
	strsplit[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t		row;
	size_t		i;
	char		**strsplit;

	if (!s)
		return (NULL);
	row = ft_findsize(s, c);
	strsplit = malloc(sizeof(char **) * row);
	if (!strsplit)
		return (NULL);
	i = 0;
	ft_wrtmtx(strsplit, s, c, i);
	return (strsplit);
}

// int	main(void)
// {
// 	int row;
// 	char a[] = "--1-2--3---4----5-----42";
// 	char **c;

// 	printf("Before: %s\n", a);
// 	c = ft_split(" Tripouille ", ' ');
// 	row = 0;
// 	while(c[row] != NULL)
// 	{
// 		printf("After:%s!\n", c[row]);
// 		if (c[row] == NULL)
// 			printf("...NULL...\n");
// 		row++;
// 	}
// 	return (0);
// }