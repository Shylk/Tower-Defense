/*
** EPITECH PROJECT, 2019
** spell_boum
** File description:
** my_defender
*/

#include "include/my.h"

void check_hit_fire(dfd_t *dfd)
{
    if (dfd->lvl_1->current->pos_mob.x < dfd->spell->pos_fire.x + 70
        && dfd->lvl_1->current->pos_mob.x > dfd->spell->pos_fire.x - 70
        && dfd->lvl_1->current->pos_mob.y > dfd->spell->pos_fire.y - 99
        && dfd->lvl_1->current->pos_mob.y < dfd->spell->pos_fire.y + 10) {
        dfd->lvl_1->current->hp -= 30;
        if (dfd->spell->def_boum == 1)
            dfd->lvl_1->current->hp -= 30;
    }
}

void fire_boum(dfd_t *dfd)
{
    sfSprite_setTextureRect(dfd->spell->spr_fire, dfd->spell->rect_fire);
    if (dfd->spell->rect_fire.left < 3800) {
        dfd->spell->rect_fire.left += 210;
    } else {
        dfd->spell->rect_fire.left = 0;
        dfd->spell->fire_boum = 0;
    }
    sfSprite_setTextureRect(dfd->spell->spr_fire, dfd->spell->rect_fire);
    if (dfd->spell->rect_fire.left > 630
        && dfd->spell->rect_fire.left < 3170) {
            for (int i = 0; i < 13 + (dfd->lvl->wave * 2); i++) {
                check_hit_fire(dfd);
                dfd->lvl_1->current = dfd->lvl_1->current->next;
            }
            dfd->lvl_1->current = dfd->lvl_1->head;
        }
}

void unfreeze(dfd_t *dfd)
{
    for (int i = 0; i < 13 + (dfd->lvl->wave * 2); i++) {
        if (dfd->lvl_1->current->freeze == 1) {
            dfd->lvl_1->current->hp -= 20;
            if (dfd->spell->def_boum == 1)
                dfd->lvl_1->current->hp -= 20;
        }
        dfd->lvl_1->current->freeze = 0;
        dfd->lvl_1->current = dfd->lvl_1->current->next;
    }
    dfd->lvl_1->current = dfd->lvl_1->head;
}

void freeze_boum(dfd_t *dfd)
{
    sfSprite_setTextureRect(dfd->spell->spr_freeze, dfd->spell->rect_freeze);
    if (dfd->spell->rect_freeze.left < 3000) {
        if (dfd->spell->rect_freeze.left == 1200)
            dfd->spell->rect_freeze.left = 1600;
        dfd->spell->rect_freeze.left += 200;
    } else {
        dfd->spell->rect_freeze.left = 0;
        dfd->spell->freeze_boum = 0;
    }
    sfSprite_setTextureRect(dfd->spell->spr_freeze, dfd->spell->rect_freeze);
    for (int i = 0; i < 13 + (dfd->lvl->wave * 2); i++) {
        if (dfd->lvl_1->current->pos_mob.x < dfd->spell->pos_freeze.x + 30
            && dfd->lvl_1->current->pos_mob.x > dfd->spell->pos_freeze.x - 100
            && dfd->lvl_1->current->pos_mob.y > dfd->spell->pos_freeze.y - 100
            && dfd->lvl_1->current->pos_mob.y < dfd->spell->pos_freeze.y + 10)
                dfd->lvl_1->current->freeze = 1;
            dfd->lvl_1->current = dfd->lvl_1->current->next;
        }
    dfd->lvl_1->current = dfd->lvl_1->head;
    if (dfd->spell->rect_freeze.left == 0)
        unfreeze(dfd);
}

void def_boum(dfd_t *dfd)
{
    for (int i = 0; i < 13 + (dfd->lvl->wave * 2); i++) {
        sfSprite_setTextureRect
            (dfd->lvl_1->current->spr_def, dfd->lvl_1->current->rect_def);
        if (dfd->lvl_1->current->rect_def.left == 1000) {
            if (dfd->clocker->seconds_def > 7) {
                dfd->lvl_1->current->rect_def.left = 0;
                dfd->spell->def_boum = 0;
                sfClock_restart(dfd->clocker->clock_def);
            }
        } else if (dfd->clocker->seconds_def > 0.15) {
            if (dfd->lvl_1->current->rect_def.left < 1200)
                dfd->lvl_1->current->rect_def.left += 200;
            sfClock_restart(dfd->clocker->clock_def);
        }
        dfd->lvl_1->current = dfd->lvl_1->current->next;
        sfSprite_setTextureRect
            (dfd->lvl_1->current->spr_def, dfd->lvl_1->current->rect_def);
    }
    dfd->lvl_1->current = dfd->lvl_1->head;
}
