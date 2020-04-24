/*
** EPITECH PROJECT, 2020
** path_1
** File description:
** path handling for monsters
*/

#include "include/my.h"

void move_rect_mob_1(dfd_t *dfd)
{
    if (dfd->lvl_1->current->rect_mob.left >=
        (dfd->lvl_1->current->rect_mob.width * 9))
        dfd->lvl_1->current->rect_mob.left = 0;
    else
        dfd->lvl_1->current->rect_mob.left +=
            dfd->lvl_1->current->rect_mob.width;
    sfSprite_setTextureRect
        (dfd->lvl_1->current->spr_mob, dfd->lvl_1->current->rect_mob);
}

void set_rect_1_path_lvl1(dfd_t *dfd)
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

void set_rect_2_path_lvl1(dfd_t *dfd)
{
    if (dfd->lvl_1->current->mob == 3) {
        sfSprite_setTexture
            (dfd->lvl_1->current->spr_mob, dfd->lvl_1->mob_1_r, sfTrue);
        sfSprite_setTextureRect(dfd->lvl_1->current->spr_mob,
            dfd->lvl_1->current->rect_mob);
        dfd->lvl_1->current->pos_mob.x = 630;
    }
    if (dfd->lvl_1->current->mob == 4) {
        sfSprite_setTexture
            (dfd->lvl_1->current->spr_mob, dfd->lvl_1->bat_r, sfTrue);
        sfSprite_setTextureRect(dfd->lvl_1->current->spr_mob,
            dfd->lvl_1->current->rect_mob);
        dfd->lvl_1->current->pos_mob.x = 630;
    }
    if (dfd->lvl_1->current->mob == 2) {
        sfSprite_setTexture
            (dfd->lvl_1->current->spr_mob, dfd->lvl_1->yeti_r, sfTrue);
        sfSprite_setTextureRect
            (dfd->lvl_1->current->spr_mob, dfd->lvl_1->current->rect_mob);
        dfd->lvl_1->current->pos_mob.x = 670;
    }
}

void set_rect_3_path_lvl1(dfd_t *dfd)
{
    if (dfd->lvl_1->current->mob == 3) {
        sfSprite_setTexture
            (dfd->lvl_1->current->spr_mob, dfd->lvl_1->mob_1_l, sfTrue);
        sfSprite_setTextureRect(dfd->lvl_1->current->spr_mob,
                                dfd->lvl_1->current->rect_mob);
    }
    if (dfd->lvl_1->current->mob == 4) {
        sfSprite_setTexture
            (dfd->lvl_1->current->spr_mob, dfd->lvl_1->bat_l, sfTrue);
        sfSprite_setTextureRect(dfd->lvl_1->current->spr_mob,
                                dfd->lvl_1->current->rect_mob);
    }
    if (dfd->lvl_1->current->mob == 2) {
        sfSprite_setTexture
            (dfd->lvl_1->current->spr_mob, dfd->lvl_1->yeti_l, sfTrue);
        sfSprite_setTextureRect(dfd->lvl_1->current->spr_mob,
                                dfd->lvl_1->current->rect_mob);
    }
}

void move_path_mob(dfd_t *dfd)
{
    first_part_path_lvl1(dfd);
    second_part_path_lvl1(dfd);
    part_9_path_lvl1(dfd);
    if (dfd->lvl_1->current->path == 13) {
        part_10_path_lvl1(dfd);
        part_11_path_lvl1(dfd);
    }
    if (dfd->lvl_1->current->path == 15) {
        part_12_path_lvl1(dfd);
    }
    sfSprite_setPosition
        (dfd->lvl_1->current->spr_mob, dfd->lvl_1->current->pos_mob);
}
