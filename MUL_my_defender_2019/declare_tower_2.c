/*
** EPITECH PROJECT, 2020
** declare
** File description:
** tower 2
*/

#include "include/my.h"

void declare_tower_6(dfd_t *dfd)
{
    dfd->lvl_1->actual->rect_atk_stone = dfd->atk_tower->rect_atk_stone;
    sfSprite_setTextureRect(dfd->lvl_1->actual->spr_atk_stone,
                            dfd->lvl_1->actual->rect_atk_stone);
    dfd->lvl_1->actual->clock_bow = sfClock_create();
    dfd->lvl_1->actual->time_bow =
        sfClock_getElapsedTime(dfd->lvl_1->actual->clock_bow);
    dfd->lvl_1->actual->seconds_bow =
        dfd->lvl_1->actual->time_bow.microseconds / 1000000.0;
    dfd->lvl_1->actual->spr_atk_bow = sfSprite_create();
    sfSprite_setTexture
        (dfd->lvl_1->actual->spr_atk_bow, dfd->atk_tower->atk_bow, sfTrue);
    dfd->lvl_1->actual->rect_atk_bow = dfd->atk_tower->rect_atk_bow;
    sfSprite_setTextureRect(dfd->lvl_1->actual->spr_atk_bow,
                            dfd->lvl_1->actual->rect_atk_bow);
    dfd->lvl_1->actual->upgrade = 0;
    dfd->lvl_1->actual->rect_atk_stone2 = dfd->atk_tower->rect_atk_stone2;
    dfd->lvl_1->actual->rect_atk_bow2 = dfd->atk_tower->rect_atk_bow2;
    dfd->lvl_1->actual->spr_upg = sfSprite_create();
}
