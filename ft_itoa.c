/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 22:17:17 by marvin            #+#    #+#             */
/*   Updated: 2026/02/03 22:17:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_itoa(int n)
{
    long nb = n;
    int len = (nb <= 0);
    char *res;
    long tmp = nb;

    while (tmp)
    {
        tmp /= 10;
        len++;
    }
    res = ft_calloc(len + 1, sizeof(char));
    if (!res)
        return NULL;
    if (nb < 0)
    {
        res[0] = '-';
        nb = -nb;
    }
    while (len-- && nb)
    {
        res[len] = nb % 10 + '0';
        nb /= 10;
    }
    return res;
}