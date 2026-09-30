/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralkhrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 14:31:48 by ralkhrai          #+#    #+#             */
/*   Updated: 2026/09/27 17:03:10 by ralkhrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	unsigned long	i;
	unsigned long	n;

	i = ft_strlen(s);
	n = i;
	while (n--)
	{
		if (s[i] == (char) c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

// C program to illustrate
// the strrchr() function
/*#include <stdio.h>
#include <string.h>

int main()
{
    // initializing string
    char *str = "";

    // character to be searched
    char chr = '\0';

    // Storing pointer returned by
    char* ptr =strrchr(str, chr);

    // getting the position of the character
    if (ptr) {
        printf("Last occurrence of %c in %s is at index %ld",
               chr, str, ptr - str);
    }
    // condition for character not present
    else {
        printf("%c is not present in %s ", chr, str);
    }
    return 0;
}*/
