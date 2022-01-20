/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:24:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/11 11:34:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
	{	
		return (0);
	}
	return (1);
}

//	#include <stdio.h>
//	#include <ctype.h>
//	int main (void)
//	{
//		char a[] = "19zabc*15";
//		int c;
//		//c = isdigit(a[2]);
//		c = ft_isdigit(a[2]);
//		printf("%d", c);
//		return (0);
//	}