/*
** EPITECH PROJECT, 2020
** drop tower
** File description:
** management
*/

#include "include/my.h"

void drop_tower(dfd_t *dfd)
{
    if (dfd->lvl->start_game == 1 && dfd->lvl_1->tower_clicked == 1) {
        drop_tower_1_and_2(dfd);
        drop_tower_3_and_4(dfd);
        drop_tower_5_and_6(dfd);
        drop_last_tower(dfd);
        load_pos_tower(dfd);
        sfSprite_setTexture(dfd->lvl_1->actual->spr_tower,
                            dfd->lvl_1->actual->txtu_tower, sfTrue);
        sfSprite_setPosition
            (dfd->lvl_1->actual->spr_tower, dfd->lvl_1->actual->pos_tower);
        dfd->lvl_1->actual = dfd->lvl_1->first;
    }
}

void drop_tower_lv2(dfd_t *dfd)
{
    if (dfd->lvl->start_game == 2 && dfd->lvl_1->tower_clicked == 1) {
        drop_tower_1_and_2_lv2(dfd);
        drop_tower_3_and_4_lv2(dfd);
        drop_tower_5_and_6_lv2(dfd);
        drop_last_tower_lv2(dfd);
        load_pos_tower_lv2(dfd);
        sfSprite_setTexture(dfd->lvl_1->actual->spr_tower,
                            dfd->lvl_1->actual->txtu_tower, sfTrue);
        sfSprite_setPosition
            (dfd->lvl_1->actual->spr_tower, dfd->lvl_1->actual->pos_tower);
        dfd->lvl_1->actual = dfd->lvl_1->first;
    }
}

void drop_tower_lv3(dfd_t *dfd)
{
    if (dfd->lvl->start_game == 3 && dfd->lvl_1->tower_clicked == 1) {
        drop_tower_1_and_2_lv3(dfd);
        drop_tower_3_and_4_lv3(dfd);
        drop_tower_5_and_6_lv3(dfd);
        drop_last_tower_lv3(dfd);
        load_pos_tower_lv3(dfd);
        sfSprite_setTexture(dfd->lvl_1->actual->spr_tower,
                            dfd->lvl_1->actual->txtu_tower, sfTrue);
        sfSprite_setPosition
            (dfd->lvl_1->actual->spr_tower, dfd->lvl_1->actual->pos_tower);
        dfd->lvl_1->actual = dfd->lvl_1->first;
    }
}
