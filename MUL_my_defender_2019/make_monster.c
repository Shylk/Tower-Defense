/*
** EPITECH PROJECT, 2020
** mob_make
** File description:
** all function to handle the menu
*/

#include "include/my.h"

void make_bat_2(dfd_t *dfd)
{
    dfd->lvl_1->current->max_hp_mob = 30 + (dfd->lvl->difficulty * 10);
    dfd->lvl_1->current->txtu_dead =
        sfTexture_createFromFile("sprite/bat_die_l.png", NULL);
    dfd->lvl_1->current->spr_dead = sfSprite_create();
    sfSprite_setTexture(dfd->lvl_1->current->spr_dead,
        dfd->lvl_1->current->txtu_dead, sfTrue);
    sfSprite_setTextureRect(dfd->lvl_1->current->spr_dead,
        dfd->lvl_1->current->rect_dead);
    dfd->lvl_1->current->spr_mob = sfSprite_create();
    sfSprite_setTexture(dfd->lvl_1->current->spr_mob,
        dfd->lvl_1->current->txtu_mob, sfTrue);
    dfd->lvl_1->current->mob = 4;
    dfd->lvl_1->current->gold = 2;
}

void make_bat(dfd_t *dfd, int i, int space)
{
    if (i <= 6) {
        dfd->lvl_1->current->txtu_mob =
            sfTexture_createFromFile("sprite/bat_l.png", NULL);
        dfd->lvl_1->current->rect_mob = dfd->lvl_1->rect_bat;
        dfd->lvl_1->current->rect_dead = dfd->lvl_1->rect_bat;
        if (rand() % 2 == 0)
            dfd->lvl_1->current->rect_mob.left += 150;
        if (rand() % 2 == 0)
            dfd->lvl_1->current->rect_mob.left += 75;
        if (rand() % 2 == 0)
            dfd->lvl_1->current->rect_mob.left += 150;
        if (rand() % 2 == 0)
            dfd->lvl_1->current->rect_mob.left += 75;
        make_bat_2(dfd);
        dfd->lvl_1->current->pos_mob.x = 2500 + space * 2;
        dfd->lvl_1->current->pos_mob.y = 180 + (space / 15) - rand() % 15;
    }
}

void make_yeti_2(dfd_t *dfd)
{
    dfd->lvl_1->current->mob = 2;
    dfd->lvl_1->current->gold = 5;
    dfd->lvl_1->current->pos_mob.x =
        2000 + (dfd->lvl->wave * 400) + rand() % 500;
    dfd->lvl_1->current->pos_mob.y = 120 + rand() % 15;
    sfVector2f origin;
    origin.x = 60;
    origin.y = 75;
    sfSprite_setOrigin(dfd->lvl_1->current->spr_mob, origin);
}

void make_yeti(dfd_t *dfd, int i, int space)
{
    if (i >= 14) {
        dfd->lvl_1->current->txtu_mob =
            sfTexture_createFromFile("sprite/yeti_l.png", NULL);
        dfd->lvl_1->current->rect_mob = dfd->lvl_1->rect_yeti;
        dfd->lvl_1->current->rect_dead = dfd->lvl_1->rect_yeti;
        dfd->lvl_1->current->max_hp_mob = 500 * (dfd->lvl->difficulty);
        dfd->lvl_1->current->txtu_dead =
            sfTexture_createFromFile("sprite/yeti_die_l.png", NULL);
        dfd->lvl_1->current->spr_dead = sfSprite_create();
        sfSprite_setTexture(dfd->lvl_1->current->spr_dead,
            dfd->lvl_1->current->txtu_dead, sfTrue);
        sfSprite_setTextureRect(dfd->lvl_1->current->spr_dead,
            dfd->lvl_1->current->rect_dead);
        dfd->lvl_1->current->spr_mob = sfSprite_create();
        sfSprite_setTexture(dfd->lvl_1->current->spr_mob,
            dfd->lvl_1->current->txtu_mob, sfTrue);
        make_yeti_2(dfd);
    }
}
