/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:56:20 by mfrancis          #+#    #+#             */
/*   Updated: 2024/10/14 16:51:29 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <sys/types.h>
# include <unistd.h>

typedef struct s_btree
{
struct s_btree *left;
struct s_btree *right;
void 			*item;
} t_btree;

void btree_apply_prefix(t_btree *root, void (*applyf)(void *))


#endif