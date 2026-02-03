/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 22:18:52 by marvin            #+#    #+#             */
/*   Updated: 2026/02/03 22:18:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *res;
    size_t i = 0;

    if (!s || !f)
        return NULL;
    res = ft_calloc(ft_strlen(s) + 1, sizeof(char));
    if (!res)
        return NULL;
    while (s[i])
    {
        res[i] = f(i, s[i]);
        i++;
    }
    return res;
}