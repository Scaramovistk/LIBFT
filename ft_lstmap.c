/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 23:13:42 by gscarama          #+#    #+#             */
/*   Updated: 2022/01/19 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*ft;

	if (!lst)
		return (NULL);
	nlst = ft_lstnew(f(lst->content));
	ft = nlst;
	lst = lst->next;
	while (lst)
	{
		nlst->next = ft_lstnew(f(lst->content));
		if (!nlst->next)
		{
			ft_lstclear(&ft, del);
			return (0);
		}
		nlst = nlst->next;
		lst = lst->next;
	}
	nlst->next = NULL;
	return (ft);
}
