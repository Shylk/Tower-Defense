/*
** EPITECH PROJECT, 2020
** move path
** File description:
** lvl 2
*/

#include "include/my.h"

void path_3(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 3) {
        if (dfd->lvl_1->current->mob == 3) {
            sfSprite_setTexture
                (dfd->lvl_1->current->spr_mob, dfd->lvl_1->mob_1_r, sfTrue);
            sfSprite_setTextureRect
                (dfd->lvl_1->current->spr_mob, dfd->lvl_1->current->rect_mob);
        }
        path_3_2(dfd);
        dfd->lvl_1->current->pos_mob.y +=
            (2 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.y >= 430)
            dfd->lvl_1->current->path = 4;
    }
}

void path_1_and_2(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 1) {
        dfd->lvl_1->current->pos_mob.y +=
            (0.8 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.x -=
            (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.x <= 675)
            dfd->lvl_1->current->path = 2;
    }
    if (dfd->lvl_1->current->path == 2) {
        dfd->lvl_1->current->pos_mob.y +=
            (1.4 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.x -=
            (1.2 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.x <= 610) {
            dfd->lvl_1->current->path = 3;
            dfd->lvl_1->current->pos_mob.x = 630;
        }
    }
}

void path_0_2(dfd_t *dfd)
{
    if (dfd->lvl_1->current->pos_mob.x >= 900 &&
        dfd->lvl_1->current->pos_mob.x < 1230) {
        dfd->lvl_1->current->pos_mob.x -=
            (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.y -=
            (0.15 * ((dfd->lvl_1->current->mob - 0.5) / 2));
    }
    if (dfd->lvl_1->current->pos_mob.x >= 750 &&
        dfd->lvl_1->current->pos_mob.x <= 900) {
        dfd->lvl_1->current->pos_mob.x -=
            (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.y +=
            (0.15 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.x <= 750)
            dfd->lvl_1->current->path = 1;
    }
}

void path_0(dfd_t *dfd)
{
    if (dfd->lvl_1->current->pos_mob.x >= 1700)
        dfd->lvl_1->current->pos_mob.y = 200;
    sfSprite_setTextureRect
        (dfd->lvl_1->current->spr_mob, dfd->lvl_1->current->rect_mob);
    if (dfd->lvl_1->current->pos_mob.x >= 1500 &&
        dfd->lvl_1->current->pos_mob.x < 4000) {
        dfd->lvl_1->current->pos_mob.x -=
            (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.y -=
            (0.15 * ((dfd->lvl_1->current->mob - 0.5) / 2));
    }
    if (dfd->lvl_1->current->pos_mob.x >= 1230 &&
        dfd->lvl_1->current->pos_mob.x <= 1500) {
        dfd->lvl_1->current->pos_mob.x -=
            (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.y +=
            (0.15 * ((dfd->lvl_1->current->mob - 0.5) / 2));
    }
    path_0_2(dfd);
}

void move_path_mob_lvl_2(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 0)
        path_0(dfd);
    path_1_and_2(dfd);
    path_3(dfd);
    path_4_and_5(dfd);
    path_6(dfd);
    path_7(dfd);
    path_8(dfd);
    path_9(dfd);
    path_10(dfd);
    path_11(dfd);
    sfSprite_setPosition
        (dfd->lvl_1->current->spr_mob, dfd->lvl_1->current->pos_mob);
}
