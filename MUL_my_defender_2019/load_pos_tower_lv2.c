/*
** EPITECH PROJECT, 2020
** load pos
** File description:
** for tower lv2
*/

#include "include/my.h"

void load_pos_tower_lv2_1(dfd_t *dfd)
{
    if (dfd->event->x > 814 && dfd->event->x < 940 && dfd->event->y > 364 &&
        dfd->event->y < 414 && dfd->lvl_1->display_first_tower == 0) {
        if (dfd->lvl_1->which_tower_to_display == 0) {
            dfd->lvl_1->actual->pos_tower.x = 800;
            dfd->lvl_1->actual->pos_tower.y = 255;
        }
        if (dfd->lvl_1->which_tower_to_display == 1) {
            dfd->lvl_1->actual->pos_tower.x = 800;
            dfd->lvl_1->actual->pos_tower.y = 260;
        }
        if (dfd->lvl_1->which_tower_to_display == 2) {
            dfd->lvl_1->actual->pos_tower.x = 805;
            dfd->lvl_1->actual->pos_tower.y = 260;
        }
        if (dfd->lvl_1->which_tower_to_display == 3) {
            dfd->lvl_1->actual->pos_tower.x = 785;
            dfd->lvl_1->actual->pos_tower.y = 248;
        }
        dfd->lvl_1->display_first_tower = 1;
    }
}

void load_pos_tower_lv2_2(dfd_t *dfd)
{
    if (dfd->event->x > 1216 && dfd->event->x < 1358 && dfd->event->y > 365 &&
        dfd->event->y < 431 && dfd->lvl_1->display_second_tower == 0) {
        if (dfd->lvl_1->which_tower_to_display == 0) {
            dfd->lvl_1->actual->pos_tower.x = 1205;
            dfd->lvl_1->actual->pos_tower.y = 255;
        }
        if (dfd->lvl_1->which_tower_to_display == 1) {
            dfd->lvl_1->actual->pos_tower.x = 1200;
            dfd->lvl_1->actual->pos_tower.y = 265;
        }
        if (dfd->lvl_1->which_tower_to_display == 2) {
            dfd->lvl_1->actual->pos_tower.x = 1200;
            dfd->lvl_1->actual->pos_tower.y = 260;
        }
        if (dfd->lvl_1->which_tower_to_display == 3) {
            dfd->lvl_1->actual->pos_tower.x = 1190;
            dfd->lvl_1->actual->pos_tower.y = 255;
        }
        dfd->lvl_1->display_second_tower = 1;
    }
}

void load_pos_tower_lv2_3(dfd_t *dfd)
{
    if (dfd->event->x > 1615 && dfd->event->x < 1746 && dfd->event->y > 364 &&
        dfd->event->y < 431 && dfd->lvl_1->display_third_tower == 0) {
        if (dfd->lvl_1->which_tower_to_display == 0) {
            dfd->lvl_1->actual->pos_tower.x = 1600;
            dfd->lvl_1->actual->pos_tower.y = 265;
        }
        if (dfd->lvl_1->which_tower_to_display == 1) {
            dfd->lvl_1->actual->pos_tower.x = 1585;
            dfd->lvl_1->actual->pos_tower.y = 275;
        }
        if (dfd->lvl_1->which_tower_to_display == 2) {
            dfd->lvl_1->actual->pos_tower.x = 1595;
            dfd->lvl_1->actual->pos_tower.y = 263;
        }
        if (dfd->lvl_1->which_tower_to_display == 3) {
            dfd->lvl_1->actual->pos_tower.x = 1588;
            dfd->lvl_1->actual->pos_tower.y = 268;
        }
        dfd->lvl_1->display_third_tower = 1;
    }
}

void load_pos_tower_lv2_4(dfd_t *dfd)
{
    if (dfd->event->x > 690 && dfd->event->x < 835 && dfd->event->y > 676 &&
        dfd->event->y < 740 && dfd->lvl_1->display_fourth_tower == 0) {
        if (dfd->lvl_1->which_tower_to_display == 0) {
            dfd->lvl_1->actual->pos_tower.x = 675;
            dfd->lvl_1->actual->pos_tower.y = 570;
        }
        if (dfd->lvl_1->which_tower_to_display == 1) {
            dfd->lvl_1->actual->pos_tower.x = 659;
            dfd->lvl_1->actual->pos_tower.y = 550;
        }
        if (dfd->lvl_1->which_tower_to_display == 2) {
            dfd->lvl_1->actual->pos_tower.x = 669;
            dfd->lvl_1->actual->pos_tower.y = 550;
        }
        if (dfd->lvl_1->which_tower_to_display == 3) {
            dfd->lvl_1->actual->pos_tower.x = 666;
            dfd->lvl_1->actual->pos_tower.y = 550;
        }
        dfd->lvl_1->display_fourth_tower = 1;
    }
}

void load_pos_tower_lv2(dfd_t *dfd)
{
    load_pos_tower_lv2_1(dfd);
    load_pos_tower_lv2_2(dfd);
    load_pos_tower_lv2_3(dfd);
    load_pos_tower_lv2_4(dfd);
    load_pos_tower_lv2_5(dfd);
    load_pos_tower_lv2_6(dfd);
    load_pos_tower_lv2_7(dfd);
}
