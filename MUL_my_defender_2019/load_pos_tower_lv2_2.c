/*
** EPITECH PROJECT, 2020
** load
** File description:
** tower
*/

#include "include/my.h"

void load_pos_tower_lv2_5(dfd_t *dfd)
{
    if (dfd->event->x > 1113 && dfd->event->x < 1285 && dfd->event->y > 691 &&
        dfd->event->y < 762 && dfd->lvl_1->display_fifth_tower == 0) {
        if (dfd->lvl_1->which_tower_to_display == 0) {
            dfd->lvl_1->actual->pos_tower.x = 1116;
            dfd->lvl_1->actual->pos_tower.y = 580;
        }
        if (dfd->lvl_1->which_tower_to_display == 1) {
            dfd->lvl_1->actual->pos_tower.x = 1105;
            dfd->lvl_1->actual->pos_tower.y = 565;
        }
        if (dfd->lvl_1->which_tower_to_display == 2) {
            dfd->lvl_1->actual->pos_tower.x = 1105;
            dfd->lvl_1->actual->pos_tower.y = 570;
        }
        if (dfd->lvl_1->which_tower_to_display == 3) {
            dfd->lvl_1->actual->pos_tower.x = 1102;
            dfd->lvl_1->actual->pos_tower.y = 570;
        }
        dfd->lvl_1->display_fifth_tower = 1;
    }
}

void load_pos_tower_lv2_6(dfd_t *dfd)
{
    if (dfd->event->x > 1553 && dfd->event->x < 1705 && dfd->event->y > 683 &&
        dfd->event->y < 758 && dfd->lvl_1->display_sixth_tower == 0) {
        if (dfd->lvl_1->which_tower_to_display == 0) {
            dfd->lvl_1->actual->pos_tower.x = 1534;
            dfd->lvl_1->actual->pos_tower.y = 580;
        }
        if (dfd->lvl_1->which_tower_to_display == 1) {
            dfd->lvl_1->actual->pos_tower.x = 1525;
            dfd->lvl_1->actual->pos_tower.y = 570;
        }
        if (dfd->lvl_1->which_tower_to_display == 2) {
            dfd->lvl_1->actual->pos_tower.x = 1535;
            dfd->lvl_1->actual->pos_tower.y = 570;
        }
        if (dfd->lvl_1->which_tower_to_display == 3) {
            dfd->lvl_1->actual->pos_tower.x = 1532;
            dfd->lvl_1->actual->pos_tower.y = 570;
        }
        dfd->lvl_1->display_sixth_tower = 1;
    }
}

void load_pos_tower_lv2_7(dfd_t *dfd)
{
    if (dfd->event->x > 464 && dfd->event->x < 615 && dfd->event->y > 935 &&
        dfd->event->y < 991 && dfd->lvl_1->display_seventh_tower == 0) {
        if (dfd->lvl_1->which_tower_to_display == 0) {
            dfd->lvl_1->actual->pos_tower.x = 460;
            dfd->lvl_1->actual->pos_tower.y = 813;
        }
        if (dfd->lvl_1->which_tower_to_display == 1) {
            dfd->lvl_1->actual->pos_tower.x = 480;
            dfd->lvl_1->actual->pos_tower.y = 830;
        }
        if (dfd->lvl_1->which_tower_to_display == 2) {
            dfd->lvl_1->actual->pos_tower.x = 470;
            dfd->lvl_1->actual->pos_tower.y = 825;
        }
        if (dfd->lvl_1->which_tower_to_display == 3) {
            dfd->lvl_1->actual->pos_tower.x = 445;
            dfd->lvl_1->actual->pos_tower.y = 805;
        }
        dfd->lvl_1->display_seventh_tower = 1;
    }
}
