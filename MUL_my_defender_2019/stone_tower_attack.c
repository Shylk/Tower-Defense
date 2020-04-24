/*
** EPITECH PROJECT, 2020
** attack tower
** File description:
** stone tower
*/

#include "include/my.h"

void set_clock_stone(dfd_t *dfd)
{
    dfd->lvl_1->actual->time_tower =
        sfClock_getElapsedTime(dfd->lvl_1->actual->clock_tower);
    dfd->lvl_1->actual->cooldown =
        dfd->lvl_1->actual->time_tower.microseconds / 1000000.0;
    dfd->lvl_1->actual->time_stone =
        sfClock_getElapsedTime(dfd->lvl_1->actual->clock_stone);
    dfd->lvl_1->actual->seconds_stone =
        dfd->lvl_1->actual->time_stone.microseconds / 1000000.0;
}

void set_animation_tower_lvl1(dfd_t *dfd)
{
    if (dfd->lvl_1->actual->seconds_stone >= 0.01 &&
        dfd->lvl_1->actual->cooldown >= 2.75 &&
        dfd->lvl_1->actual->hit_stone == 0) {
        dfd->lvl_1->actual->rect_atk_stone.left += 164;
        if (dfd->lvl_1->actual->rect_atk_stone.left >= 1804) {
            dfd->lvl_1->actual->rect_atk_stone.left = 1640;
            sfMusic_stop(dfd->music->stone);
            sfMusic_play(dfd->music->stone);
        }
        sfClock_restart(dfd->lvl_1->actual->clock_stone);
    }
    if (dfd->lvl_1->actual->seconds_stone >= 0.1 &&
        dfd->lvl_1->actual->hit_stone == 1) {
        dfd->lvl_1->actual->rect_atk_stone.left -= 164;
        if (dfd->lvl_1->actual->rect_atk_stone.left <= 0)
            dfd->lvl_1->actual->rect_atk_stone.left = 0;
        sfSprite_setTextureRect(dfd->lvl_1->actual->spr_tower,
                                dfd->lvl_1->actual->rect_atk_stone);
        sfClock_restart(dfd->lvl_1->actual->clock_stone);
    }
}

void set_animation_tower_lvl2(dfd_t *dfd)
{
    if (dfd->lvl_1->actual->seconds_stone >= 0.01 &&
        dfd->lvl_1->actual->cooldown >= 2.75 &&
        dfd->lvl_1->actual->hit_stone == 0) {
        dfd->lvl_1->actual->rect_atk_stone.left += 163;
        if (dfd->lvl_1->actual->rect_atk_stone.left >= 1630) {
            dfd->lvl_1->actual->rect_atk_stone.left = 1467;
            sfMusic_stop(dfd->music->stone);
            sfMusic_play(dfd->music->stone);
        }
        sfClock_restart(dfd->lvl_1->actual->clock_stone);
    }
    if (dfd->lvl_1->actual->seconds_stone >= 0.1 &&
        dfd->lvl_1->actual->hit_stone == 1) {
        dfd->lvl_1->actual->rect_atk_stone.left -= 163;
        if (dfd->lvl_1->actual->rect_atk_stone.left <= 0)
            dfd->lvl_1->actual->rect_atk_stone.left = 0;
        sfSprite_setTextureRect(dfd->lvl_1->actual->spr_tower,
                                dfd->lvl_1->actual->rect_atk_stone);
        sfClock_restart(dfd->lvl_1->actual->clock_stone);
    }
}

void launch_attack_stone(dfd_t *dfd)
{
    if (dfd->lvl_1->current->pos_mob.x >
        dfd->lvl_1->actual->pos_tower.x - 190 &&
        dfd->lvl_1->current->pos_mob.y >
        dfd->lvl_1->actual->pos_tower.y - 160 &&
        dfd->lvl_1->current->pos_mob.x <
        dfd->lvl_1->actual->pos_tower.x + 284 &&
        dfd->lvl_1->current->pos_mob.y <
        dfd->lvl_1->actual->pos_tower.y + 304 &&
        dfd->lvl_1->current->alive == 0 && dfd->lvl_1->current->mob != 4) {
        if (dfd->lvl_1->actual->upgrade != 2) {
            dfd->lvl_1->current->hp -= 15;
            dfd->spell->def_boum == 1 ? dfd->lvl_1->current->hp -= 15 : 0;
            dfd->lvl_1->current->freeze = 1;
        }
        if (dfd->lvl_1->actual->upgrade == 2) {
            dfd->lvl_1->current->hp -= 25;
            dfd->spell->def_boum == 1 ? dfd->lvl_1->current->hp -= 25 : 0;
            dfd->lvl_1->current->freeze = 1;
        }
    }
}

void attack_monster_stone(dfd_t *dfd)
{
    if (dfd->lvl_1->actual->display_tower == 1 &&
        dfd->lvl_1->actual->which_tower == 2) {
        set_clock_stone(dfd);
        if (dfd->lvl_1->actual->upgrade != 2)
            set_animation_tower_lvl1(dfd);
        if (dfd->lvl_1->actual->upgrade == 2)
            set_animation_tower_lvl2(dfd);
        if (dfd->lvl_1->actual->cooldown >= 3 &&
            dfd->lvl_1->actual->hit_stone == 0) {
            for (int j = 0; j < 13 + (dfd->lvl->wave * 2); j++) {
                launch_attack_stone(dfd);
                dfd->lvl_1->current = dfd->lvl_1->current->next;
            }
            dfd->lvl_1->current = dfd->lvl_1->head;
            dfd->lvl_1->actual->hit_stone = 1;
        }
        if (dfd->lvl_1->actual->cooldown >= 4)
            set_animation_down(dfd);
    }
}
