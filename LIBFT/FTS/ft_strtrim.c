/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:13:42 by gscarama          #+#    #+#             */
/*   Updated: 2022/01/20 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_trimmed(const char *s1, const char set, char *dest)
{
	int	row;
	int	wrt;

	row = 0;
	wrt = 0;
	while (s1[row] != '\0')
	{
		while (s1[row] == set)
			row++;
		dest[wrt] = s1[row];
		wrt++;
		row++;
	}
	dest[wrt] = '\0';
	return (dest);
}

static void	ft_cutset(const char *set, char *tmp1, char *tmp2)
{
	int	row;
	int	len;

	row = 0;
	len = ft_strlen(tmp2) + 1;
	while (set[row])
	{
		tmp1 = malloc(sizeof(char) * len);
		if (!tmp1)
			return ;
		ft_trimmed(tmp2, (const char)set[row], tmp1);
		len = ft_strlen(tmp1) + 1;
		ft_strlcpy(tmp2, tmp1, len);
		free(tmp1);
		row++;
	}
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*tmp1;
	char	*tmp2;
	int		len;
	int		row;

	row = 0;
	tmp1 = NULL;
	len = ft_strlen(s1) + 1;
	tmp2 = malloc(sizeof(char) * len);
	if (!tmp2)
		return (NULL);
	ft_strlcpy(tmp2, (char *)s1, len);
	ft_cutset(set, tmp1, tmp2);
	len = ft_strlen(tmp2) + 1;
	tmp1 = malloc(sizeof(char) * len);
	if (!tmp1)
		return (NULL);
	ft_strlcpy(tmp1, tmp2, len);
	free(tmp2);
	return (tmp1);
}
