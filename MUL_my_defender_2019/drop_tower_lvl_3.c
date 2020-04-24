/*
** EPITECH PROJECT, 2020
** lvl3
** File description:
** lvl 3 drop tower
*/

#include "include/my.h"

void drop_tower_1_and_2_lv3(dfd_t *dfd)
{
    if (dfd->event->x > 210 && dfd->event->x < 345 && dfd->event->y > 364 &&
        dfd->event->y < 426 && dfd->lvl_1->display_first_tower == 0) {
        for (int i = 0; i < dfd->lvl_1->number_tower; i++)
            dfd->lvl_1->actual = dfd->lvl_1->actual->next;
        load_tower(dfd);
        dfd->lvl_1->actual->display_tower = 1;
        dfd->lvl_1->tower_clicked = 0;
        dfd->lvl_1->number_tower++;
    }
    if (dfd->event->x > 720 && dfd->event->x < 857 && dfd->event->y > 318 &&
        dfd->event->y < 483 && dfd->lvl_1->display_second_tower == 0) {
        for (int i = 0; i < dfd->lvl_1->number_tower; i++)
            dfd->lvl_1->actual = dfd->lvl_1->actual->next;
        load_tower(dfd);
        dfd->lvl_1->actual->display_tower = 1;
        dfd->lvl_1->tower_clicked = 0;
        dfd->lvl_1->number_tower++;
    }
}

void drop_tower_3_and_4_lv3(dfd_t *dfd)
{
    if (dfd->event->x > 1188 && dfd->event->x < 1317 && dfd->event->y > 265 &&
        dfd->event->y < 324 && dfd->lvl_1->display_third_tower == 0) {
        for (int i = 0; i < dfd->lvl_1->number_tower; i++)
            dfd->lvl_1->actual = dfd->lvl_1->actual->next;
        load_tower(dfd);
        dfd->lvl_1->actual->display_tower = 1;
        dfd->lvl_1->tower_clicked = 0;
        dfd->lvl_1->number_tower++;
    }
    if (dfd->event->x > 275 && dfd->event->x < 426 && dfd->event->y > 674 &&
        dfd->event->y < 734 && dfd->lvl_1->display_fourth_tower == 0) {
        for (int i = 0; i < dfd->lvl_1->number_tower; i++)
            dfd->lvl_1->actual = dfd->lvl_1->actual->next;
        load_tower(dfd);
        dfd->lvl_1->actual->display_tower = 1;
        dfd->lvl_1->tower_clicked = 0;
        dfd->lvl_1->number_tower++;
    }
}

void drop_tower_5_and_6_lv3(dfd_t *dfd)
{
    if (dfd->event->x > 1205 && dfd->event->x < 1325 && dfd->event->y > 590 &&
        dfd->event->y < 663 && dfd->lvl_1->display_fifth_tower == 0) {
        for (int i = 0; i < dfd->lvl_1->number_tower; i++)
            dfd->lvl_1->actual = dfd->lvl_1->actual->next;
        load_tower(dfd);
        dfd->lvl_1->actual->display_tower = 1;
        dfd->lvl_1->tower_clicked = 0;
        dfd->lvl_1->number_tower++;
    }
    if (dfd->event->x > 1561 && dfd->event->x < 1708 && dfd->event->y > 601 &&
        dfd->event->y < 661 && dfd->lvl_1->display_sixth_tower == 0) {
        for (int i = 0; i < dfd->lvl_1->number_tower; i++)
            dfd->lvl_1->actual = dfd->lvl_1->actual->next;
        load_tower(dfd);
        dfd->lvl_1->actual->display_tower = 1;
        dfd->lvl_1->tower_clicked = 0;
        dfd->lvl_1->number_tower++;
    }
}

void drop_last_tower_lv3(dfd_t *dfd)
{
    if (dfd->event->x > 221 && dfd->event->x < 367 && dfd->event->y > 982 &&
        dfd->event->y < 1048 && dfd->lvl_1->display_seventh_tower == 0) {
        for (int i = 0; i < dfd->lvl_1->number_tower; i++)
            dfd->lvl_1->actual = dfd->lvl_1->actual->next;
        load_tower(dfd);
        dfd->lvl_1->actual->display_tower = 1;
        dfd->lvl_1->tower_clicked = 0;
        dfd->lvl_1->number_tower++;
    }
}
