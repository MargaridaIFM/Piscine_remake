/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:46:48 by mfrancis          #+#    #+#             */
/*   Updated: 2024/10/14 16:56:43 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_btree.h"

/* A travessia infixa (também chamada de in-ordem) é uma maneira de percorrer 
uma árvore binária, onde a visita aos nós segue a ordem:
primeiro a subárvore esquerda,
depois o nó atual 
e, finalmente, a subárvore direita. */

void btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
    if(!root)
        return(-1);
    if (root->left != NULL)
        btree_apply_infix(root->left, applyf);
    applyf(root->item);
    if (root->right != NULL) 
       btree_apply_prefix(root->right, applyf);
}