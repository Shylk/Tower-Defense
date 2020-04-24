/*
** EPITECH PROJECT, 2020
** path_1_4
** File description:
** path handling for monsters
*/

#include "include/my.h"

void part_11_path_lvl1(dfd_t *dfd)
{
    if (dfd->lvl_1->current->pos_mob.x <= 500 &&
        dfd->lvl_1->current->pos_mob.x > 450) {
        dfd->lvl_1->current->pos_mob.x -=
            (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.y +=
            (0.5 * ((dfd->lvl_1->current->mob - 0.5) / 2));
    }
    if (dfd->lvl_1->current->pos_mob.x <= 450 &&
        dfd->lvl_1->current->pos_mob.x > 400) {
        dfd->lvl_1->current->pos_mob.x -=
            (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.y +=
            (0.8 * ((dfd->lvl_1->current->mob - 0.5) / 2));
    }
    if (dfd->lvl_1->current->pos_mob.x <= 400)
        dfd->lvl_1->current->path = 15;
}

void part_12_path_lvl1(dfd_t *dfd)
{
    if (dfd->lvl_1->current->pos_mob.x >= 350)
            dfd->lvl_1->current->pos_mob.x -=
                (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
    if (dfd->lvl_1->current->pos_mob.x <= 350 &&
        dfd->lvl_1->current->pos_mob.x >= 250) {
            dfd->lvl_1->current->pos_mob.x -=
                (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
            dfd->lvl_1->current->pos_mob.y -=
                (1.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
    }
    if (dfd->lvl_1->current->pos_mob.x <= 250 &&
        dfd->lvl_1->current->pos_mob.x >= -200)
            dfd->lvl_1->current->pos_mob.x -=
                (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
    if (dfd->lvl_1->current->pos_mob.x <= -100 &&
        dfd->lvl_1->current->alive == 0) {
            dfd->hud->life -= 10 * (dfd->lvl_1->current->gold);
            dfd->lvl_1->current->gold = 0;
            dfd->lvl_1->current->alive = 1;
    }
}

void first_part_path_lvl1(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 0) {
        set_rect_1_path_lvl1(dfd);
        part_1_path_lvl1(dfd);
        part_2_path_lvl1(dfd);
    }
    part_3_path_lvl1(dfd);
    if (dfd->lvl_1->current->path == 2)
        part_4_path_lvl1(dfd);
    part_5_path_lvl1(dfd);
    if (dfd->lvl_1->current->path == 5) {
        dfd->lvl_1->current->pos_mob.y +=
            (0.8 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.x +=
            (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.x >= 750)
            dfd->lvl_1->current->path = 6;
    }
}

void second_part_path_lvl1(dfd_t *dfd)
{
    part_6_path_lvl1(dfd);
    if (dfd->lvl_1->current->path == 7) {
        dfd->lvl_1->current->pos_mob.y +=
            (0.8 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.x +=
            (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.x >= 1125)
            dfd->lvl_1->current->path = 8;
    }
    part_7_path_lvl1(dfd);
    part_8_path_lvl1(dfd);
    if (dfd->lvl_1->current->path == 11) {
        dfd->lvl_1->current->pos_mob.y +=
            (0.8 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.x -=
            (2.1 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.x <= 1000)
            dfd->lvl_1->current->path = 12;
    }
}
