/*
** EPITECH PROJECT, 2021
** matchstick.c
** File description:
** desc
*/

#include "../include/my.h"

int matchstick(char **tab, int line, int max_stick, int line_tab)
{
    int *arg = malloc(sizeof(int) * 2);
    char *imput = malloc(sizeof(char) * 100);
    int turn = 0;
    int res = - 1;
    int save_max_stick = max_stick;
    int x_max = - 1;
    
    while (42) {
        my_putstr("Your turn:\n");
        imput = imput_user(imput);
        if (check_imput(imput) == 1)
            my_putstr("imput invalide\n");
        my_putstr("Line:"); 
        my_putnbr(arg[0] + 1);
        my_putchar('\n');
        if (check_imput(imput) == 0) {
            arg = parse_imput(imput);
            if (max_stick == - 1)
                max_stick = arg[1];
            if (x_max == - 1)
                x_max = arg[0];
            if (turn == 1) {
                tab = ia_turn(line, tab, arg[0], save_max_stick, arg[1]);
                turn = 0;
            }
            if (turn == 0) {
                res = game_management(line, tab, arg[0], save_max_stick, arg[1]);
                turn = 1;
            }
        }
        if (res == 0) {
            tab[arg[0]] = change_line(tab[arg[0]], arg[1], save_max_stick);
            print_tab(tab);
        }
    }
    free (arg);
    free(imput);
}
