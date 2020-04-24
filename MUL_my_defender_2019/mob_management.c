/*
** EPITECH PROJECT, 2020
** mob
** File description:
** management
*/

#include "include/my.h"

void monsters_health_bar(dfd_t *dfd)
{
    set_health_bar(dfd);
    set_to_the_right_monster(dfd);
    set_to_the_right_monster_2(dfd);
    dfd->lvl_1->current->hp <= 0 ? dfd->lvl_1->current->alive = 1 : 0;
    if (dfd->lvl_1->current->alive == 0) {
        sfRenderWindow_drawSprite
            (dfd->window, dfd->lvl_1->current->spr_hp, NULL);
        sfRenderWindow_drawText
            (dfd->window, dfd->lvl_1->current->hp_txt, NULL);
    }
}

void set_texture_mob_3(dfd_t *dfd)
{
    if (dfd->lvl_1->current->mob == 3) {
        if (dfd->lvl_1->current->path > 0 && dfd->lvl_1->current->path <= 2)
            dfd->lvl_1->current->txtu_dead =
                sfTexture_createFromFile("sprite/mob_die_l.png", NULL);
        if (dfd->lvl_1->current->path > 2 && dfd->lvl_1->current->path <= 8)
            dfd->lvl_1->current->txtu_dead =
                sfTexture_createFromFile("sprite/mob_die_r.png", NULL);
        if (dfd->lvl_1->current->path > 8 && dfd->lvl_1->current->path <= 15)
            dfd->lvl_1->current->txtu_dead =
                sfTexture_createFromFile("sprite/mob_die_l.png", NULL);
    }
}

void set_texture_mob_4(dfd_t *dfd)
{
    if (dfd->lvl_1->current->mob == 4) {
        if (dfd->lvl_1->current->path > 0 && dfd->lvl_1->current->path <= 2)
            dfd->lvl_1->current->txtu_dead =
                sfTexture_createFromFile("sprite/bat_die_l.png", NULL);
        if (dfd->lvl_1->current->path > 2 && dfd->lvl_1->current->path <= 8)
            dfd->lvl_1->current->txtu_dead =
                sfTexture_createFromFile("sprite/bat_die_r.png", NULL);
        if (dfd->lvl_1->current->path > 8 && dfd->lvl_1->current->path <= 15)
            dfd->lvl_1->current->txtu_dead =
                sfTexture_createFromFile("sprite/bat_die_l.png", NULL);
    }
}

void set_texture_left_or_right(dfd_t *dfd)
{
    set_texture_mob_3(dfd);
    set_texture_mob_4(dfd);
    if (dfd->lvl_1->current->mob == 2) {
        if (dfd->lvl_1->current->path > 0 && dfd->lvl_1->current->path <= 2)
            dfd->lvl_1->current->txtu_dead =
                sfTexture_createFromFile("sprite/yeti_die_l.png", NULL);
        if (dfd->lvl_1->current->path > 2 && dfd->lvl_1->current->path <= 8)
            dfd->lvl_1->current->txtu_dead =
                sfTexture_createFromFile("sprite/yeti_die_r.png", NULL);
        if (dfd->lvl_1->current->path > 8 && dfd->lvl_1->current->path <= 15)
            dfd->lvl_1->current->txtu_dead =
                sfTexture_createFromFile("sprite/yeti_die_l.png", NULL);
    }
    sfSprite_setTexture(dfd->lvl_1->current->spr_dead,
                        dfd->lvl_1->current->txtu_dead, sfTrue);
    sfSprite_setTextureRect
        (dfd->lvl_1->current->spr_dead, dfd->lvl_1->current->rect_dead);
}

void when_a_monster_die(dfd_t *dfd)
{
    if (dfd->lvl_1->current->rect_dead.left < 650) {
        if (dfd->lvl_1->current->alive == 1) {
            dfd->lvl_1->current->freeze = 1;
            dfd->lvl_1->current->rect_dead.left +=
                dfd->lvl_1->current->rect_dead.width;
            sfSprite_setTextureRect
                (dfd->lvl_1->current->spr_dead, dfd->lvl_1->current->rect_dead);
            sfSprite_setPosition
                (dfd->lvl_1->current->spr_dead, dfd->lvl_1->current->pos_mob);
        }
    }
}
