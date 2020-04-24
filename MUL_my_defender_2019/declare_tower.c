/*
** EPITECH PROJECT, 2020
** declare
** File description:
** tower
*/

#include "include/my.h"

void declare_tower_2(dfd_t *dfd)
{
    dfd->lvl_1->first = NULL;
    dfd->lvl_1->first = malloc(sizeof(tower_t));
    dfd->lvl_1->actual = dfd->lvl_1->first;
    dfd->lvl_1->actual->txtu_tower =
        sfTexture_createFromFile("sprite/bow1.png", NULL);
    dfd->lvl_1->actual->spr_tower = sfSprite_create();
    dfd->lvl_1->actual->pos_tower.x = 800;
    dfd->lvl_1->actual->pos_tower.y = 200;
    dfd->lvl_1->actual->display_tower = 0;
    dfd->lvl_1->actual->hit_bow = 0;
    dfd->lvl_1->actual->hit_stone = 0;
    dfd->lvl_1->actual->hit_magic = 0;
    dfd->lvl_1->actual->clock_tower = sfClock_create();
    dfd->lvl_1->actual->time_tower =
        sfClock_getElapsedTime(dfd->lvl_1->actual->clock_tower);
    dfd->lvl_1->actual->cooldown =
        dfd->lvl_1->actual->time_tower.microseconds / 1000000.0;
    dfd->lvl_1->actual->clock_stone = sfClock_create();
}

void declare_tower_3(dfd_t *dfd)
{
    dfd->lvl_1->actual->time_stone =
        sfClock_getElapsedTime(dfd->lvl_1->actual->clock_stone);
    dfd->lvl_1->actual->seconds_stone =
        dfd->lvl_1->actual->time_stone.microseconds / 1000000.0;
    dfd->lvl_1->actual->spr_atk_stone = sfSprite_create();
    sfSprite_setTexture(dfd->lvl_1->actual->spr_atk_stone,
                        dfd->atk_tower->atk_stone, sfTrue);
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
}

void declare_tower_4(dfd_t *dfd)
{
    sfSprite_setTextureRect
        (dfd->lvl_1->actual->spr_atk_bow, dfd->lvl_1->actual->rect_atk_bow);
    dfd->lvl_1->actual->upgrade = 0;
    dfd->lvl_1->actual->rect_atk_stone2 = dfd->atk_tower->rect_atk_stone2;
    dfd->lvl_1->actual->rect_atk_bow2 = dfd->atk_tower->rect_atk_bow2;
    dfd->lvl_1->actual->spr_upg = sfSprite_create();
}

void declare_tower_5(dfd_t *dfd)
{
    dfd->lvl_1->actual->next = malloc(sizeof(tower_t));
    dfd->lvl_1->actual = dfd->lvl_1->actual->next;
    dfd->lvl_1->actual->spr_tower = sfSprite_create();
    dfd->lvl_1->actual->display_tower = 0;
    dfd->lvl_1->actual->hit_bow = 0;
    dfd->lvl_1->actual->hit_stone = 0;
    dfd->lvl_1->actual->hit_magic = 0;
    dfd->lvl_1->actual->clock_tower = sfClock_create();
    dfd->lvl_1->actual->time_tower =
        sfClock_getElapsedTime(dfd->lvl_1->actual->clock_tower);
    dfd->lvl_1->actual->cooldown =
        dfd->lvl_1->actual->time_tower.microseconds / 1000000.0;
    dfd->lvl_1->actual->clock_stone = sfClock_create();
    dfd->lvl_1->actual->time_stone =
        sfClock_getElapsedTime(dfd->lvl_1->actual->clock_stone);
    dfd->lvl_1->actual->seconds_stone =
        dfd->lvl_1->actual->time_stone.microseconds / 1000000.0;
    dfd->lvl_1->actual->spr_atk_stone = sfSprite_create();
    sfSprite_setTexture(dfd->lvl_1->actual->spr_atk_stone,
                        dfd->atk_tower->atk_stone, sfTrue);
}

void declare_tower(dfd_t *dfd)
{
    declare_tower_2(dfd);
    declare_tower_3(dfd);
    declare_tower_4(dfd);
    for (int i = 0; i < 9; i++) {
        declare_tower_5(dfd);
        declare_tower_6(dfd);
    }
    dfd->lvl_1->actual = dfd->lvl_1->first;
}
