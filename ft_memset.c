/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehejun <jaehejun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:32:36 by jaehejun          #+#    #+#             */
/*   Updated: 2023/03/18 21:22:14 by jaehejun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *b, int c, size_t n)
{
	unsigned char	*dest;

	dest = (unsigned char *)b;
	while (n-- > 0)
		*dest++ = (unsigned char)c;
	return (b);
}

#include<string.h> // #include<memory.h> 도 괜찮습니다.
#include<stdio.h>
int main(void)
{
    char arr1[] = "blockdmask blog";
    memset(arr1, 97, 5 * sizeof(char));
    printf("%s\n", arr1);
    return 0;
}