/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsuner <hsuner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:36:02 by hsuner            #+#    #+#             */
/*   Updated: 2023/10/27 14:57:49 by hsuner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*tmp;
	void	*content;

	if (!lst || !f)
		return (0);
	ret = 0;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			ft_lstclear(&ret, del);
		if (!content)
			return (0);
		tmp = ft_lstnew(content);
		if (!tmp)
		{
			free(content);
			ft_lstclear(&ret, del);
			return (0);
		}
		ft_lstadd_back(&ret, tmp);
		lst = lst->next;
	}
	return (ret);
}
