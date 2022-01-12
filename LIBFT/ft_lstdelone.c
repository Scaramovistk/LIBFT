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

//#include "libft.h"
#include <unistd.h>
#include <stdio.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	
}