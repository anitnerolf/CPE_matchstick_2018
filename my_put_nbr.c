/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2018
** File description:
** myputnbr
*/

#include "my.h"

int	my_put_nbr(int a)
{
    if (a < 0) {
        my_putchar('-');
        my_put_nbr(-a);
    } else if (a > 9) {
        my_put_nbr(a / 10);
        my_put_nbr(a % 10);
    } else {
        my_putchar(a + '0');
    }
    return (0);
}
