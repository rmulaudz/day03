/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmulaudz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 11:59:11 by rmulaudz          #+#    #+#             */
/*   Updated: 2020/06/21 12:04:47 by rmulaudz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	int divResult;
	int modResult;

	divResult = a / b;
	modResult = a % b;

	*div = divResult;
	*mod = modResult;
}

