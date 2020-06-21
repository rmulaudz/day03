/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmulaudz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 13:50:34 by rmulaudz          #+#    #+#             */
/*   Updated: 2020/06/21 14:18:44 by rmulaudz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strrev(char *str)
{
    int index = 0;
	int total = 0;
	while(str[index] != '\0')
	{
		total++;
		index++;
	}

	char *s;
	int i = 0;

	while(i < total)
	{
		s[i] = str[total-1];
		total--;
		i++;
	}
    
    return s;    
}
