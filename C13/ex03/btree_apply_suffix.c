/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:50:11 by mfrancis          #+#    #+#             */
/*   Updated: 2024/10/14 16:56:53 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_btree.h"

/* 
 A ordem de visitação dos nós é a seguinte:

Primeiro percorre a subárvore à esquerda.
Depois percorre a subárvore à direita.
Por fim, visita o nó atual.
 */

 void btree_apply_suffix(t_btree *root, void (*applyf)(void *))
 {
    if(!root)
        return(-1);
    if (root->left != NULL)
        btree_apply_suffix(root->left, applyf);
    if (root->right != NULL) 
       btree_apply_prefix(root->right, applyf);
    applyf(root->item);
 }