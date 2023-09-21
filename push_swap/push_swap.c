/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssurilla <ssurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:35:25 by ssurilla          #+#    #+#             */
/*   Updated: 2023/09/21 19:26:22 by ssurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
    
int	main(int ac, char *av)
{
    int testarray[MAX] = {1, 6, 4, 2, 8};
	
    struct t_node* stack_a = NULL;
	struct t_node* stack_b = NULL;
    
    createnodes(stack_a, testarray);
    
}