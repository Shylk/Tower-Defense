/*
** EPITECH PROJECT, 2020
** load
** File description:
** tower
*/

#include "include/my.h"

void load_pos_tower_lv3_5(dfd_t *dfd)
{
    if (dfd->event->x > 1205 && dfd->event->x < 1325 && dfd->event->y > 590 &&
        dfd->event->y < 663 && dfd->lvl_1->display_fifth_tower == 0) {
        if (dfd->lvl_1->which_tower_to_display == 0) {
            dfd->lvl_1->actual->pos_tower.x = 1195;
            dfd->lvl_1->actual->pos_tower.y = 490;
        }
        if (dfd->lvl_1->which_tower_to_display == 1) {
            dfd->lvl_1->actual->pos_tower.x = 1185;
            dfd->lvl_1->actual->pos_tower.y = 475;
        }
        if (dfd->lvl_1->which_tower_to_display == 2) {
            dfd->lvl_1->actual->pos_tower.x = 1185;
            dfd->lvl_1->actual->pos_tower.y = 475;
        }
        if (dfd->lvl_1->which_tower_to_display == 3) {
            dfd->lvl_1->actual->pos_tower.x = 1180;
            dfd->lvl_1->actual->pos_tower.y = 480;
        }
        dfd->lvl_1->display_fifth_tower = 1;
    }
}

void load_pos_tower_lv3_6(dfd_t *dfd)
{
    if (dfd->event->x > 1561 && dfd->event->x < 1708 && dfd->event->y > 601 &&
        dfd->event->y < 661 && dfd->lvl_1->display_sixth_tower == 0) {
        if (dfd->lvl_1->which_tower_to_display == 0) {
            dfd->lvl_1->actual->pos_tower.x = 1561;
            dfd->lvl_1->actual->pos_tower.y = 501;
        }
        if (dfd->lvl_1->which_tower_to_display == 1) {
            dfd->lvl_1->actual->pos_tower.x = 1561;
            dfd->lvl_1->actual->pos_tower.y = 475;
        }
        if (dfd->lvl_1->which_tower_to_display == 2) {
            dfd->lvl_1->actual->pos_tower.x = 1561;
            dfd->lvl_1->actual->pos_tower.y = 475;
        }
        if (dfd->lvl_1->which_tower_to_display == 3) {
            dfd->lvl_1->actual->pos_tower.x = 1532;
            dfd->lvl_1->actual->pos_tower.y = 480;
        }
        dfd->lvl_1->display_sixth_tower = 1;
    }
}

void load_pos_tower_lv3_7(dfd_t *dfd)
{
    if (dfd->event->x > 221 && dfd->event->x < 367 && dfd->event->y > 982 &&
        dfd->event->y < 1048 && dfd->lvl_1->display_seventh_tower == 0) {
        if (dfd->lvl_1->which_tower_to_display == 0) {
            dfd->lvl_1->actual->pos_tower.x = 221;
            dfd->lvl_1->actual->pos_tower.y = 890;
        }
        if (dfd->lvl_1->which_tower_to_display == 1) {
            dfd->lvl_1->actual->pos_tower.x = 221;
            dfd->lvl_1->actual->pos_tower.y = 890;
        }
        if (dfd->lvl_1->which_tower_to_display == 2) {
            dfd->lvl_1->actual->pos_tower.x = 221;
            dfd->lvl_1->actual->pos_tower.y = 890;
        }
        if (dfd->lvl_1->which_tower_to_display == 3) {
            dfd->lvl_1->actual->pos_tower.x = 215;
            dfd->lvl_1->actual->pos_tower.y = 890;
        }
        dfd->lvl_1->display_seventh_tower = 1;
    }
}
