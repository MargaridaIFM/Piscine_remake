/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:57:42 by mfrancis          #+#    #+#             */
/*   Updated: 2024/10/14 17:20:57 by mfrancis         ###   ########.fr       */
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

 void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
 {
    t_btree *tree;

    if(root = 0 || *root = 0 || item = 0)
        btree_create_node(item);
    tree = root;
    if((*cmpf)(item, (*root)->item) < 0 )
    {
        if(tree->left)
            btree_insert_data(&tree->left, item, cmpf);
        else
            tree->left = btree_create_node(item);
    }
    else
    {
        if(tree->right)
            btree_insert_data(&tree->right, item, cmpf);
        else
            tree->right = btree_create_node(item);
        
    } 
 }