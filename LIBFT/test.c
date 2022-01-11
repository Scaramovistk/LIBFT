/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:00:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h> 
#include<fcntl.h> 
#include<errno.h>
#include <string.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		++i;
	}
}

void	ft_to_lowercase(unsigned int i, char *ch)
{
	printf("s[%d] is %c\n", i, ch[0]);
	if (ch[0] >= 65 && ch[0] <= 90)
		ch[0] = ch[0] + 32;
}

int		main(void)
{
	char	s[] = "hELLO WORLD!";
	// char	*s2;

	printf("Initial str is '%s'\n", s);
	ft_striteri(s, &ft_to_lowercase);
	printf("Transofrmed str is '%s'\n", s);
	return (0);
}