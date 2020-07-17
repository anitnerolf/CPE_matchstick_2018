/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** is_number
*/

#include "my.h"

int	last_check(update_map_t *m, int a)
{
    my_show_word_array(m->map);
    my_putstr("\nYour turn:\n");
    my_time(m);
}

int	is_number(char *str)
{
    int	i = 0;

    while (str[i] != '\0') {
        if (str[i] < 48 || str[i] > 57)
            return (1);
        i++;
    }
    return (0);
}
