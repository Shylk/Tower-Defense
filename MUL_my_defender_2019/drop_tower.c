/*
** EPITECH PROJECT, 2020
** drop_tower
** File description:
** drop two first towers
*/

#include "include/my.h"

void drop_tower_1_and_2(dfd_t *dfd)
{
    if (dfd->event->x > 805 && dfd->event->x < 956 && dfd->event->y > 280 &&
        dfd->event->y < 343 && dfd->lvl_1->display_first_tower == 0) {
        for (int i = 0; i < dfd->lvl_1->number_tower; i++)
            dfd->lvl_1->actual = dfd->lvl_1->actual->next;
        load_tower(dfd);
        dfd->lvl_1->actual->display_tower = 1;
        dfd->lvl_1->tower_clicked = 0;
        dfd->lvl_1->number_tower++;
    }
    if (dfd->event->x > 1111 && dfd->event->x < 1245 && dfd->event->y > 280 &&
        dfd->event->y < 333 && dfd->lvl_1->display_second_tower == 0) {
        for (int i = 0; i < dfd->lvl_1->number_tower; i++)
            dfd->lvl_1->actual = dfd->lvl_1->actual->next;
        load_tower(dfd);
        dfd->lvl_1->actual->display_tower = 1;
        dfd->lvl_1->tower_clicked = 0;
        dfd->lvl_1->number_tower++;
    }
}

void drop_tower_3_and_4(dfd_t *dfd)
{
    if (dfd->event->x > 1408 && dfd->event->x < 1548 && dfd->event->y > 280 &&
        dfd->event->y < 333 && dfd->lvl_1->display_third_tower == 0) {
        for (int i = 0; i < dfd->lvl_1->number_tower; i++)
            dfd->lvl_1->actual = dfd->lvl_1->actual->next;
        load_tower(dfd);
        dfd->lvl_1->actual->display_tower = 1;
        dfd->lvl_1->tower_clicked = 0;
        dfd->lvl_1->number_tower++;
    }
    if (dfd->event->x > 652 && dfd->event->x < 796 && dfd->event->y > 622 &&
        dfd->event->y < 690 && dfd->lvl_1->display_fourth_tower == 0) {
        for (int i = 0; i < dfd->lvl_1->number_tower; i++)
            dfd->lvl_1->actual = dfd->lvl_1->actual->next;
        load_tower(dfd);
        dfd->lvl_1->actual->display_tower = 1;
        dfd->lvl_1->tower_clicked = 0;
        dfd->lvl_1->number_tower++;
    }
}

void drop_tower_5_and_6(dfd_t *dfd)
{
    if (dfd->event->x > 966 && dfd->event->x < 1084 && dfd->event->y > 622 &&
        dfd->event->y < 690 && dfd->lvl_1->display_fifth_tower == 0) {
        for (int i = 0; i < dfd->lvl_1->number_tower; i++)
            dfd->lvl_1->actual = dfd->lvl_1->actual->next;
        load_tower(dfd);
        dfd->lvl_1->actual->display_tower = 1;
        dfd->lvl_1->tower_clicked = 0;
        dfd->lvl_1->number_tower++;
    }
    if (dfd->event->x > 1381 && dfd->event->x < 1516 && dfd->event->y > 622 &&
        dfd->event->y < 690 && dfd->lvl_1->display_sixth_tower == 0) {
        for (int i = 0; i < dfd->lvl_1->number_tower; i++)
            dfd->lvl_1->actual = dfd->lvl_1->actual->next;
        load_tower(dfd);
        dfd->lvl_1->actual->display_tower = 1;
        dfd->lvl_1->tower_clicked = 0;
        dfd->lvl_1->number_tower++;
    }
}

void drop_last_tower(dfd_t *dfd)
{
    if (dfd->event->x > 804 && dfd->event->x < 944 && dfd->event->y > 956 &&
        dfd->event->y < 1003 && dfd->lvl_1->display_seventh_tower == 0) {
        for (int i = 0; i < dfd->lvl_1->number_tower; i++)
            dfd->lvl_1->actual = dfd->lvl_1->actual->next;
        load_tower(dfd);
        dfd->lvl_1->actual->display_tower = 1;
        dfd->lvl_1->tower_clicked = 0;
        dfd->lvl_1->number_tower++;
    }
}
