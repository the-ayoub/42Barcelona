/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:26:30 by aybelhaj          #+#    #+#             */
/*   Updated: 2024/09/17 13:59:35 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memmove(void *dest, const void *src, size_t n)
{
        const char      *local_src;
        char    *local_dest;
        size_t  i;

        local_src = (const char*)src;
        local_dest = (char*)dest;
        i = 0;
        if (local_src < local_dest)
        {
        	n--;
                src[n] = dest[n];     
        }
        else
        {
               while (local_src[i])
                        local_src[i] = local_dest[i];
                i++;
        }
        return (dest);
}
