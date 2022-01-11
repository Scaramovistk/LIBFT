/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:13:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static char	*ft_mxnegint()
{
	char	*str;

	str = malloc(sizeof(char) * 12);
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = '\0';
	return (str);
}

static int	ft_size(int n)
{
	int	size;

	size = 0;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static char	ft_convnbr(char *str, int size, int n)
{
	str[size + 1] = '\0';
	while (n != 0)
	{
		str[size - 1] = (n % 10) + '0';
		n /= 10;
		size--;
	}
}

char	*ft_itoa(int n)
{
	int		size;
	int		row;
	char	*str;

	if (n == -2147483648)
		return (ft_mxnegint());
	size = ft_size(n);
	row = 0;
	if (n < 0)
	{
		size++;
		str = malloc(sizeof(char) * size + 1);
		str[0] = '-';
		n *= -1;
	}
	else
		str = malloc(sizeof(char) * size + 1);
	ft_convnbr(str, size, n);
	return (str);
}

//	int	main(void)
//	{
//
//		//char *c = ft_itoa(-78962);
//		char *c = ft_itoa(2147483647);
//		//char *c = ft_itoa(-2147483648);
//		printf("str:%s\n", c);
//
//		return (0);
//	}