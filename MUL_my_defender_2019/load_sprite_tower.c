/*
** EPITECH PROJECT, 2020
** load
** File description:
** sprite
*/

#include "include/my.h"

void load_tower_2(dfd_t *dfd)
{
    if (dfd->lvl_1->which_tower_to_display == 0) {
        dfd->lvl_1->actual->txtu_tower = sfTexture_createFromFile
            ("sprite/bow1.png", NULL);
        dfd->lvl->money -= 100;
        sfMusic_stop(dfd->music->build);
        sfMusic_play(dfd->music->build);
    }
    if (dfd->lvl_1->which_tower_to_display == 1) {
        dfd->lvl_1->actual->txtu_tower = sfTexture_createFromFile
            ("sprite/magic1.png", NULL);
        dfd->lvl->money -= 170;
        sfMusic_stop(dfd->music->build);
        sfMusic_play(dfd->music->build);
    }
}

void load_tower(dfd_t *dfd)
{
    load_tower_2(dfd);
    if (dfd->lvl_1->which_tower_to_display == 2) {
        dfd->lvl_1->actual->txtu_tower = sfTexture_createFromFile
            ("sprite/attack_stone.png", NULL);
        dfd->lvl->money -= 220;
        sfMusic_stop(dfd->music->build);
        sfMusic_play(dfd->music->build);
    }
    if (dfd->lvl_1->which_tower_to_display == 3) {
        dfd->lvl_1->actual->txtu_tower = sfTexture_createFromFile
            ("sprite/thief1.png", NULL);
        dfd->lvl->money -= 350;
        sfMusic_stop(dfd->music->build);
        sfMusic_play(dfd->music->build);
    }
    dfd->lvl_1->actual->which_tower = dfd->lvl_1->which_tower_to_display;
}

