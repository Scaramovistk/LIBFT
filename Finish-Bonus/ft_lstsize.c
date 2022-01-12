/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
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

int ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}


int		main(void)
{
	char	*str[4];
	int		size;
	int		row;
	t_list	*lst;
	t_list	*tmp;

	str[0] = "Nerva";
	str[1] = "Trajan";
	str[2] = "Hadrian";
	str[3] = "Antoninus";
	str[4] = "Marcus Aurelius";
	lst = ft_lstnew((void *)str[4]);
	size = 3;
	// *** Add Front ***
	while(size >= 0)
	{
		tmp = ft_lstnew((void *)str[size]);
		ft_lstadd_front(&lst, tmp);
		size--;
	}
	size = ft_lstsize(lst);
	printf ("This list has : %d Nodes\n", size);
	return (0);
}