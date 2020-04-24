/*
** EPITECH PROJECT, 2020
** load
** File description:
** tower
*/

#include "include/my.h"

void load_pos_tower_lv3_1(dfd_t *dfd)
{
    if (dfd->event->x > 210 && dfd->event->x < 345 && dfd->event->y > 364 &&
        dfd->event->y < 426 && dfd->lvl_1->display_first_tower == 0) {
        if (dfd->lvl_1->which_tower_to_display == 0) {
            dfd->lvl_1->actual->pos_tower.x = 210;
            dfd->lvl_1->actual->pos_tower.y = 264;
        }
        if (dfd->lvl_1->which_tower_to_display == 1) {
            dfd->lvl_1->actual->pos_tower.x = 210;
            dfd->lvl_1->actual->pos_tower.y = 260;
        }
        if (dfd->lvl_1->which_tower_to_display == 2) {
            dfd->lvl_1->actual->pos_tower.x = 205;
            dfd->lvl_1->actual->pos_tower.y = 260;
        }
        if (dfd->lvl_1->which_tower_to_display == 3) {
            dfd->lvl_1->actual->pos_tower.x = 205;
            dfd->lvl_1->actual->pos_tower.y = 248;
        }
        dfd->lvl_1->display_first_tower = 1;
    }
}

void load_pos_tower_lv3_2(dfd_t *dfd)
{
    if (dfd->event->x > 720 && dfd->event->x < 857 && dfd->event->y > 318 &&
        dfd->event->y < 483 && dfd->lvl_1->display_second_tower == 0) {
        if (dfd->lvl_1->which_tower_to_display == 0) {
            dfd->lvl_1->actual->pos_tower.x = 720;
            dfd->lvl_1->actual->pos_tower.y = 218;
        }
        if (dfd->lvl_1->which_tower_to_display == 1) {
            dfd->lvl_1->actual->pos_tower.x = 720;
            dfd->lvl_1->actual->pos_tower.y = 218;
        }
        if (dfd->lvl_1->which_tower_to_display == 2) {
            dfd->lvl_1->actual->pos_tower.x = 720;
            dfd->lvl_1->actual->pos_tower.y = 218;
        }
        if (dfd->lvl_1->which_tower_to_display == 3) {
            dfd->lvl_1->actual->pos_tower.x = 710;
            dfd->lvl_1->actual->pos_tower.y = 200;
        }
        dfd->lvl_1->display_second_tower = 1;
    }
}

void load_pos_tower_lv3_3(dfd_t *dfd)
{
    if (dfd->event->x > 1188 && dfd->event->x < 1317 && dfd->event->y > 265 &&
        dfd->event->y < 324 && dfd->lvl_1->display_third_tower == 0) {
        if (dfd->lvl_1->which_tower_to_display == 0) {
            dfd->lvl_1->actual->pos_tower.x = 1188;
            dfd->lvl_1->actual->pos_tower.y = 165;
        }
        if (dfd->lvl_1->which_tower_to_display == 1) {
            dfd->lvl_1->actual->pos_tower.x = 1188;
            dfd->lvl_1->actual->pos_tower.y = 175;
        }
        if (dfd->lvl_1->which_tower_to_display == 2) {
            dfd->lvl_1->actual->pos_tower.x = 1178;
            dfd->lvl_1->actual->pos_tower.y = 175;
        }
        if (dfd->lvl_1->which_tower_to_display == 3) {
            dfd->lvl_1->actual->pos_tower.x = 1175;
            dfd->lvl_1->actual->pos_tower.y = 175;
        }
        dfd->lvl_1->display_third_tower = 1;
    }
}

void load_pos_tower_lv3_4(dfd_t *dfd)
{
    if (dfd->event->x > 275 && dfd->event->x < 426 && dfd->event->y > 674 &&
        dfd->event->y < 734 && dfd->lvl_1->display_fourth_tower == 0) {
        if (dfd->lvl_1->which_tower_to_display == 0) {
            dfd->lvl_1->actual->pos_tower.x = 275;
            dfd->lvl_1->actual->pos_tower.y = 574;
        }
        if (dfd->lvl_1->which_tower_to_display == 1) {
            dfd->lvl_1->actual->pos_tower.x = 275;
            dfd->lvl_1->actual->pos_tower.y = 550;
        }
        if (dfd->lvl_1->which_tower_to_display == 2) {
            dfd->lvl_1->actual->pos_tower.x = 275;
            dfd->lvl_1->actual->pos_tower.y = 550;
        }
        if (dfd->lvl_1->which_tower_to_display == 3) {
            dfd->lvl_1->actual->pos_tower.x = 270;
            dfd->lvl_1->actual->pos_tower.y = 555;
        }
        dfd->lvl_1->display_fourth_tower = 1;
    }
}

void load_pos_tower_lv3(dfd_t *dfd)
{
    load_pos_tower_lv3_1(dfd);
    load_pos_tower_lv3_2(dfd);
    load_pos_tower_lv3_3(dfd);
    load_pos_tower_lv3_4(dfd);
    load_pos_tower_lv3_5(dfd);
    load_pos_tower_lv3_6(dfd);
    load_pos_tower_lv3_7(dfd);
}
