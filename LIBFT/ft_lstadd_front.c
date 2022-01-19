/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:13:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

//	int		main(void)
//	{
//		char	*str[5];
//		int		size;
//		int		row;
//		t_list	*lst;
//		t_list	*tmp;
//
//		str[0] = "Nerva";
//		str[1] = "Trajan";
//		str[2] = "Hadrian";
//		str[3] = "Antoninus";
//		str[4] = "Marcus Aurelius";
//		lst = ft_lstnew((void *)str[4]);
//		size = 3;
//		row = 0;
//		// *** Print Before ***
//		tmp = lst;
//		while (tmp != NULL)
//		{
//			printf("\nLast Great Emperator: 
//%s\n\n", ((char *)tmp->content));
//			tmp = tmp->next;
//		}
//		// *** Add Front ***
//		while(size >= 0)
//		{
//			tmp = ft_lstnew((void *)str[size]);
//			ft_lstadd_front(&lst, tmp);
//			size--;
//		}
//		// *** Print After ***
//		tmp = lst;
//		while (tmp != NULL)
//		{
//			printf("%d - Great Emperator: 
//%s\n", (row + 1), ((char *)tmp->content));
//			row++;
//			tmp = tmp->next;
//		}
//		return (0);
//	}