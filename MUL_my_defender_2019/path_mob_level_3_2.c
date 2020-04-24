/*
** EPITECH PROJECT, 2020
** path
** File description:
** mob level 3
*/

#include "include/my.h"

void lvl_3_path_9_and_10(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 9) {
        dfd->lvl_1->current->pos_mob.x +=
            (1.7 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.x >= 1380) {
            if (rand() % 2 == 0)
                dfd->lvl_1->current->path = 10;
            else
                dfd->lvl_1->current->path = 11;
        }
    }
    if (dfd->lvl_1->current->path == 10) {
        dfd->lvl_1->current->pos_mob.x +=
            (1.7 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.x >= 1745 &&
            dfd->lvl_1->current->alive == 0) {
            dfd->hud->life -= 10;
            dfd->lvl_1->current->gold = 0;
            dfd->lvl_1->current->alive = 1;
        }
    }
}

void lvl_3_path_7_and_8(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 7) {
        dfd->lvl_1->current->pos_mob.x +=
            (1.7 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.x >= 1000)
            dfd->lvl_1->current->path = 8;
    }
    if (dfd->lvl_1->current->path == 8) {
        dfd->lvl_1->current->pos_mob.x +=
            (0.3 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.y +=
            (1.7 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.y >= 745)
            dfd->lvl_1->current->path = 9;
    }
}

void lvl_3_path_5_and_6(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 5) {
        dfd->lvl_1->current->pos_mob.y -=
            (1.5 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.x +=
            (0.13 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.y <= 222)
            dfd->lvl_1->current->path = 6;
    }
    if (dfd->lvl_1->current->path == 6) {
        dfd->lvl_1->current->pos_mob.x +=
            (0.8 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.y -=
            (1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.x >= 500)
            dfd->lvl_1->current->path = 7;
    }
}

void lvl_3_path_4_2(dfd_t *dfd)
{
    if (dfd->lvl_1->current->mob == 3) {
        sfSprite_setTexture
            (dfd->lvl_1->current->spr_mob, dfd->lvl_1->mob_1_r, sfTrue);
        sfSprite_setTextureRect
            (dfd->lvl_1->current->spr_mob, dfd->lvl_1->current->rect_mob);
    }
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

void lvl_3_path_4(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 4) {
        lvl_3_path_4_2(dfd);
        dfd->lvl_1->current->pos_mob.y -=
            (0.4 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.x +=
            (1.2 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.x >= 450)
            dfd->lvl_1->current->path = 5;
    }
}
