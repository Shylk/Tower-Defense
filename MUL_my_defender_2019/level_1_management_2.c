/*
** EPITECH PROJECT, 2020
** level
** File description:
** 1
*/

#include "include/my.h"

void monsters_animation_lvl1(dfd_t *dfd)
{
    set_clock(dfd);
    if (dfd->lvl_1->seconds_lvl1 > 0.04) {
        for (int i = 0; i < 13 + (dfd->lvl->wave * 2); i++) {
            if (dfd->lvl_1->current->freeze == 0 &&
                dfd->lvl_1->current->alive == 0)
                move_rect_mob_1(dfd);
            when_a_monster_die(dfd);
            dfd->lvl_1->current = dfd->lvl_1->current->next;
        }
        dfd->lvl_1->current = dfd->lvl_1->head;
        sfClock_restart(dfd->lvl_1->clock_lvl1);
    }
    dfd->lvl->remaining = 0;
}

void break_def_direction_monster_lvl1(dfd_t *dfd)
{
    if (dfd->spell->def_boum == 1 && dfd->lvl_1->current->alive == 0) {
        dfd->lvl_1->current->pos_def.x = dfd->lvl_1->current->pos_mob.x - 40;
        dfd->lvl_1->current->pos_def.y = dfd->lvl_1->current->pos_mob.y - 495;
        sfSprite_setPosition
            (dfd->lvl_1->current->spr_def, dfd->lvl_1->current->pos_def);
        sfRenderWindow_drawSprite
            (dfd->window, dfd->lvl_1->current->spr_def, NULL);
    }
    if (dfd->lvl_1->current->alive == 1 &&
        dfd->lvl_1->current->rect_dead.left < 650) {
        set_texture_left_or_right(dfd);
        sfRenderWindow_drawSprite
            (dfd->window, dfd->lvl_1->current->spr_dead, NULL);
    }
}

void change_wave_and_endgame_lvl1(dfd_t *dfd)
{
    dfd->lvl->remaining == 0 && dfd->lvl->wave == 2 ? dfd->end->end = 1 : 0;
    if (dfd->lvl->remaining == 0 && dfd->lvl->wave != 2) {
        dfd->lvl->wave++;
        declare_list(dfd);
        change_list(dfd);
        dfd->lvl->money += 50;
        dfd->hud->mana += 25;
    }
}
