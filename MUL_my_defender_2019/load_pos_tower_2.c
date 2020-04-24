/*
** EPITECH PROJECT, 2020
** load
** File description:
** pos
*/

#include "include/my.h"

void load_pos_tower_5(dfd_t *dfd)
{
    if (dfd->event->x > 966 && dfd->event->x < 1084 && dfd->event->y > 622 &&
        dfd->event->y < 690 && dfd->lvl_1->display_fifth_tower == 0) {
        if (dfd->lvl_1->which_tower_to_display == 0) {
            dfd->lvl_1->actual->pos_tower.x = 946;
            dfd->lvl_1->actual->pos_tower.y = 520;
        }
        if (dfd->lvl_1->which_tower_to_display == 1) {
            dfd->lvl_1->actual->pos_tower.x = 940;
            dfd->lvl_1->actual->pos_tower.y = 518;
        }
        if (dfd->lvl_1->which_tower_to_display == 2) {
            dfd->lvl_1->actual->pos_tower.x = 944;
            dfd->lvl_1->actual->pos_tower.y = 527;
        }
        if (dfd->lvl_1->which_tower_to_display == 3) {
            dfd->lvl_1->actual->pos_tower.x = 932;
            dfd->lvl_1->actual->pos_tower.y = 518;
        }
        dfd->lvl_1->display_fifth_tower = 1;
    }
}

void load_pos_tower_6(dfd_t *dfd)
{
    if (dfd->event->x > 1381 && dfd->event->x < 1516 && dfd->event->y > 622 &&
        dfd->event->y < 690 && dfd->lvl_1->display_sixth_tower == 0) {
        if (dfd->lvl_1->which_tower_to_display == 0) {
            dfd->lvl_1->actual->pos_tower.x = 1370;
            dfd->lvl_1->actual->pos_tower.y = 520;
        }
        if (dfd->lvl_1->which_tower_to_display == 1) {
            dfd->lvl_1->actual->pos_tower.x = 1365;
            dfd->lvl_1->actual->pos_tower.y = 533;
        }
        if (dfd->lvl_1->which_tower_to_display == 2) {
            dfd->lvl_1->actual->pos_tower.x = 1368;
            dfd->lvl_1->actual->pos_tower.y = 537;
        }
        if (dfd->lvl_1->which_tower_to_display == 3) {
            dfd->lvl_1->actual->pos_tower.x = 1362;
            dfd->lvl_1->actual->pos_tower.y = 530;
        }
        dfd->lvl_1->display_sixth_tower = 1;
    }
}

void load_pos_tower_7(dfd_t *dfd)
{
    if (dfd->event->x > 804 && dfd->event->x < 944 && dfd->event->y > 956 &&
        dfd->event->y < 1003 && dfd->lvl_1->display_seventh_tower == 0) {
        if (dfd->lvl_1->which_tower_to_display == 0) {
            dfd->lvl_1->actual->pos_tower.x = 800;
            dfd->lvl_1->actual->pos_tower.y = 855;
        }
        if (dfd->lvl_1->which_tower_to_display == 1) {
            dfd->lvl_1->actual->pos_tower.x = 795;
            dfd->lvl_1->actual->pos_tower.y = 830;
        }
        if (dfd->lvl_1->which_tower_to_display == 2) {
            dfd->lvl_1->actual->pos_tower.x = 795;
            dfd->lvl_1->actual->pos_tower.y = 830;
        }
        if (dfd->lvl_1->which_tower_to_display == 3) {
            dfd->lvl_1->actual->pos_tower.x = 790;
            dfd->lvl_1->actual->pos_tower.y = 860;
        }
        dfd->lvl_1->display_seventh_tower = 1;
    }
}
