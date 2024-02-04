/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   word_match.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxencefournier <maxencefournier@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:19:18 by maxencefour       #+#    #+#             */
/*   Updated: 2024/02/01 20:13:38 by maxencefour      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
void    ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}


int main(int argc, char **argv)
{
    if(argc == 3)
    {
       int i = 0;
       int j = 0;
       while(argv[2][j])
       {
            if(argv[2][j++] == argv[1][i])
                {
                    i++;
                }
       }
       if(!(argv[1][i]))
       {
        ft_putstr(argv[1]);
       }
    }
    write(1, "\n", 1);
    return (0);
}