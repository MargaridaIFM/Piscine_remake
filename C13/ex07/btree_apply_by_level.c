/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:06:24 by mfrancis          #+#    #+#             */
/*   Updated: 2024/10/14 22:53:04 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_btree.h"

int max(int a, int b)
{
    if(a > b)
        return(a);
    else
        return(b);
}

 int btree_level_count(t_btree *root)
 {
    int idx;
    
    idx = 0;
    if(!root)
        return(0);
    if(root->left)
        idx = max(idx, btree_level_count(root->left));
    if (root->right)
        idx = max(idx, btree_level_count(root->right));
    return(idx + 1)
 }

void apply_current_level(t_btree *root, void (*applyf)(void *item, int current_level, int is_first_elem),
                         int current_level, int target_level, int *first_elem_flag)
{
    if (root == NULL)
        return(-1);
    if(current_level == target_level)
    {
        applyf(root->item, current_level, *first_elem_flag);
        *first_elem_flag = 0;
    }
    else
    {
        apply_current_level(root->left, applyf, current_level + 1, target_level, first_elem_flag);
        apply_current_level(root->right, applyf, current_level + 1, target_level, first_elem_flag);
    }
}

void btree_apply_by_level(t_btree *root, void (*applyf)(void *item, int current_level, int is_first_elem))
{
    int level;
    int count;
    int is_firt_flag;

    level = 0;
    if(!root)
        return(-1);
    count = btree_level_count(root);
    while(level < count)
    {
        is_firt_flag = 1;
        apply_current_level(root, applyf, 0, level, &is_first_flag);
        level++;
    }       
}