/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** main
*/

#include "my.h"

int	check_enough_matches(char **str, int k)
{
    int nb = 0;
    int i = 0;

    while (str[k][i]) {
        if (str[k][i] == '|') {
            nb++;
        }
        i++;
    }
    return (nb);
}

int	check_for_pipes(char **str, int k)
{
    int z = number_of_pipes(str, k);
    int y;

    if (z == 0)
	return (-1);
    return (-2);
}

int	random_number(int x)
{
    int	y = 0;
    int	i = 0;

    while (i < x) {
        y = (random() % (x - 1 + 1)) + 1;
        if (y > x)
            random_number(x);
        else
            return (y);
        i++;
    }
}

int	ai_time(update_map_t *m)
{
    int	a = random_number(m->f);
    int	z = check_enough_matches(m->map, a);
    int	f = number_of_pipes(m->map, m->f);
    int b = random_number(f);

    if (b > z || b > m->g) {
        ai_time(m);
    } else {
        ai_first(m, a, b);
    }
}

int	main(int ac, char **av)
{
    update_map_t	*m = malloc(sizeof(update_map_t));
    int a = 0;

    if (ac != 3 || is_number(av[1]) == 1 || is_number(av[2]) == 1 || \
    my_getnbr(av[1]) > 99 || my_getnbr(av[1]) < 2 || \
    my_getnbr(av[2]) <= 0) {
        write(2, "NUMBER OF ARGUMENTS SHOULD BE 3!\n", 33);
        return (84);
    } else {
        m = update_map(av[1], av[2]);
        last_check(m, a);
        a = m->to_exit;
        return (a);
    }
}
