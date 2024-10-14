/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:45:55 by mfrancis          #+#    #+#             */
/*   Updated: 2024/10/14 17:56:59 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_btree.h"

void *btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
    if(root = 0)
        return NULL;
    if((*cmpf)(root->item, data_ref) == 0)
        return(root->item);
    if((*cmpf)(root->item, data_ref) < 0)
        return(btree_search_item(root->left, data_ref, cmpf));
    return(btree_search_item(root->right, data_ref, cmpf));
}