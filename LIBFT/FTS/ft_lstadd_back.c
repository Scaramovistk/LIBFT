/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:13:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst)
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		tmp = ft_lstlast(*lst);
		tmp->next = new;
	}
}

// int		main(void)
// {
// 	t_list	*lst;
// 	t_list	*tmp;

// 	char *s1;
// 	char *s2;

// 	s1 = "Marco";
// 	s2 = "Polo";
// 	lst = ft_lstnew((void *)s1);
// 	tmp = ft_lstnew((void *)s2);
// 	ft_lstadd_back(&lst, tmp);
// 	tmp = lst;
// 	while (tmp != NULL)
// 	{
// 		printf("%s\n", ((char *)tmp->content));
// 		tmp = tmp->next;
// 	}
// 	return (0);
// }