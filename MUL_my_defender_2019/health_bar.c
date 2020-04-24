/*
** EPITECH PROJECT, 2020
** health
** File description:
** bar
*/

#include "include/my.h"

void set_health_bar(dfd_t *dfd)
{
    if (dfd->lvl_1->current->hp >= (dfd->lvl_1->current->max_hp_mob / 1.6) &&
        dfd->lvl_1->current->hp < (dfd->lvl_1->current->max_hp_mob -
                                    (dfd->lvl_1->current->max_hp_mob / 10)))
        dfd->lvl_1->current->txtu_hp =
            sfTexture_createFromFile("sprite/hp_40.png", NULL);
    if (dfd->lvl_1->current->hp >= (dfd->lvl_1->current->max_hp_mob / 10) &&
        dfd->lvl_1->current->hp < (dfd->lvl_1->current->max_hp_mob / 1.6))
        dfd->lvl_1->current->txtu_hp =
            sfTexture_createFromFile("sprite/hp_20.png", NULL);
    if (dfd->lvl_1->current->hp < (dfd->lvl_1->current->max_hp_mob / 10))
        dfd->lvl_1->current->txtu_hp =
            sfTexture_createFromFile("sprite/hp_0.png", NULL);
    sfSprite_setTexture
        (dfd->lvl_1->current->spr_hp, dfd->lvl_1->current->txtu_hp, sfTrue);
}

void set_to_the_right_monster(dfd_t *dfd)
{
    if (dfd->lvl_1->current->mob == 3) {
        dfd->lvl_1->current->pos_hp.x = dfd->lvl_1->current->pos_mob.x - 5;
        dfd->lvl_1->current->pos_hp.y = dfd->lvl_1->current->pos_mob.y - 5;
        dfd->lvl_1->current->pos_hp_txt.x = dfd->lvl_1->current->pos_hp.x + 25;
        dfd->lvl_1->current->pos_hp_txt.y = dfd->lvl_1->current->pos_hp.y - 12;
    }
    if (dfd->lvl_1->current->mob == 4) {
        dfd->lvl_1->current->pos_hp.x = dfd->lvl_1->current->pos_mob.x + 5;
        dfd->lvl_1->current->pos_hp.y = dfd->lvl_1->current->pos_mob.y - 15;
        dfd->lvl_1->current->pos_hp_txt.x = dfd->lvl_1->current->pos_hp.x + 25;
        dfd->lvl_1->current->pos_hp_txt.y = dfd->lvl_1->current->pos_hp.y - 12;
    }
}

void set_to_the_right_monster_2(dfd_t *dfd)
{
    if (dfd->lvl_1->current->mob == 2) {
        dfd->lvl_1->current->pos_hp.x = dfd->lvl_1->current->pos_mob.x + 15;
        dfd->lvl_1->current->pos_hp.y = dfd->lvl_1->current->pos_mob.y - 50;
        dfd->lvl_1->current->pos_hp_txt.x = dfd->lvl_1->current->pos_hp.x + 15;
        dfd->lvl_1->current->pos_hp_txt.y = dfd->lvl_1->current->pos_hp.y - 12;
        if (dfd->lvl_1->current->path >= 3 && dfd->lvl_1->current->path <= 8) {
            dfd->lvl_1->current->pos_hp.x -= 50;
            dfd->lvl_1->current->pos_hp_txt.x -= 58;
        }
    }
    sfSprite_setPosition
        (dfd->lvl_1->current->spr_hp, dfd->lvl_1->current->pos_hp);
    sfText_setString(dfd->lvl_1->current->hp_txt,
                        make_int_a_string(dfd->lvl_1->current->hp));
    sfText_setPosition
        (dfd->lvl_1->current->hp_txt, dfd->lvl_1->current->pos_hp_txt);
}
