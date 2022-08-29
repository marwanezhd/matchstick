/*
** EPITECH PROJECT, 2021
** memory.c
** File description:
** desc
*/

#include "../include/my.h"

char **init_tab(int size)
{
    char **tab = malloc(sizeof(char *) * (size + 2) + 1);
    int x = 0;
    int y = 0;
    int x_max = size + 2;
    int y_max = (size * 2) + 1;
    
    while (x < x_max) {
        y = 0;
        tab[x] = malloc(sizeof(char) * y_max);
        while (y != y_max) {
            tab[x][y] = 'X';
            y++;
        }
        tab[x][y] = '\0';
        x++;
    }
    tab[x] = NULL;
    return (tab);
}
