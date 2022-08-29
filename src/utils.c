/*
** EPITECH PROJECT, 2021
** utils.c
** File description:
** desc
*/

#include "../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_strlen(char const *str)
{
    int i = 0;
    
    while (str[i] != '\0')
        i++;
    return (i);
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}

int print_tab(char **tab)
{
    int x = 0;
    
    while (tab[x] != NULL) {
        write(1, tab[x], my_strlen(tab[x]));
        write(1, "\n", 2);
        x++;
    }
    return (0);
}

int my_putnbr(int nb)
{
    int d = 0;

    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    if (nb > 9)
        my_putnbr(nb / 10);
    d = nb % 10 + 48;
    my_putchar(d);
    return (0);
}
