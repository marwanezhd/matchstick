/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** desc
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

int my_strlen(char const *str);
void my_putchar(char c);
int my_putstr(char const *str);
int my_putnbr(int nb);
int print_tab(char **tab);
int check_imput(char *buffer);
int *parse_imput(char *imput);
char *imput_user(char *line);
int check_line(int x_max, int x, char *buffer, int stick, int max_stick);
int game_management(int x_max, char **tab, int x, int max_stick, int stick);
int count_stick(char *buffer, int stick, int max_stick);
int count_s(char *buffer, int stick, int max_stick);
char *change_line(char *line, int stick, int max_stick);
char **ia_turn(int x_max, char **tab, int x, int max_stick, int stick);
int matchstick(char **tab, int line, int max_stick, int line_tab);
char **init_tab(int size);
char *set_stick(char *buffer, char c, int count, int i);
char *set_spaces(char *buffer, char c, int count, int i);
char **fill_tab(char **tab, int size);
