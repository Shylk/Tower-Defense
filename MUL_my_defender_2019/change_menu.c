/*
** EPITECH PROJECT, 2020
** menu management
** File description:
** all function to handle the menu
*/

#include "include/my.h"

void which_change(dfd_t *dfd)
{
    if (dfd->menu->change == 1)
        change_setting(dfd);
    if (dfd->menu->change == 2)
        change_lvl(dfd);
    if (dfd->menu->change == 3)
        change_htp(dfd);
    if (dfd->lvl->start_game == 1 || dfd->lvl->start_game == 2
        || dfd->lvl->start_game == 3)
            upgrade_tower_sprite(dfd);
}

void change_menu(dfd_t *dfd)
{
    if (dfd->event->x > 1801 && dfd->event->x < 1900 && dfd->event->y > 23
        && dfd->event->y < 118 && dfd->menu->change == 0)
            sfRenderWindow_close(dfd->window);
    if (dfd->event->x > 70 && dfd->event->x < 182 && dfd->event->y > 54
        && dfd->event->y < 163 && dfd->menu->change == 0) {
            dfd->menu->change = 1;
            sfSprite_setTexture(dfd->menu->spr_menu, dfd->set->set, sfTrue);
        }
    if (dfd->event->x > 850 && dfd->event->x < 1060 && dfd->event->y > 724
        && dfd->event->y < 922 && dfd->menu->change == 0) {
            dfd->menu->change = 2;
            sfSprite_setTexture(dfd->menu->spr_menu, dfd->lvl->lvl, sfTrue);
        }
    if (dfd->event->x > 256 && dfd->event->x < 369 && dfd->event->y > 53
        && dfd->event->y < 161 && dfd->menu->change == 0) {
            dfd->menu->change = 3;
            sfSprite_setTexture(dfd->menu->spr_menu, dfd->htp->htp, sfTrue);
        }
    which_change(dfd);
}

void change_lvl(dfd_t *dfd)
{
    if (dfd->event->x > 833 && dfd->event->x < 1091 && dfd->event->y > 659
        && dfd->event->y < 791 && dfd->lvl->temp == 1) {
            if (dfd->lvl->difficulty == 1)
                dfd->lvl->difficulty = 2;
            else if (dfd->lvl->difficulty == 2)
                dfd->lvl->difficulty = 3;
            else
                dfd->lvl->difficulty = 1;
        }
    dfd->lvl->temp = 1;
    if (dfd->event->x > 1382 && dfd->event->x < 1505 && dfd->event->y > 171
        && dfd->event->y < 296) {
            dfd->lvl->temp = 0;
            dfd->menu->change = 0;
            sfSprite_setTexture(dfd->menu->spr_menu, dfd->menu->menu, sfTrue);
        }
}

void change_htp(dfd_t *dfd)
{
    if (dfd->event->x > 1767 && dfd->event->x < 1878 && dfd->event->y > 24
        && dfd->event->y < 135) {
            dfd->menu->change = 0;
            sfSprite_setTexture(dfd->menu->spr_menu, dfd->menu->menu, sfTrue);
        }
}
