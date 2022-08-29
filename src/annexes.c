/*
** EPITECH PROJECT, 2021
** annexes.c
** File description:
** desc
*/

#include "../include/my.h"

char *set_stick(char *buffer, char c, int count, int i)
{
    if (count == 1) {
        buffer[i] = '|';
        return (buffer);
    }
    while (count != 0) {
        buffer[i] = '|';
        i++;
        count--;
    }
    return (buffer);
}

char *set_spaces(char *buffer, char c, int count, int i)
{
    while (count != 0) {
        buffer[i] = c;
        count--;
        i++;
    }
    return (buffer);
}
