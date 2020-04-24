/*
** EPITECH PROJECT, 2020
** check menu
** File description:
** all function to change the menu displayed
*/

#include "include/my.h"

void check_menu(dfd_t *dfd)
{
    dfd->menu->select = 0;
    if (dfd->event->event.type == sfEvtMouseMoved) {
        dfd->event->x = dfd->event->event.mouseMove.x;
        dfd->event->y = dfd->event->event.mouseMove.y;
    }
    if (dfd->menu->change == 0)
        check_menu_home(dfd);
    if (dfd->menu->change == 1)
        check_menu_set(dfd);
    if (dfd->menu->change == 2)
        check_menu_lvl(dfd);
    if (dfd->menu->change == 3)
        check_menu_htp(dfd);
    if (dfd->escp->pause == 1)
        check_escp(dfd);
}

void check_menu_home(dfd_t *dfd)
{
    if (dfd->event->x > 850 && dfd->event->x < 1060 &&
        dfd->event->y > 719 && dfd->event->y < 922)
        dfd->menu->select = 1;
    if (dfd->event->x > 1801 && dfd->event->x < 1900 &&
        dfd->event->y > 23 && dfd->event->y < 118)
        dfd->menu->select = 2;
    if (dfd->event->x > 70 && dfd->event->x < 182 &&
        dfd->event->y > 54 && dfd->event->y < 163)
        dfd->menu->select = 3;
    if (dfd->event->x > 91 && dfd->event->x < 268 &&
        dfd->event->y > 674 && dfd->event->y < 805)
        dfd->menu->select = 4;
    if (dfd->event->x > 1551 && dfd->event->x < 1671 &&
        dfd->event->y > 611 && dfd->event->y < 742)
        dfd->menu->select = 5;
    if (dfd->event->x > 256 && dfd->event->x < 369 &&
        dfd->event->y > 53 && dfd->event->y < 161)
        dfd->menu->select = 6;
}

void check_menu_set(dfd_t *dfd)
{
    sfVector2f scale;
    scale.x = 0;
    scale.y = 0;
    sfSprite_setScale(dfd->set->spr_minus, scale);
    sfSprite_setScale(dfd->set->spr_plus, scale);
    scale.x = 1.1;
    scale.y = 1.1;
    if (dfd->event->x > 1293 && dfd->event->x < 1395 &&
        dfd->event->y > 251 && dfd->event->y < 351)
        dfd->menu->select = 11;
    if (dfd->event->x > 957 && dfd->event->x < 1019 &&
        dfd->event->y > 639 && dfd->event->y < 698)
        sfSprite_setScale(dfd->set->spr_minus, scale);
    if (dfd->event->x > 1264 && dfd->event->x < 1322 &&
        dfd->event->y > 639 && dfd->event->y < 698)
        sfSprite_setScale(dfd->set->spr_plus, scale);
}

void check_menu_htp(dfd_t *dfd)
{
    if (dfd->event->x > 1767 && dfd->event->x < 1878 &&
        dfd->event->y > 24 && dfd->event->y < 135)
        dfd->menu->select = 12;
}

void check_escp(dfd_t *dfd)
{
    if (dfd->event->x > 979 && dfd->event->x < 1276 &&
        dfd->event->y > 354 && dfd->event->y < 505)
        dfd->menu->select = 13;
    if (dfd->event->x > 735 && dfd->event->x < 1143 &&
        dfd->event->y > 562 && dfd->event->y < 770)
        dfd->menu->select = 14;
    if (dfd->event->x > 606 && dfd->event->x < 909 &&
        dfd->event->y > 354 && dfd->event->y < 505)
        dfd->menu->select = 15;
}
