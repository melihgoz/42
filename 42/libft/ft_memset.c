/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megoz <megoz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:12:07 by megoz             #+#    #+#             */
/*   Updated: 2024/10/08 19:14:15 by megoz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> 
#include <string.h> 

void	*ft_memset(void *b, long c, size_t len)
{
    size_t	i;
    char	*str;

    str = (char *)b;
    i = 0;
    while (i < len)
    {
        str[i] = c;
		i++;
    }
	return b;
}

int main(void) 
{ 
    char str[50] = "GeeksForGeeks is for programming geeks."; 
    printf("\nBefore memset(): %s\n", str); 
  
    ft_memset(str + 13, __LONG_MAX__, 8); 
  
    printf("After memset():  %s", str); 
} 