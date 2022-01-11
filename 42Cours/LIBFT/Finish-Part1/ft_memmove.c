/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:00:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
//#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	char	*dest;
	char	*serc;

  dest = (char *) dst;
  serc = (char *) src;
  i = 0;
  //if (dest > serc && dest < serc + n)
    while (n > 0)
    {
      dest[n - 1] = serc[n - 1];
      n--;
    }
  //else
    //while (i < n)
   // {
     // dest[i] = serc[i];
      //i++;
    //}
	return (dest);
}

 int main (void)
  {
      char    src[] = " worldHello";
      char    src2[] = " Helloworld";

      ft_memmove(src, src2 + 3, 3);
      memmove(src, src2 + 3, 3);

      printf("ft_memmove: %s\n", src);
      printf("memmove:    %s\n", src2);
      return (0);
  }
  