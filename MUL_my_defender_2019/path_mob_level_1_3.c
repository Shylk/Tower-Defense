/*
** EPITECH PROJECT, 2020
** path_1_3
** File description:
** path handling for monsters
*/

#include "include/my.h"

void part_6_path_lvl1(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 6) {
        if (dfd->lvl_1->current->pos_mob.x >= 750 &&
            dfd->lvl_1->current->pos_mob.x <= 900) {
            dfd->lvl_1->current->pos_mob.x +=
                (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
            dfd->lvl_1->current->pos_mob.y -=
                (0.15 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        }
        if (dfd->lvl_1->current->pos_mob.x >= 900 &&
            dfd->lvl_1->current->pos_mob.x <= 1150) {
            dfd->lvl_1->current->pos_mob.x +=
                (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
            dfd->lvl_1->current->pos_mob.y +=
                (0.15 * ((dfd->lvl_1->current->mob - 0.5) / 2));
            if (dfd->lvl_1->current->pos_mob.x >= 1050)
                dfd->lvl_1->current->path = 7;
        }
    }
}

void part_7_path_lvl1(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 8) {
        dfd->lvl_1->current->pos_mob.y +=
            (1.4 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.x +=
            (1.2 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.x >= 1190) {
            dfd->lvl_1->current->path = 9;
            set_rect_3_path_lvl1(dfd);
        }
    }
}

void part_8_path_lvl1(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 9) {
        dfd->lvl_1->current->pos_mob.y +=
            (2 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.y >= 670)
            dfd->lvl_1->current->path = 10;
    }
    if (dfd->lvl_1->current->path == 10) {
        dfd->lvl_1->current->pos_mob.y +=
            (1.4 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.x -=
            (1.2 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.x <= 1140)
            dfd->lvl_1->current->path = 11;
    }
}

void part_9_path_lvl1(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 12) {
        if (dfd->lvl_1->current->pos_mob.x >= 800 &&
            dfd->lvl_1->current->pos_mob.x < 1000) {
            dfd->lvl_1->current->pos_mob.x -=
                (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
            dfd->lvl_1->current->pos_mob.y -=
                (0.15 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        }
        if (dfd->lvl_1->current->pos_mob.x >= 630 &&
            dfd->lvl_1->current->pos_mob.x <= 800) {
            dfd->lvl_1->current->pos_mob.x -=
                (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
            dfd->lvl_1->current->pos_mob.y +=
                (0.15 * ((dfd->lvl_1->current->mob - 0.5) / 2));
            if (dfd->lvl_1->current->pos_mob.x <= 630)
                dfd->lvl_1->current->path = 13;
        }
    }
}

void part_10_path_lvl1(dfd_t *dfd)
{
    if (dfd->lvl_1->current->pos_mob.x <= 630 &&
        dfd->lvl_1->current->pos_mob.x > 580) {
        dfd->lvl_1->current->pos_mob.x -=
            (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.y -=
            (1.5 * ((dfd->lvl_1->current->mob - 0.5) / 2));
    }
    if (dfd->lvl_1->current->pos_mob.x <= 580 &&
        dfd->lvl_1->current->pos_mob.x > 530) {
        dfd->lvl_1->current->pos_mob.x -=
            (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.y -=
            (1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
    }
    if (dfd->lvl_1->current->pos_mob.x <= 530 &&
        dfd->lvl_1->current->pos_mob.x > 500)
        dfd->lvl_1->current->pos_mob.x -=
            (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
}
