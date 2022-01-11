/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:24:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/11 11:33:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_isalpha(int c)
{
  
    if(c < 65 || ( c > 90 && c < 97) || c > 122)
	{	
		return (0);
	}
	return (1);
}

/////////
#include <stdio.h>
#include <ctype.h>
int main (void)
{
    char a[] = "zabc*15";
    int c;
    //c = isalpha(a[0]);
    c = ft_isalpha(a[4]);
    printf("%d", c);
    return (0);
}