/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:13:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int		main(void)
// {
// 	char	*str[5];
// 	int		size;
// 	t_list	*lst;
// 	t_list	*tmp;

// 	str[0] = "Nerva";
// 	str[1] = "Trajan";
// 	str[2] = "Hadrian";
// 	str[3] = "Antoninus";
// 	str[4] = "Marcus Aurelius";
// 	char	end[] = "Stat Roma pristina nomine, nomina nuda tenemus";
// 	lst = ft_lstnew((void *)end);
// 	size = 4;
// 	// *** Add Front ***
// 	while(size >= 0)
// 	{
// 		tmp = ft_lstnew((void *)str[size]);
// 		ft_lstadd_front(&lst, tmp);
// 		size--;
// 	}
// 	// *** Print After ***
// 	tmp = ft_lstlast(lst);
// 	while (tmp != NULL)
// 	{
// 		printf("\n%s\n\n", ((char *)tmp->content));
// 		tmp = tmp->next;
// 	}
// 	return (0);
// }