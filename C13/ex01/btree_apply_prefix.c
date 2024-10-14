/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:38:45 by mfrancis          #+#    #+#             */
/*   Updated: 2024/10/14 16:56:31 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_btree.h"

/* A função btree_apply_prefix deve percorrer uma árvore binária
usando a percurso prefixado (ou pré-ordem) 
e aplicar uma função a cada nó da árvore. 
Na travessia prefixada, a função visita o nó atual primeiro,
depois percorre o subárvore à esquerda e finalmente o subárvore à direita. */

 void btree_apply_prefix(t_btree *root, void (*applyf)(void *))
 {
    if(!root)
        return(-1);
    applyf(root->item);
    if (root->left != NULL)
        btree_apply_prefix(root->left, applyf);
    if (root->right != NULL) 
       btree_apply_prefix(root->right, applyf);
 }