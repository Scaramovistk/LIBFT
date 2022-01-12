/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:00:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h> 
#include<fcntl.h> 
#include<errno.h>
#include <string.h>
#include <unistd.h>

typedef struct
s_list
{
	void		*content;
	struct s_list	*next;
} t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	if (!(lst = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

int		main(void)
{
	t_list	*head;
	int		data;

	data = 11;
	head = ft_lstnew((void *)&data);
	printf("Content on p1 is equal to %d\n", *((int *)head->content));
	return (0);
}

int		main(void)
{
	t_list	*lst;
	int		data1 = 19;
	int		data2 = 42;

	lst = ft_lstnew((void *)&data1);
	lst->next = ft_lstnew((void *)&data2);

	printf("\nHead: %d, Tail%d\n\n", lst->content, lst->next->content);

	return (0);
}