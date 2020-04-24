/*
** EPITECH PROJECT, 2020
** load
** File description:
** pos
*/

#include "include/my.h"

void load_pos_tower_1(dfd_t *dfd)
{
    if (dfd->event->x > 805 && dfd->event->x < 956 && dfd->event->y > 280 &&
        dfd->event->y < 343 && dfd->lvl_1->display_first_tower == 0) {
        if (dfd->lvl_1->which_tower_to_display == 0) {
            dfd->lvl_1->actual->pos_tower.x = 800;
            dfd->lvl_1->actual->pos_tower.y = 175;
        }
        if (dfd->lvl_1->which_tower_to_display == 1) {
            dfd->lvl_1->actual->pos_tower.x = 800;
            dfd->lvl_1->actual->pos_tower.y = 180;
        }
        if (dfd->lvl_1->which_tower_to_display == 2) {
            dfd->lvl_1->actual->pos_tower.x = 800;
            dfd->lvl_1->actual->pos_tower.y = 180;
        }
        if (dfd->lvl_1->which_tower_to_display == 3) {
            dfd->lvl_1->actual->pos_tower.x = 785;
            dfd->lvl_1->actual->pos_tower.y = 168;
        }
        dfd->lvl_1->display_first_tower = 1;
    }
}

void load_pos_tower_2(dfd_t *dfd)
{
    if (dfd->event->x > 1111 && dfd->event->x < 1245 && dfd->event->y > 280 &&
        dfd->event->y < 333 && dfd->lvl_1->display_second_tower == 0) {
        if (dfd->lvl_1->which_tower_to_display == 0) {
            dfd->lvl_1->actual->pos_tower.x = 1105;
            dfd->lvl_1->actual->pos_tower.y = 175;
        }
        if (dfd->lvl_1->which_tower_to_display == 1) {
            dfd->lvl_1->actual->pos_tower.x = 1095;
            dfd->lvl_1->actual->pos_tower.y = 175;
        }
        if (dfd->lvl_1->which_tower_to_display == 2) {
            dfd->lvl_1->actual->pos_tower.x = 1080;
            dfd->lvl_1->actual->pos_tower.y = 173;
        }
        if (dfd->lvl_1->which_tower_to_display == 3) {
            dfd->lvl_1->actual->pos_tower.x = 1085;
            dfd->lvl_1->actual->pos_tower.y = 173;
        }
        dfd->lvl_1->display_second_tower = 1;
    }
}

void load_pos_tower_3(dfd_t *dfd)
{
    if (dfd->event->x > 1408 && dfd->event->x < 1548 && dfd->event->y > 280 &&
        dfd->event->y < 333 && dfd->lvl_1->display_third_tower == 0) {
        if (dfd->lvl_1->which_tower_to_display == 0) {
            dfd->lvl_1->actual->pos_tower.x = 1400;
            dfd->lvl_1->actual->pos_tower.y = 175;
        }
        if (dfd->lvl_1->which_tower_to_display == 1) {
            dfd->lvl_1->actual->pos_tower.x = 1385;
            dfd->lvl_1->actual->pos_tower.y = 180;
        }
        if (dfd->lvl_1->which_tower_to_display == 2) {
            dfd->lvl_1->actual->pos_tower.x = 1395;
            dfd->lvl_1->actual->pos_tower.y = 180;
        }
        if (dfd->lvl_1->which_tower_to_display == 3) {
            dfd->lvl_1->actual->pos_tower.x = 1388;
            dfd->lvl_1->actual->pos_tower.y = 168;
        }
        dfd->lvl_1->display_third_tower = 1;
    }
}

void load_pos_tower_4(dfd_t *dfd)
{
    if (dfd->event->x > 652 && dfd->event->x < 796 && dfd->event->y > 622 &&
        dfd->event->y < 690 && dfd->lvl_1->display_fourth_tower == 0) {
        if (dfd->lvl_1->which_tower_to_display == 0) {
            dfd->lvl_1->actual->pos_tower.x = 650;
            dfd->lvl_1->actual->pos_tower.y = 520;
        }
        if (dfd->lvl_1->which_tower_to_display == 1) {
            dfd->lvl_1->actual->pos_tower.x = 642;
            dfd->lvl_1->actual->pos_tower.y = 518;
        }
        if (dfd->lvl_1->which_tower_to_display == 2) {
            dfd->lvl_1->actual->pos_tower.x = 647;
            dfd->lvl_1->actual->pos_tower.y = 527;
        }
        if (dfd->lvl_1->which_tower_to_display == 3) {
            dfd->lvl_1->actual->pos_tower.x = 636;
            dfd->lvl_1->actual->pos_tower.y = 518;
        }
        dfd->lvl_1->display_fourth_tower = 1;
    }
}

void load_pos_tower(dfd_t *dfd)
{
    load_pos_tower_1(dfd);
    load_pos_tower_2(dfd);
    load_pos_tower_3(dfd);
    load_pos_tower_4(dfd);
    load_pos_tower_5(dfd);
    load_pos_tower_6(dfd);
    load_pos_tower_7(dfd);
}
