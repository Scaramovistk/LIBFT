/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:13:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

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

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

void del(void *a)
{
	
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*cr;

	if (!lst || !del)
		return ;
	cr = *lst;
	while (cr != NULL)
	{
		tmp = cr->next;
		del(cr->content);
		free(cr);
		cr = tmp;
	}
	*lst = NULL;
}

int		main(void)
{
	char	*str[5];
	int		size;
	t_list	*lst;
	t_list	*tmp;

	str[0] = "Nerva";
	str[1] = "Trajan";
	str[2] = "Hadrian";
	str[3] = "Antoninus";
	str[4] = "Marcus Aurelius";
	char	end[] = "Stat Roma pristina nomine, nomina nuda tenemus";
	lst = ft_lstnew((void *)end);
	size = 4;
	// *** Add Front ***
	while(size >= 0)
	{
		tmp = ft_lstnew((void *)str[size]);
		ft_lstadd_front(&lst, tmp);
		size--;
	}
	// *** Print After ***
	ft_lstclear(lst, del);
	while (tmp != NULL)
	{
		printf("\n%s\n\n", ((char *)tmp->content));
		tmp = tmp->next;
	}
	return (0);
}