/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019 make_int_a_string.c
** File description:
** make_int_a_string
*/

#include <stdlib.h>
#include <stdio.h>

char *my_revstr(char *str);

char *make_int_a_string(int my_int)
{
    char *my_string;
    int wait = 0;
    int i = 0;
    int temp = my_int;

    for (i; temp > 10; i++)
        temp /= 10;
    my_string = malloc(sizeof(char) * (i + 100));
    i = 0;
    for (i; my_int / 10 != 0; i++) {
        wait = my_int % 10;
        my_string[i] = wait + '0';
        my_int /= 10;
    }
    my_string[i] = my_int + '0';
    i++;
    my_string[i] = '\0';
    return (my_revstr(my_string));
}