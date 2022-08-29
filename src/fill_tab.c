/*
** EPITECH PROJECT, 2021
** fill_tab.c
** File description:
** desc
*/

#include "../include/my.h"

char **fill_tab(char **tab, int size)
{
    int x = 0;
    int y = 0;
    int y_max = (size * 2) + 1;
    int x_max = size + 2;
    int cpy_size = size;
    int nb_stick = 1;
    
    while (y != y_max) {
        tab[x][y] = '*';
        y++;
    }
    y = 0;
    x++;
    while (x != x_max && cpy_size > 0) {
        tab[x][y] = '*';
        y++;
        tab[x] = set_spaces(tab[x], ' ', cpy_size - 1, y);
        y = y + cpy_size - 1;
        tab[x] = set_stick(tab[x], '|', nb_stick, y);
        y = y + nb_stick;
        tab[x] = set_spaces(tab[x], ' ', cpy_size - 1, y);
        y = y + cpy_size - 1;
        tab[x][y] = '*';
        x++;
        y = 0;
        cpy_size--;
        nb_stick = nb_stick + 2;
    }
    while (y != y_max) {
        tab[x_max - 1][y] = '*';
        y++;
    }
    print_tab(tab);
    return (tab);
}
