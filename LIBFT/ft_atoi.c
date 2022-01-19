/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:13:42 by gscarama          #+#    #+#             */
/*   Updated: 2022/01/18 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int				neg;
	int				i;
	unsigned int	nb;

	neg = 1;
	i = 0;
	nb = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		neg *= (-1);
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb + str[i] - '0';
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			nb *= 10;
		i++;
	}
	return ((int)((nb) * (neg)));
}

//	#include <stdio.h>
//	int main(void)
//	{
//		char a[] = " --184467441a493a455";
//		unsigned int c = ft_atoi(a);
//		printf("\nResult: %d\n\n", c);
//
//		return 0;
//	}