/*
** EPITECH PROJECT, 2020
** path
** File description:
** mob level 2
*/

#include "include/my.h"

void path_8(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 8) {
        dfd->lvl_1->current->pos_mob.y +=
            (1.4 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.x +=
            (0.7 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.y >= 730) {
            if (rand() % 2 == 0)
                dfd->lvl_1->current->path = 9;
            else
                dfd->lvl_1->current->path = 10;
        }
    }
}

void path_7(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 7) {
        dfd->lvl_1->current->pos_mob.y +=
            (1.3 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.x +=
            (0.8 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.y <= 700 &&
            dfd->lvl_1->current->pos_mob.y >= 650)
            dfd->lvl_1->current->pos_mob.x -= 1;
        if (dfd->lvl_1->current->pos_mob.y >= 730)
            dfd->lvl_1->current->path = 8;
    }
}

void path_6(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 6) {
        if (dfd->lvl_1->current->pos_mob.x >= 750 &&
            dfd->lvl_1->current->pos_mob.x <= 900) {
            dfd->lvl_1->current->pos_mob.x +=
                (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
            dfd->lvl_1->current->pos_mob.y -=
                (0.15 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        }
        if (dfd->lvl_1->current->pos_mob.x >= 850 &&
            dfd->lvl_1->current->pos_mob.x <= 900) {
            dfd->lvl_1->current->pos_mob.x +=
                (0.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
            dfd->lvl_1->current->pos_mob.y +=
                (1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
            if (dfd->lvl_1->current->pos_mob.x >= 890)
                dfd->lvl_1->current->path = 7;
        }
    }
}

void path_4_and_5(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 4) {
        dfd->lvl_1->current->pos_mob.y +=
            (1.4 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.x +=
            (1.2 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.x >= 710)
            dfd->lvl_1->current->path = 5;
    }
    if (dfd->lvl_1->current->path == 5) {
        dfd->lvl_1->current->pos_mob.y +=
            (0.8 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.x +=
            (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.x >= 750)
            dfd->lvl_1->current->path = 6;
    }
}

void path_3_2(dfd_t *dfd)
{
    if (dfd->lvl_1->current->mob == 4) {
        sfSprite_setTexture
            (dfd->lvl_1->current->spr_mob, dfd->lvl_1->bat_r, sfTrue);
        sfSprite_setTextureRect
            (dfd->lvl_1->current->spr_mob, dfd->lvl_1->current->rect_mob);
    }
    if (dfd->lvl_1->current->mob == 2) {
        sfSprite_setTexture
            (dfd->lvl_1->current->spr_mob, dfd->lvl_1->yeti_r, sfTrue);
        sfSprite_setTextureRect
            (dfd->lvl_1->current->spr_mob, dfd->lvl_1->current->rect_mob);
    }
}
