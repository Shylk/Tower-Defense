/*
** EPITECH PROJECT, 2019
** spell
** File description:
** my_defender
*/

#include "include/my.h"

void time_spell(dfd_t *dfd)
{
    dfd->clocker->time_fire = sfClock_getElapsedTime(dfd->clocker->clock_fire);
    dfd->clocker->seconds_fire =
        dfd->clocker->time_fire.microseconds / 1000000.0;
    dfd->clocker->time_freeze =
        sfClock_getElapsedTime(dfd->clocker->clock_freeze);
    dfd->clocker->seconds_freeze =
        dfd->clocker->time_freeze.microseconds / 1000000.0;
    dfd->clocker->time_def = sfClock_getElapsedTime(dfd->clocker->clock_def);
    dfd->clocker->seconds_def =
        dfd->clocker->time_def.microseconds / 1000000.0;
}

void display_spell(dfd_t *dfd)
{
    if (dfd->spell->def_boum == 1)
        def_boum(dfd);
    if (dfd->spell->freeze_boum == 1)
        sfRenderWindow_drawSprite(dfd->window, dfd->spell->spr_freeze, NULL);
    if (dfd->spell->fire_boum == 1)
        sfRenderWindow_drawSprite(dfd->window, dfd->spell->spr_fire, NULL);
}

void launch_spell(dfd_t *dfd)
{
    time_spell(dfd);
    sfSprite_setTextureRect(dfd->spell->spr_freeze, dfd->spell->rect_freeze);
    if (dfd->clocker->seconds_fire > 0.06) {
        if (dfd->spell->fire_boum == 1)
            fire_boum(dfd);
        sfClock_restart(dfd->clocker->clock_fire);
    }
    if (dfd->spell->rect_freeze.left == 2800) {
        if (dfd->clocker->seconds_freeze > 1) {
            if (dfd->spell->freeze_boum == 1)
                freeze_boum(dfd);
            sfClock_restart(dfd->clocker->clock_freeze);
        }
    } else if (dfd->clocker->seconds_freeze > 0.1) {
        if (dfd->spell->freeze_boum == 1)
            freeze_boum(dfd);
        sfClock_restart(dfd->clocker->clock_freeze);
    }
    display_spell(dfd);
}
