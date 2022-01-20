/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:53:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/11 11:39:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
	{	
		return (0);
	}
	return (1);
}

//	#include <stdio.h>
//	#include <ctype.h>
//	int main (void)
//	{
//		char a[] = "z\nabc*15";
//		int c;
//		c = ft_isprint(a[5]);
//		//c = ft_isprint(a[4]);
//		printf("%d", c);
//		return (0);
//	}