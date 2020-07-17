/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** third_file
*/

#include "my.h"

void	check_line(update_map_t *m)
{
    if (m->b < 0)
        my_putstr("Error: invalid input (positive number expected)\n");
    else if (this_is_number(m->buffer1) == 0 || m->b < 0)
        my_putstr("Error: invalid input (positive number expected)\n");
    else
        my_putstr("Error: this line is out of range\n");
}

int	my_time(update_map_t *m)
{
    int	t;
    int	i;

    my_putstr("Line: ");
    m->b = number_stdin(m->buffer1, m->byte);
    if (m->b == 84) {
        return (0);
    }
    if (m->b < 0 || this_is_number(m->buffer1) == 0 || \
    (m->b == 0 || m->b > m->f)) {
        check_line(m);
        my_time(m);
    } else {
        check_three(m, t);
    }
}

int	check_three(update_map_t *m, int t)
{
    t = check_enough_matches(m->map, m->b);
    my_putstr("Matches: ");
    m->a = number_stdin(m->buffer2, m->byte);
    if (m->a == 84) {
        return (0);
    }
    if (m->a == 0 || m->a > m->g || t < m->a || \
    this_is_number(m->buffer2) == 0 || m->a < 0) {
        check_match(m);
        my_time(m);
    } else {
        check_one(m, t);
    }
}

int	check_one(update_map_t *m, int t)
{
    my_putstr("Player removed ");
    my_put_nbr(m->a);
    my_putstr(" match(es) from line ");
    my_put_nbr(m->b);
    my_putchar('\n');
    my_show_word_array(updated_map(m->map, m->b, m->f, m->a));
    if (check_for_pipes(m->map, m->f) == -1) {
        my_putstr("You lost, too bad...\n");
        m->to_exit = 2;
        return (0);
    } else {
        ai_time(m);
    }
}

void	check_match(update_map_t *m)
{
    if (m->a > m->g) {
        my_putstr("Error: you cannot remove more than ");
        my_put_nbr(m->g);
        my_putstr(" matches per turn\n");
    } else if ((this_is_number(m->buffer2) == 0 || m->a < 0) || m->a == 0)
        check_match_two(m);
    else
        my_putstr("Error: not enough matches on this line\n");
}
