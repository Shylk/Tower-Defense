/*
** EPITECH PROJECT, 2020
** tower attack
** File description:
** bow tower
*/

#include "include/my.h"

void set_time_bow_tower(dfd_t *dfd)
{
    dfd->lvl_1->actual->time_tower =
        sfClock_getElapsedTime(dfd->lvl_1->actual->clock_tower);
    dfd->lvl_1->actual->cooldown =
        dfd->lvl_1->actual->time_tower.microseconds / 1000000.0;
    dfd->lvl_1->actual->time_bow =
        sfClock_getElapsedTime(dfd->lvl_1->actual->clock_bow);
    dfd->lvl_1->actual->seconds_bow =
        dfd->lvl_1->actual->time_bow.microseconds / 1000000.0;
}

void launch_attack_bow_tower_lvl1(dfd_t *dfd)
{
    if (dfd->lvl_1->actual->seconds_bow >= 0.05 &&
        dfd->lvl_1->actual->cooldown >= 0.7) {
        dfd->lvl_1->actual->rect_atk_bow.left += 49;
        if (dfd->lvl_1->actual->rect_atk_bow.left >= 294)
            dfd->lvl_1->actual->rect_atk_bow.left = 245;
        sfSprite_setTextureRect(dfd->lvl_1->actual->spr_atk_bow,
                                dfd->lvl_1->actual->rect_atk_bow);
        sfClock_restart(dfd->lvl_1->actual->clock_bow);
    }
    if (dfd->lvl_1->actual->cooldown >= 1) {
        dfd->lvl_1->current->hp -= 20;
        sfMusic_stop(dfd->music->bow);
        sfMusic_play(dfd->music->bow);
        if (dfd->spell->def_boum == 1)
            dfd->lvl_1->current->hp -= 20;
        dfd->lvl_1->actual->hit_bow = 1;
        dfd->lvl_1->actual->rect_atk_bow.left = 0;
        sfClock_restart(dfd->lvl_1->actual->clock_tower);
    }
}

void launch_attack_bow_tower_lvl2(dfd_t *dfd)
{
    if (dfd->lvl_1->actual->seconds_bow >= 0.05 &&
        dfd->lvl_1->actual->cooldown >= 0.75) {
        dfd->lvl_1->actual->rect_atk_bow.left += 50;
        if (dfd->lvl_1->actual->rect_atk_bow.left >= 250)
            dfd->lvl_1->actual->rect_atk_bow.left = 200;
        sfSprite_setTextureRect(dfd->lvl_1->actual->spr_atk_bow,
                                dfd->lvl_1->actual->rect_atk_bow);
        sfClock_restart(dfd->lvl_1->actual->clock_bow);
    }
    if (dfd->lvl_1->actual->cooldown >= 1) {
        dfd->lvl_1->current->hp -= 40;
        sfMusic_stop(dfd->music->bow);
        sfMusic_play(dfd->music->bow);
        if (dfd->spell->def_boum == 1)
            dfd->lvl_1->current->hp -= 40;
        dfd->lvl_1->actual->hit_bow = 1;
        dfd->lvl_1->actual->rect_atk_bow.left = 0;
        sfClock_restart(dfd->lvl_1->actual->clock_tower);
    }
}

void attack_monster_bow(dfd_t *dfd)
{
    set_time_bow_tower(dfd);
    if (dfd->lvl_1->current->pos_mob.x >
        dfd->lvl_1->actual->pos_tower.x - 190 &&
        dfd->lvl_1->current->pos_mob.y >
        dfd->lvl_1->actual->pos_tower.y - 160 &&
        dfd->lvl_1->current->pos_mob.x <
        dfd->lvl_1->actual->pos_tower.x + 284 &&
        dfd->lvl_1->current->pos_mob.y <
        dfd->lvl_1->actual->pos_tower.y + 304 &&
        dfd->lvl_1->current->alive == 0) {
        if (dfd->lvl_1->actual->upgrade != 2)
            launch_attack_bow_tower_lvl1(dfd);
        if (dfd->lvl_1->actual->upgrade == 2)
            launch_attack_bow_tower_lvl2(dfd);
    }
}

