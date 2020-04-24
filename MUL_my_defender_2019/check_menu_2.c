/*
** EPITECH PROJECT, 2020
** check menu_2
** File description:
** all function to change the menu displayed
*/

#include "include/my.h"

void hover_level_button(dfd_t *dfd)
{
    if (dfd->event->x > 1382 && dfd->event->x < 1505 &&
        dfd->event->y > 171 && dfd->event->y < 296)
        dfd->menu->select = 7;
    if (dfd->event->x > 600 && dfd->event->x < 740 &&
        dfd->event->y > 415 && dfd->event->y < 555)
        dfd->menu->select = 8;
    if (dfd->event->x > 883 && dfd->event->x < 1034 &&
        dfd->event->y > 415 && dfd->event->y < 555)
        dfd->menu->select = 9;
    if (dfd->event->x > 1172 && dfd->event->x < 1322 &&
        dfd->event->y > 415 && dfd->event->y < 555)
        dfd->menu->select = 10;
}

void check_menu_lvl(dfd_t *dfd)
{
    hover_level_button(dfd);
    dfd->lvl_1->actual = dfd->lvl_1->first;
    dfd->hud->zone = 0;
    for (int i = 0; i < 7; i++) {
        if (dfd->lvl_1->actual->display_tower == 1
            && dfd->lvl_1->actual->which_tower != 1) {
                if (dfd->event->x >= dfd->lvl_1->actual->pos_tower.x
                    && dfd->event->x <= dfd->lvl_1->actual->pos_tower.x + 164
                    && dfd->event->y >= dfd->lvl_1->actual->pos_tower.y
                    && dfd->event->y
                    <= dfd->lvl_1->actual->pos_tower.y + 174) {
                        sfSprite_setPosition(dfd->hud->spr_zone,
                            dfd->lvl_1->actual->pos_tower);
                        dfd->hud->zone = 1;
                    }
            }
            dfd->lvl_1->actual = dfd->lvl_1->actual->next;
    }
    dfd->lvl_1->actual = dfd->lvl_1->first;
}
