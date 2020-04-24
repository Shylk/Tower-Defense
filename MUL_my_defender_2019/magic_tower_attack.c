/*
** EPITECH PROJECT, 2020
** tower attack
** File description:
** magic tower
*/

#include "include/my.h"

void set_animation_thunder(dfd_t *dfd)
{
    dfd->atk_tower->rect_atk_magic.left = 0;
    dfd->atk_tower->pos_atk_magic = dfd->lvl_1->actual->pos_tower;
    dfd->atk_tower->pos_atk_magic.x += 53;
    dfd->atk_tower->pos_atk_magic.y -= 125;
    sfSprite_setTextureRect
        (dfd->atk_tower->spr_atk_magic, dfd->atk_tower->rect_atk_magic);
    sfSprite_setPosition
        (dfd->atk_tower->spr_atk_magic, dfd->atk_tower->pos_atk_magic);
    sfSprite_setTextureRect
        (dfd->atk_tower->spr_atk_magic2, dfd->atk_tower->rect_atk_magic);
    sfSprite_setPosition
        (dfd->atk_tower->spr_atk_magic2, dfd->atk_tower->pos_atk_magic);
    if (dfd->lvl_1->actual->upgrade != 2) {
        dfd->hud->mana <= 100 ? dfd->hud->mana += 10 : 0;
        dfd->lvl_1->actual->hit_magic = 1;
    }
    if (dfd->lvl_1->actual->upgrade == 2) {
        dfd->hud->mana <= 100 ? dfd->hud->mana += 20 : 0;
        dfd->lvl_1->actual->hit_magic = 1;
    }
}

void set_clock_magic(dfd_t *dfd)
{
    dfd->lvl_1->actual->time_tower =
        sfClock_getElapsedTime(dfd->lvl_1->actual->clock_tower);
    dfd->lvl_1->actual->cooldown =
        dfd->lvl_1->actual->time_tower.microseconds / 1000000.0;
}

void play_sound_and_set_texture_rect(dfd_t *dfd)
{
    if (dfd->lvl_1->actual->cooldown >= 7.1) {
        dfd->atk_tower->rect_atk_magic.left += 42;
        sfSprite_setTextureRect(dfd->atk_tower->spr_atk_magic,
                                dfd->atk_tower->rect_atk_magic);
        sfMusic_stop(dfd->music->magic);
        sfMusic_play(dfd->music->magic);
    }
}

void attack_monster_magic(dfd_t *dfd)
{
    if (dfd->lvl_1->actual->display_tower == 1 &&
        dfd->lvl_1->actual->which_tower == 1) {
        set_clock_magic(dfd);
        if (dfd->lvl_1->actual->cooldown >= 7 &&
            dfd->lvl_1->actual->hit_magic == 0)
            set_animation_thunder(dfd);
        play_sound_and_set_texture_rect(dfd);
        if (dfd->lvl_1->actual->cooldown >= 7) {
            if (dfd->lvl_1->actual->upgrade != 2)
                sfRenderWindow_drawSprite
                    (dfd->window, dfd->atk_tower->spr_atk_magic, NULL);
            if (dfd->lvl_1->actual->upgrade == 2)
                sfRenderWindow_drawSprite
                    (dfd->window, dfd->atk_tower->spr_atk_magic2, NULL);
        }
        if (dfd->lvl_1->actual->cooldown >= 7.2) {
            sfClock_restart(dfd->lvl_1->actual->clock_tower);
            dfd->lvl_1->actual->hit_magic = 0;
        }
    }
}

