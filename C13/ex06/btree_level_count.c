/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:52:28 by mfrancis          #+#    #+#             */
/*   Updated: 2024/10/14 22:32:28 by mfrancis         ###   ########.fr       */
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

/*   int btree_level_count(t_btree *root)
  {
    int rigth_count;
    int left_count;
    
    rigth_count = btree_level_count(root->right);
    left_count = btree_level_count(root->lift);

    if(rigth_count > left_count)
        return(rigth_count + 1);
    else
        return(left_count + 1);\
  } */
    