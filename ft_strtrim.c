/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 22:18:09 by marvin            #+#    #+#             */
/*   Updated: 2026/02/03 22:18:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static int in_set(char c, char const *set)
{
    while (*set)
        if (c == *set++)
            return 1;
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start = 0;
    size_t end;

    if (!s1 || !set)
        return NULL;
    end = ft_strlen(s1);
    while (s1[start] && in_set(s1[start], set))
        start++;
    while (end > start && in_set(s1[end - 1], set))
        end--;
    return ft_substr(s1, start, end - start);
}
