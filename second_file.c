/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** second_file
*/

#include "my.h"

int	number_of_pipes(char **str, int z)
{
    int i = 0;
    int j = 0;
    int nb = 0;

    for (i = 0; i < z + 2; i++) {
        for (j = 0; j < z * 2 + 1; j++) {
            if (str[i][j] == '|')
                nb++;
        }
    }
    return (nb);
}

char	**updated_map(char **str, int a, int b, int c)
{
    int k = 0;
    int i = a;
    int j = b * 2 + 1;

    while (k < c) {
        if (str[i][j] == '|') {
            str[i][j] = ' ';
            k++;
        }
        j--;
    }
    return (str);
}

int	this_is_number(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] <= 57 && str[i] >= 48)
            return (1);
        i++;
    }
    return (0);
}

int	number_stdin(char *str, size_t nbr)
{
    int b = 0;

    b = getline(&str, &nbr, stdin);
    if (b == -1 || str == NULL) {
        return (84);
    } else
        return (my_getnbr(str));
}

void	check_match_two(update_map_t *m)
{
    if (this_is_number(m->buffer2) == 0 || m->a < 0)
        my_putstr("Error: invalid input (positive number expected)\n");
    else
        my_putstr("Error: you have to remove at least one match\n");
}
