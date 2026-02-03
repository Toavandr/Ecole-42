/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 22:02:20 by marvin            #+#    #+#             */
/*   Updated: 2026/02/03 22:02:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *res;
    size_t i = 0;
    size_t j = 0;;

    if (!s1 || !s2)
        return NULL;
    res = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
    if (!res)
        return NULL;
    while (s1[i])
    {
        res[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        res[i + j] = s2[j];
        j++;
    }
    return res;
}