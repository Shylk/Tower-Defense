/*
** EPITECH PROJECT, 2020
** move path
** File description:
** lvl 3
*/

#include "include/my.h"

void lvl_3_path_11(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 11) {
        dfd->lvl_1->current->pos_mob.y -=
            (1.7 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.y <= -70 &&
            dfd->lvl_1->current->alive == 0) {
            dfd->hud->life -= 10;
            dfd->lvl_1->current->gold = 0;
            dfd->lvl_1->current->alive = 1;
        }
    }
}

void lvl_3_path_2_and_3(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 2) {
        dfd->lvl_1->current->pos_mob.y -=
            (0.8 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.x -=
            (1.6 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.x <= 130)
            dfd->lvl_1->current->path = 3;
    }
    if (dfd->lvl_1->current->path == 3) {
        dfd->lvl_1->current->pos_mob.x +=
            (0.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.y -=
            (1.5 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.y <= 554)
            dfd->lvl_1->current->path = 4;
    }
}

void lvl_3_path_1(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 1) {
        dfd->lvl_1->current->pos_mob.y -=
            (0.8 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.x -=
            (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.x <= 2664 &&
            dfd->lvl_1->current->pos_mob.y <= 865)
            dfd->lvl_1->current->path = 2;
    }
}

void lvl_3_path_0(dfd_t *dfd, int x)
{
    if (dfd->lvl_1->current->path == 0) {
        if (dfd->lvl_1->current->pos_mob.x >= 1500) {
            dfd->lvl_1->current->pos_mob.x = 449;
            dfd->lvl_1->current->pos_mob.y = 1068 + x;
        }
        sfSprite_setTextureRect
            (dfd->lvl_1->current->spr_mob, dfd->lvl_1->current->rect_mob);
        if (dfd->lvl_1->current->pos_mob.x >= 400 &&
            dfd->lvl_1->current->pos_mob.x < 500) {
            dfd->lvl_1->current->pos_mob.y -=
                (2 * ((dfd->lvl_1->current->mob - 0.5) / 2));
            if (dfd->lvl_1->current->pos_mob.y <= 914)
                dfd->lvl_1->current->path = 1;
        }
    }
}

void move_path_mob_lvl_3(dfd_t *dfd)
{
    static int x = 100;
    x += 100;
    lvl_3_path_0(dfd, x);
    lvl_3_path_1(dfd);
    lvl_3_path_2_and_3(dfd);
    lvl_3_path_4(dfd);
    lvl_3_path_5_and_6(dfd);
    lvl_3_path_7_and_8(dfd);
    lvl_3_path_9_and_10(dfd);
    lvl_3_path_11(dfd);
    dfd->lvl->remaining == 0 ? x = 0 : 0;
    sfSprite_setPosition
        (dfd->lvl_1->current->spr_mob, dfd->lvl_1->current->pos_mob);
}
