/*
** EPITECH PROJECT, 2020
** path_1_1
** File description:
** path handling for monsters
*/

#include "include/my.h"

void part_1_path_lvl1(dfd_t *dfd)
{
    if (dfd->lvl_1->current->pos_mob.y <= 80)
        dfd->lvl_1->current->pos_mob.y +=
            (0.15 * ((dfd->lvl_1->current->mob - 0.5) / 2));
    if (dfd->lvl_1->current->pos_mob.y >= 200)
        dfd->lvl_1->current->pos_mob.y -=
            (0.15 * ((dfd->lvl_1->current->mob - 0.5) / 2));
    if (dfd->lvl_1->current->pos_mob.x >= 1500) {
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
}

void part_2_path_lvl1(dfd_t *dfd)
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

void part_3_path_lvl1(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 1) {
        dfd->lvl_1->current->pos_mob.y +=
            (0.8 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.x -=
            (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.x <= 675)
            dfd->lvl_1->current->path = 2;
    }
}

void part_4_path_lvl1(dfd_t *dfd)
{
    dfd->lvl_1->current->pos_mob.y +=
        (1.4 * ((dfd->lvl_1->current->mob - 0.5) / 2));
    dfd->lvl_1->current->pos_mob.x -=
        (1.2 * ((dfd->lvl_1->current->mob - 0.5) / 2));
    if (dfd->lvl_1->current->pos_mob.x <= 610) {
        dfd->lvl_1->current->path = 3;
        set_rect_2_path_lvl1(dfd);
    }
}

void part_5_path_lvl1(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 3) {
        dfd->lvl_1->current->pos_mob.y +=
            (2 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.y >= 330)
            dfd->lvl_1->current->path = 4;
    }
    if (dfd->lvl_1->current->path == 4) {
        dfd->lvl_1->current->pos_mob.y +=
            (1.4 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.x +=
            (1.2 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.x >= 710)
            dfd->lvl_1->current->path = 5;
    }
}
