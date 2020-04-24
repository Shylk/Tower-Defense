/*
** EPITECH PROJECT, 2020
** display tower
** File description:
** for tower management
*/

#include "include/my.h"

void display_tower_if_stone(dfd_t *dfd)
{
    if (dfd->lvl_1->actual->which_tower == 2)
        sfSprite_setTextureRect
            (dfd->lvl_1->actual->spr_tower, dfd->lvl_1->actual->rect_atk_stone);
    sfRenderWindow_drawSprite
        (dfd->window, dfd->lvl_1->actual->spr_tower, NULL);
}

void display_tower_if_bow(dfd_t *dfd)
{
    if (dfd->lvl_1->actual->which_tower == 0) {
        dfd->lvl_1->actual->pos_atk_bow =
            dfd->lvl_1->actual->pos_tower;
        dfd->lvl_1->actual->pos_atk_bow.x += 50;
        dfd->lvl_1->actual->pos_atk_bow.y -= 19;
        sfSprite_setPosition
            (dfd->lvl_1->actual->spr_atk_bow, dfd->lvl_1->actual->pos_atk_bow);
        sfRenderWindow_drawSprite
            (dfd->window, dfd->lvl_1->actual->spr_atk_bow, NULL);
    }
}
