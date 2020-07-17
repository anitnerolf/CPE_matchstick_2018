/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** first_file
*/

#include "my.h"

char	**allocate_memory(int line)
{
    char **map = malloc(sizeof(char *) * (line * 2 + 1) + 1);
    int i = 0;

    map[i] = malloc(sizeof(char *) * (line * 2 + 1) + 1);
    for (i = 0; i < line + 2; i++)
        map[i] = malloc(sizeof(char) * (line * 2 + 1) + 1);
    map[i] = NULL;
    return (map);
}

char	**my_map(int z)
{
    char **str = allocate_memory(z);
    int i = 1;
    int k = z * 2;

    for (i = 1; i < z + 1; i++) {
        for (int j = 0; j < k + 1; j++) {
            str[i][j] = ' ';
            str[0][j] = '*';
            str[z + 1][j] = '*';
        }
        str[i][0] = '*';
        str[i][z * 2] = '*';
    }
    for (int a = 1, i = 1; a <= z; i++, a++) {
        for (int y = (z - i + 1) ; y < (z + i); y++) {
            str[i][y] = '|';
        }
    }
    return (str);
}

update_map_t	*update_map(char *str, char *ptr)
{
    update_map_t	*m = malloc(sizeof(update_map_t));

    m->byte = 1024;
    m->f = my_getnbr(str);
    m->g = my_getnbr(ptr);
    m->map = my_map(m->f);
    m->buffer1 = malloc(sizeof(char *) * (m->byte + 1));
    m->buffer2 = malloc(sizeof(char *) * (m->byte + 1));
    m->to_exit = 0;
    return (m);
}

void	my_show_word_array(char **str)
{
    int	i = 0;

    while (str[i]) {
        my_putstr(str[i]);
        my_putchar('\n');
        i++;
    }
}

int	ai_first(update_map_t *m, int a, int b)
{
    my_putstr("\nAI's turn...\nAI removed ");
    my_put_nbr(b);
    my_putstr(" match(es) from line ");
    my_put_nbr(a);
    my_putchar('\n');
    my_show_word_array(updated_map(m->map, a, m->f, b));
    if (check_for_pipes(m->map, m->f) == -1) {
        my_putstr("I lost... snif... but I'll get you next time!!\n");
        m->to_exit = 1;
        return (0);
    } else {
        my_putstr("\nYour turn:\n");
        my_time(m);
    }
}
