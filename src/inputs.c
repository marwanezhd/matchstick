/*
** EPITECH PROJECT, 2021
** inputs.c
** File description:
** desc
*/

#include "../include/my.h"

int check_imput(char *buffer)
{
    int i = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] >= 0 && buffer[i] <= '9')
            i++;
        else
            return (1);
    }
    return (0);
}

int *parse_imput(char *imput)
{
    int *res = malloc(sizeof(int) * 2);
    int i = 0;
    int j = 0;
    char *nb1 = malloc(sizeof(char) * 100);
    char *nb2 = malloc(sizeof(char) * 100);

    while (imput[i] != ' ' && (imput[i] >= '1' && imput[i] <= '9')) {
        nb1[j] = imput[i];
        j++;
        i++;
    }
    j = 0;
    i++;
    while (imput[i] != '\0' && (imput[i] >= '1' && imput[i] <= '9')) {
        nb2[j] = imput[i];
        j++;
        i++;
    }
    res[0] = atoi(nb1);
    res[1] = atoi(nb2);
    return (res);
}

char *imput_user(char *line)
{
    size_t len = 0;
    ssize_t read = 0;

    while (read != -1) {
        read = getline(&line, &len, stdin);
        break;
    }
    return (line);
}
