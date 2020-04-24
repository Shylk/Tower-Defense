/*
** EPITECH PROJECT, 2020
** tower attack
** File description:
** thief tower
*/

#include "include/my.h"

void launch_attack(dfd_t *dfd)
{
    if (dfd->lvl_1->actual->cooldown >= 7 && dfd->lvl->hit_thief != 3) {
        sfSprite_setPosition
            (dfd->atk_tower->spr_atk_thief, dfd->lvl_1->current->pos_mob);
        dfd->lvl_1->current->hp -= dfd->lvl_1->current->max_hp_mob / 2;
        sfMusic_stop(dfd->music->thief);
        sfMusic_play(dfd->music->thief);
        if (dfd->spell->def_boum == 1)
            dfd->lvl_1->current->hp -= dfd->lvl_1->current->hp;
        dfd->lvl_1->current->pos_mob.x = 1900 + rand() % 50;
        dfd->lvl_1->current->pos_mob.y = 100;
        dfd->lvl_1->current->path = 0;
        dfd->lvl->hit_thief++;
        if (dfd->lvl_1->actual->upgrade != 2)
            dfd->lvl->hit_thief = 3;
    }
}

void set_time_for_thief(dfd_t *dfd)
{
    dfd->lvl_1->actual->time_tower = sfClock_getElapsedTime
        (dfd->lvl_1->actual->clock_tower);
    dfd->lvl_1->actual->cooldown =
        dfd->lvl_1->actual->time_tower.microseconds / 1000000.0;
}

void attack_monster_thief(dfd_t *dfd)
{
    set_time_for_thief(dfd);
    if (dfd->lvl_1->current->pos_mob.x >
        dfd->lvl_1->actual->pos_tower.x - 190 &&
        dfd->lvl_1->current->pos_mob.y >
        dfd->lvl_1->actual->pos_tower.y - 160 &&
        dfd->lvl_1->current->pos_mob.x <
        dfd->lvl_1->actual->pos_tower.x + 284 &&
        dfd->lvl_1->current->pos_mob.y <
        dfd->lvl_1->actual->pos_tower.y + 304 &&
        dfd->lvl_1->current->alive == 0) {
        launch_attack(dfd);
        if (dfd->lvl_1->actual->cooldown >= 7.2) {
            sfClock_restart(dfd->lvl_1->actual->clock_tower);
            dfd->lvl->hit_thief = 4;
        }
        if (dfd->lvl_1->actual->cooldown >= 7)
            sfRenderWindow_drawSprite
                (dfd->window, dfd->atk_tower->spr_atk_thief, NULL);
    }
}
