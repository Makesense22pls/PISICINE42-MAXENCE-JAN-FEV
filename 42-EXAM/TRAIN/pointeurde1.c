/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointeurde1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxencefournier <maxencefournier@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 20:55:44 by maxencefour       #+#    #+#             */
/*   Updated: 2024/02/01 21:01:30 by maxencefour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int p(*ptr, nb)
// {
//     *ptr += nb;
// }
// int main()
// {
//     int *ptr = 1;
//     int nb = 2;
//     printf("%i\n"p(*ptr, 2));
// }
#include <stdio.h>

// void p(int *ptr, int nb)
// {
//     *ptr += 1;
// }

// int main()
// {
//     int value = 1;
//     int *ptr = &value;
//     int nb = 2;
    
//     p(ptr, nb);

//     printf("%i\n", *ptr);

//     return 0;
// }
void p(int *ptr)
{
    *ptr += 1;  // Ajoute 1 à la valeur pointée par ptr
}

int main()
{
    int value = 1;
    int *ptr = &value;
    
    p(ptr);

    // Maintenant, la valeur pointée par ptr est 2 (1 + 1)
    printf("%i\n", *ptr);

    return 0;
}
