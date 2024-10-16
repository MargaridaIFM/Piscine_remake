/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:58:32 by mfrancis          #+#    #+#             */
/*   Updated: 2024/10/14 16:39:09 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_btree.h"

t_btree *btree_create_node(void *item)
{
	t_btree *new;

	new = NULL;
	new = malloc(sizeof (t_btree));
	if(!new)
		return(-1);
	if(new)
	{
		new->item = item;
		new->left = NULL;
		new->right = NULL;
	}

	return()
}