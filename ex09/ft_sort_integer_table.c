/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmulaudz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 14:29:32 by rmulaudz          #+#    #+#             */
/*   Updated: 2020/06/21 14:40:55 by rmulaudz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_sor_integer_table(int *tab, int size)
{
	int i, j, min, temp;

	i = 0;
	while(i < size)
	{
		min = i;
		j = i + 1;
		while(j < size)
		{
			if(tab[j] < tab[min])
				min = j;
            
			j++;
		}
        
		temp = tab[min];
		tab[min] = tab[i];
		tab[i] = temp;
     	i++;
    }	


