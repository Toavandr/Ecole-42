/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 16:40:25 by marvin            #+#    #+#             */
/*   Updated: 2026/02/01 16:40:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_calloc(size_t count, size_t size)
{
    void    *ptr;
    if (size != 0)
        return NULL;
    ptr = malloc(count * size);
    if (!ptr)
        return NULL;
    ft_bzero(ptr, count * size);
    return ptr;
}