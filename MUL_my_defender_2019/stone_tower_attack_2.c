/*
** EPITECH PROJECT, 2020
** stone tower attack 2
** File description:
** tower attack
*/

#include "include/my.h"

void set_animation_down(dfd_t *dfd)
{
    for (int j = 0; j < 13 + (dfd->lvl->wave * 2); j++) {
        if (dfd->lvl_1->current->pos_mob.x >
            dfd->lvl_1->actual->pos_tower.x - 190 &&
            dfd->lvl_1->current->pos_mob.y >
            dfd->lvl_1->actual->pos_tower.y - 160 &&
            dfd->lvl_1->current->pos_mob.x <
            dfd->lvl_1->actual->pos_tower.x + 284 &&
            dfd->lvl_1->current->pos_mob.y <
            dfd->lvl_1->actual->pos_tower.y + 304 &&
            dfd->lvl_1->current->alive == 0)
            dfd->lvl_1->current->freeze = 0;
        dfd->lvl_1->current = dfd->lvl_1->current->next;
    }
    dfd->lvl_1->current = dfd->lvl_1->head;
    dfd->lvl_1->actual->hit_stone = 0;
    dfd->atk_tower->rect_atk_stone.left = 0;
    dfd->atk_tower->rect_atk_stone2.left = 0;
    sfClock_restart(dfd->lvl_1->actual->clock_tower);
    sfClock_restart(dfd->lvl_1->actual->clock_stone);
}
