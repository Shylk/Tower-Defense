/*
** EPITECH PROJECT, 2019
** spell_select
** File description:
** my_defender
*/

#include "include/my.h"

void select_fire(dfd_t *dfd)
{
    sfVector2f origin;
    if (dfd->event->x > 1788 && dfd->event->x < 1889 && dfd->event->y > 179
        && dfd->event->y < 282 && dfd->spell->fire_boum == 0
        && dfd->hud->mana >= 25 && dfd->spell->select_freeze == 0
        && dfd->spell->select_def == 0) {
            if (dfd->spell->select_fire == 0) {
                dfd->spell->select_fire = 1;
                sfSprite_setTexture
                    (dfd->cursor->spr_mouse, dfd->cursor->mouse_fire, sfTrue);
                origin.x = 40;
                origin.y = 45;
                sfSprite_setOrigin(dfd->cursor->spr_mouse, origin);
            } else if (dfd->spell->select_fire == 1) {
                dfd->spell->select_fire = 0;
                sfSprite_setTexture
                    (dfd->cursor->spr_mouse, dfd->cursor->mouse, sfTrue);
                origin.x = 0;
                origin.y = 0;
                sfSprite_setOrigin(dfd->cursor->spr_mouse, origin);
            }
        }
}

void select_freeze(dfd_t *dfd)
{
    sfVector2f origin;
    if (dfd->event->x > 1788 && dfd->event->x < 1889 && dfd->event->y > 55
        && dfd->event->y < 155 && dfd->spell->freeze_boum == 0
        && dfd->hud->mana >= 25 && dfd->spell->select_fire == 0
        && dfd->spell->select_def == 0) {
            if (dfd->spell->select_freeze == 0) {
                dfd->spell->select_freeze = 1;
                sfSprite_setTexture(dfd->cursor->spr_mouse,
                    dfd->cursor->mouse_freeze, sfTrue);
                origin.x = 80;
                origin.y = 45;
                sfSprite_setOrigin(dfd->cursor->spr_mouse, origin);
            } else if (dfd->spell->select_freeze == 1) {
                dfd->spell->select_freeze = 0;
                sfSprite_setTexture
                    (dfd->cursor->spr_mouse, dfd->cursor->mouse, sfTrue);
                origin.x = 0;
                origin.y = 0;
                sfSprite_setOrigin(dfd->cursor->spr_mouse, origin);
            }
    }
}

void select_def(dfd_t *dfd)
{
    sfVector2f origin;
    if (dfd->event->x > 1788 && dfd->event->x < 1889 && dfd->event->y > 309
        && dfd->event->y < 409 && dfd->spell->def_boum == 0
        && dfd->hud->mana >= 25 && dfd->spell->select_fire == 0) {
            if (dfd->spell->select_def == 0) {
                dfd->spell->select_def = 1;
                sfSprite_setTexture(dfd->cursor->spr_mouse,
                    dfd->cursor->mouse_def, sfTrue);
                origin.x = 13;
                origin.y = 20;
                sfSprite_setOrigin(dfd->cursor->spr_mouse, origin);
            } else if (dfd->spell->select_def == 1) {
                dfd->spell->select_def = 0;
                sfSprite_setTexture
                    (dfd->cursor->spr_mouse, dfd->cursor->mouse, sfTrue);
                origin.x = 0;
                origin.y = 0;
                sfSprite_setOrigin(dfd->cursor->spr_mouse, origin);
            }
    }
}

void spell(dfd_t *dfd)
{
    select_fire(dfd);
    select_freeze(dfd);
    select_def(dfd);
}
