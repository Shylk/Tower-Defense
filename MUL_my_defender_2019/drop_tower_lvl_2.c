/*
** EPITECH PROJECT, 2020
** drop tower 2
** File description:
** second level
*/

#include "include/my.h"

void drop_tower_1_and_2_lv2(dfd_t *dfd)
{
    if (dfd->event->x > 814 && dfd->event->x < 940 && dfd->event->y > 364 &&
        dfd->event->y < 414 && dfd->lvl_1->display_first_tower == 0) {
        for (int i = 0; i < dfd->lvl_1->number_tower; i++)
            dfd->lvl_1->actual = dfd->lvl_1->actual->next;
        load_tower(dfd);
        dfd->lvl_1->actual->display_tower = 1;
        dfd->lvl_1->tower_clicked = 0;
        dfd->lvl_1->number_tower++;
    }
    if (dfd->event->x > 1216 && dfd->event->x < 1358 && dfd->event->y > 365 &&
        dfd->event->y < 431 && dfd->lvl_1->display_second_tower == 0) {
        for (int i = 0; i < dfd->lvl_1->number_tower; i++)
            dfd->lvl_1->actual = dfd->lvl_1->actual->next;
        load_tower(dfd);
        dfd->lvl_1->actual->display_tower = 1;
        dfd->lvl_1->tower_clicked = 0;
        dfd->lvl_1->number_tower++;
    }
}

void drop_tower_3_and_4_lv2(dfd_t *dfd)
{
    if (dfd->event->x > 1615 && dfd->event->x < 1746 && dfd->event->y > 364 &&
        dfd->event->y < 431 && dfd->lvl_1->display_third_tower == 0) {
        for (int i = 0; i < dfd->lvl_1->number_tower; i++)
            dfd->lvl_1->actual = dfd->lvl_1->actual->next;
        load_tower(dfd);
        dfd->lvl_1->actual->display_tower = 1;
        dfd->lvl_1->tower_clicked = 0;
        dfd->lvl_1->number_tower++;
    }
    if (dfd->event->x > 690 && dfd->event->x < 835 && dfd->event->y > 676 &&
        dfd->event->y < 740 && dfd->lvl_1->display_fourth_tower == 0) {
        for (int i = 0; i < dfd->lvl_1->number_tower; i++)
            dfd->lvl_1->actual = dfd->lvl_1->actual->next;
        load_tower(dfd);
        dfd->lvl_1->actual->display_tower = 1;
        dfd->lvl_1->tower_clicked = 0;
        dfd->lvl_1->number_tower++;
    }
}

void drop_tower_5_and_6_lv2(dfd_t *dfd)
{
    if (dfd->event->x > 1113 && dfd->event->x < 1285 && dfd->event->y > 691 &&
        dfd->event->y < 762 && dfd->lvl_1->display_fifth_tower == 0) {
        for (int i = 0; i < dfd->lvl_1->number_tower; i++)
            dfd->lvl_1->actual = dfd->lvl_1->actual->next;
        load_tower(dfd);
        dfd->lvl_1->actual->display_tower = 1;
        dfd->lvl_1->tower_clicked = 0;
        dfd->lvl_1->number_tower++;
    }
    if (dfd->event->x > 1553 && dfd->event->x < 1705 && dfd->event->y > 683 &&
        dfd->event->y < 758 && dfd->lvl_1->display_sixth_tower == 0) {
        for (int i = 0; i < dfd->lvl_1->number_tower; i++)
            dfd->lvl_1->actual = dfd->lvl_1->actual->next;
        load_tower(dfd);
        dfd->lvl_1->actual->display_tower = 1;
        dfd->lvl_1->tower_clicked = 0;
        dfd->lvl_1->number_tower++;
    }
}

void drop_last_tower_lv2(dfd_t *dfd)
{
    if (dfd->event->x > 464 && dfd->event->x < 615 && dfd->event->y > 935 &&
        dfd->event->y < 991 && dfd->lvl_1->display_seventh_tower == 0) {
        for (int i = 0; i < dfd->lvl_1->number_tower; i++)
            dfd->lvl_1->actual = dfd->lvl_1->actual->next;
        load_tower(dfd);
        dfd->lvl_1->actual->display_tower = 1;
        dfd->lvl_1->tower_clicked = 0;
        dfd->lvl_1->number_tower++;
    }
}
