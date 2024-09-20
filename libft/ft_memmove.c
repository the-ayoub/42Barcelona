/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:26:30 by aybelhaj          #+#    #+#             */
/*   Updated: 2024/09/20 19:00:32 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
        char      *local_src;
        char    *local_dest;
        size_t  i;

        local_src = (char*)src;
        local_dest = (char*)dest;
        if (local_src < local_dest)
        {
        	while (n--)
               		local_src[n] = local_dest[n];     
        }
        else
        {
        	i = 0;
        	while (i < n)
        	{
               		local_src[i] = local_dest[i];
        		i++;
        	}
        }
        return (dest);
}
int main (void)
{
  char *d = strdup("luccas");
  char r[] = "hola mundo";
  
  ft_memmove(r, d , 5);
  printf("resultado: %s\n", r);
  return(0);
}
