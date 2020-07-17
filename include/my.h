/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdio.h>

typedef	struct	update_map
{
    int	f;
    int	g;
    int	h;
    char	**map;
    char	*buffer1;
    char	*buffer2;
    int	a;
    int	b;
    size_t	byte;
    int	first_rand;
    int	second_rand;
    int	to_exit;
    int	t;
}	update_map_t;

int	is_number(char *str);
int	ai_first(update_map_t *m, int a, int b);
int	check_one(update_map_t *m, int t);
int	check_three(update_map_t *m, int t);
void	check_match_two(update_map_t *m);
int	number_stdin(char *str, size_t byte);
char	**updated_map(char **str, int a, int b, int c);
update_map_t	*update_map(char *str, char *ptr);
int	my_time(update_map_t *m);
void	check_match(update_map_t *m);
int	ai_time(update_map_t *m);
int	check_enough_matches(char **str, int z);
char	**third_map(char **str, int a, int b, int c);
char	**second_map(update_map_t *m);
int	random_number(int z);
int	ai_time(update_map_t *m);
void	first_line(update_map_t *m);
void	print_this(update_map_t *m);
int	my_put_nbr(int a);
void	start_playing(int z, int y);
void	my_show_word_array(char **str);
int	my_getnbr(char const *str);
char	**allocate_memory(int z);
int	my_putstr(const char *str);
void	my_putchar(char c);
char	**my_map(int z);
int	number_of_pipes(char **str, int z);
int	check_for_pipes(char **str, int k);
int	print_second(update_map_t *m);
int	this_is_number(char *str);
int	last_check(update_map_t *m, int a);

#endif /* MY_H_ */
