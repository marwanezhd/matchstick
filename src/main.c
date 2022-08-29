/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** desc
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    char **tab = init_tab(atoi(av[1]));
    if (ac != 3) {
        write(2, "error arg\n", 11);
        return (84);
    }
    tab = fill_tab(tab, atoi(av[1]));
    matchstick(tab, atoi(av[1]), atoi(av[2]), atoi(av[1]) + 2);    
    free(tab);
    return (0);
}
