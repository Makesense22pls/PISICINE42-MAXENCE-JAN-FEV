/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new aff_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:26:49 by mafourni          #+#    #+#             */
/*   Updated: 2024/01/12 10:30:13 by mafourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	if (argc !=2)
		write(1,"a",1);
	else
		{
			int i;
			i =0;
			while(argv[1][i])
				{
					if (argv[1][i] == 'a')
						{
							write(1, "a",1);
							break;
						}
					i++;
				}
		}
	write(1, "\n", 1);
	return(0);
}