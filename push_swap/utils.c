/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssurilla <ssurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:46:12 by ssurilla          #+#    #+#             */
/*   Updated: 2023/09/21 19:31:14 by ssurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void    list_init (t_node **head, t_node **tail)
{
    *head = NULL;
    *tail = NULL;
}

void	createnodes(struct t_node **head, struct t_node **tail, int data)
{
	t_node *new_node =(t_node*)malloc(sizeof(t_node));
    if (new_node == NULL)
        exit(1);   
	new_node->data = data;
	new_node->next = *head;
	new_node->prev = NULL;
    if (*head != NULL)   
        *head->prev = new_node;
    *head = new_node;
    if (*tail == NULL)
        *tail = new_node;
}