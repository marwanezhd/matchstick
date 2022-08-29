/*
** EPITECH PROJECT, 2021
** lines.c
** File description:
** desc
*/

#include "../include/my.h"

int count_stick(char *buffer, int stick, int max_stick)
{
    int i = 0;
    int count = 0;
    
    while (buffer[i] != '\0') {
        if (buffer[i] == '|')
            count = count + 1;
        i++;
    }
    if (count < stick)
        return (1);
    return (0);
}

int count_s(char *buffer, int stick, int max_stick)
{
    int i = 0;
    int count = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] == '|')
            count = count + 1;
        i++;
    }
    return (count);
}

char *change_line(char *line, int stick, int max_stick)
{
    int i = 0;
    int count = stick;

    if (count_s(line, stick, max_stick) < stick) {
        my_putstr("Error: not enough matches on this line\n");
        return (line);
    }
    while (i != my_strlen(line) && count > 0) {
        if (line[i] == '|') {
            line[i] = ' ';
            count--;
        }
        i++;
    }
    return (line);
}
