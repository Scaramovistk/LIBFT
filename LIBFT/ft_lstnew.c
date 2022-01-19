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

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list *));
	if (list == NULL)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

// int		main(void)
// {
// 	t_list	*lst;
// 	int		n1 = 4;
// 	char	c = 'C';
// 	char	str[] = "Métaphysique";

// 	lst = ft_lstnew((void *)&n1);
// 	lst->next = ft_lstnew((void *)&c);
// 	lst->next->next = ft_lstnew((void *)&str);

// 	printf("\nHead:    %d\n", *((int *)lst->content));
// 	printf("Meadle: -%c\n", *((char *)lst->next->content));
// 	printf("Tail:    %s\n\n", (char *)lst->next->next->content);

// 	return (0);
// }