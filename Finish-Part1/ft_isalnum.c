/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:24:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/11 11:33:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int 	ft_isalnum(int c)
{
  
    if(!(isalpha(c) || isdigit(c)))
	{	
		return (0);
	}
	return (1);
}

/////////
#include <stdio.h>
//#include <ctype.h>
int main (void)
{
    char a[] = " zabc*15";
    int c;
    //c = isalnum(a[0]);
    c = ft_isalnum(a[0]);
    printf("%d", c);
    return (0);
}