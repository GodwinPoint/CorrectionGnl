/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiche <bsiche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 04:26:23 by bsiche            #+#    #+#             */
/*   Updated: 2018/11/16 20:51:56 by bsiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int     main()
{
    char     *str;
    ft_putendl("Prompt");
    while(get_next_line(1, &str) != 0)
    {
        if (ft_strcmp(str, "exit") == 0)
            exit(0);
        ft_putstr("> ");
        ft_putendl(str);
    }
    return (0);
}
