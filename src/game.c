/*
** EPITECH PROJECT, 2021
** game.c
** File description:
** desc
*/

#include "../include/my.h"

int check_line(int x_max, int x, char *buffer, int stick, int max_stick)
{
    int y = 0;
    int count = 0;
    
    if (x > x_max || x <= 0)
        return (2);
    while (buffer[y] != '\0') {
        if (buffer[y] == '|')
            count++;
        y++;
    }
    if (count < stick) {
        my_putstr("Matches:");
        my_putnbr(count);
        my_putchar('\n');
        return (1);
    }
    my_putstr("Matches:");
    my_putnbr(count);
    my_putchar('\n');
    return (0);
}

int game_management(int x_max, char **tab, int x, int max_stick, int stick)
{
    int size_tab = x + 2;
    int y = 0;
    
    if (stick > max_stick) {
        my_putstr("Error: you cannot remove more than "); 
        my_putnbr(max_stick);
        my_putstr(" matches per turn\n");
        return (1);
    }
    if (check_line(x_max, x, tab[x], stick, max_stick) == 2) {
        my_putstr("Error: this line is out of range\n");
        return (2);
    }
    return (0);
}
