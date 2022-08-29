/*
** EPITECH PROJECT, 2021
** ai.c
** File description:
** desc
*/

#include "../include/my.h"

char **ia_turn(int x_max, char **tab, int x, int max_stick, int stick)
{
    srand(time(NULL));
    x = 1 + rand() % (x_max);
    stick = 1 + rand () % (max_stick);
    
    while (count_s(tab[x], stick, max_stick) < stick)
        stick = 1 + rand () % (max_stick);
    return (tab);
}
