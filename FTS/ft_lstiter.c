/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:13:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f || !lst)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

//	void f(void *content)
//	{
//		content = (int *)content + 1;
//	}
//
//	int main(void)
//	{
//		t_list	lst;
//
//		lst.content = 10;
//		lst.next = NULL;
//		printf("Before :%d\n", (void *)lst.content);
//		ft_lstiter(&lst, &f);
//		printf("After :%d\n", (void *)lst.content);
//
//		return (0);
//	}