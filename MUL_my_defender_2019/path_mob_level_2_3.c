/*
** EPITECH PROJECT, 2020
** path
** File description:
** mob
*/

#include "include/my.h"

void path_11(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 11) {
        dfd->lvl_1->current->pos_mob.x -=
            (0.3 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.y +=
            (1.7 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.y >= 1080 &&
            dfd->lvl_1->current->alive == 0) {
            dfd->hud->life -= 10;
            dfd->lvl_1->current->gold = 0;
            dfd->lvl_1->current->alive = 1;
        }
    }
}

void path_10_2(dfd_t *dfd)
{
    if (dfd->lvl_1->current->mob == 3) {
        sfSprite_setTexture
            (dfd->lvl_1->current->spr_mob, dfd->lvl_1->mob_1_l, sfTrue);
        sfSprite_setTextureRect
            (dfd->lvl_1->current->spr_mob, dfd->lvl_1->current->rect_mob);
    }
    if (dfd->lvl_1->current->mob == 4) {
        sfSprite_setTexture
            (dfd->lvl_1->current->spr_mob, dfd->lvl_1->bat_l, sfTrue);
        sfSprite_setTextureRect
            (dfd->lvl_1->current->spr_mob, dfd->lvl_1->current->rect_mob);
    }
    if (dfd->lvl_1->current->mob == 2) {
        sfSprite_setTexture
            (dfd->lvl_1->current->spr_mob, dfd->lvl_1->yeti_l, sfTrue);
        sfSprite_setTextureRect
            (dfd->lvl_1->current->spr_mob, dfd->lvl_1->current->rect_mob);
    }
}

void path_10(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 10) {
        path_10_2(dfd);
        dfd->lvl_1->current->pos_mob.x -=
            (2 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        dfd->lvl_1->current->pos_mob.y +=
            (0.7 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.x <= 760)
            dfd->lvl_1->current->path = 11;
    }
}

void path_9(dfd_t *dfd)
{
    if (dfd->lvl_1->current->path == 9) {
        if (dfd->lvl_1->current->pos_mob.y <= 845) {
            dfd->lvl_1->current->pos_mob.y +=
                (1.4 * ((dfd->lvl_1->current->mob - 0.5) / 2));
            dfd->lvl_1->current->pos_mob.x +=
                (0.7 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        }
        if (dfd->lvl_1->current->pos_mob.y >= 845)
            dfd->lvl_1->current->pos_mob.x +=
                (1.3 * ((dfd->lvl_1->current->mob - 0.5) / 2));
        if (dfd->lvl_1->current->pos_mob.x >= 1745 &&
            dfd->lvl_1->current->alive == 0) {
            dfd->hud->life -= 10;
            dfd->lvl_1->current->gold = 0;
            dfd->lvl_1->current->alive = 1;
        }
    }
}
