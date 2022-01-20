/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:13:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	row;

	if (!(s) || !(f))
		return ;
	row = 0;
	while (s[row])
	{
		f(row, &s[row]);
		row++;
	}
}

//	void	f(unsigned int i, char *c)
//	{
//		if (c[0] >= 65 && c[0] <= 90)
//			c[0] = c[0] + 32;
//	}
//	int	main(void)
//	{
//		char str[] = "HELLO WORLD";
//		ft_striteri(str, f);
//		printf("%s\n", str);
//	}
