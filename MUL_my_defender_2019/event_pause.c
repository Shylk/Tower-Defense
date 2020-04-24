/*
** EPITECH PROJECT, 2020
** setting pause
** File description:
** all function to handle the menu
*/

#include "include/my.h"

void event_escp(dfd_t *dfd)
{
    if (dfd->escp->pause == 0)
        dfd->escp->pause = 1;
}

void event_pause(dfd_t *dfd)
{
    if (dfd->event->x > 979 && dfd->event->x < 1276 && dfd->event->y > 354
        && dfd->event->y < 505)
            sfRenderWindow_close(dfd->window);
    if (dfd->event->x > 735 && dfd->event->x < 1143 && dfd->event->y > 562
        && dfd->event->y < 770)
            dfd->escp->pause = 0;
    if (dfd->event->x > 606 && dfd->event->x < 909 && dfd->event->y > 354
        && dfd->event->y < 505) {
            dfd->lvl->start_game = 0;
            dfd->menu->change = 0;
            dfd->menu->select = 0;
            dfd->escp->pause = 0;
            sfSprite_setTexture(dfd->menu->spr_menu, dfd->menu->menu, sfTrue);
        }
}

void change_escp(dfd_t *dfd)
{
    if (dfd->escp->pause == 1) {
        dfd->spell->select_fire = 0;
        dfd->spell->select_freeze = 0;
        dfd->spell->select_def = 0;
        dfd->spell->fire_boum = 0;
        dfd->spell->freeze_boum = 0;
        dfd->spell->def_boum = 0;
        sfSprite_setTexture
            (dfd->cursor->spr_mouse, dfd->cursor->mouse, sfTrue);
        sfVector2f origin;
        origin.x = 0;
        origin.y = 0;
        sfSprite_setOrigin(dfd->cursor->spr_mouse, origin);
        event_pause(dfd);
    }
}
