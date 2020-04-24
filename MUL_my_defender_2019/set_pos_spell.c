/*
** EPITECH PROJECT, 2019
** spell_pos
** File description:
** my_defender
*/

#include "include/my.h"

void set_pos_fire(dfd_t *dfd)
{
    if (dfd->spell->select_fire == 1 && dfd->event->x < 1700) {
        dfd->hud->mana -= 25;
        dfd->spell->pos_fire.x = dfd->event->x;
        dfd->spell->pos_fire.y = dfd->event->y;
        sfSprite_setPosition(dfd->spell->spr_fire, dfd->spell->pos_fire);
        dfd->spell->fire_boum = 1;
        dfd->spell->select_fire = 0;
        sfSprite_setTexture
            (dfd->cursor->spr_mouse, dfd->cursor->mouse, sfTrue);
        sfVector2f origin;
        origin.x = 0;
        origin.y = 0;
        sfSprite_setOrigin(dfd->cursor->spr_mouse, origin);
    }
    set_pos_freeze(dfd);
    set_pos_def(dfd);
}

void set_pos_freeze(dfd_t *dfd)
{
    if (dfd->spell->select_freeze == 1 && dfd->event->x < 1700) {
        dfd->hud->mana -= 25;
        dfd->spell->pos_freeze.x = dfd->event->x;
        dfd->spell->pos_freeze.y = dfd->event->y;
        sfSprite_setPosition(dfd->spell->spr_freeze, dfd->spell->pos_freeze);
        dfd->spell->freeze_boum = 1;
        dfd->spell->select_freeze = 0;
        sfSprite_setTexture
            (dfd->cursor->spr_mouse, dfd->cursor->mouse, sfTrue);
        sfVector2f origin;
        origin.x = 0;
        origin.y = 0;
        sfSprite_setOrigin(dfd->cursor->spr_mouse, origin);
    }
}

void set_pos_def(dfd_t *dfd)
{
    if (dfd->spell->select_def == 1 && dfd->event->x < 1700) {
        dfd->hud->mana -= 25;
        dfd->spell->def_boum = 1;
        dfd->spell->select_def = 0;
        sfSprite_setTexture
            (dfd->cursor->spr_mouse, dfd->cursor->mouse, sfTrue);
        sfVector2f origin;
        origin.x = 0;
        origin.y = 0;
        sfSprite_setOrigin(dfd->cursor->spr_mouse, origin);
    }
}
