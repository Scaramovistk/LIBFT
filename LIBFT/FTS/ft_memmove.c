/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:13:42 by gscarama          #+#    #+#             */
/*   Updated: 2022/01/20 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_copy(char *dest, char *serc, size_t n, int back)
{
	size_t	i;

	i = 0;
	if (back)
	{
		while (n > 0)
		{
			dest[n - 1] = serc[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			dest[i] = serc[i];
			i++;
		}
	}
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*serc;

	if (!dst && !src)
		return (NULL);
	dest = (char *) dst;
	serc = (char *) src;
	if (dst > src)
		ft_copy(dest, serc, n, 1);
	else
		ft_copy(dest, serc, n, 0);
	return (dest);
}
