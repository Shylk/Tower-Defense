/*
** EPITECH PROJECT, 2020
** upgrade stone thief
** File description:
** all function to handle the menu
*/

#include "include/my.h"

void upgrade_stone(dfd_t *dfd)
{
    if (dfd->lvl_1->actual->upgrade == 1 && dfd->event->x
        > dfd->lvl_1->actual->pos_tower.x && dfd->event->x
        < dfd->lvl_1->actual->pos_tower.x + 164 && dfd->event->y
        > dfd->lvl_1->actual->pos_tower.y && dfd->event->y
        < dfd->lvl_1->actual->pos_tower.y + 177 && dfd->lvl->money
        >= 300) {
            dfd->lvl_1->actual->upgrade = 2;
            sfMusic_stop(dfd->music->build);
            sfMusic_play(dfd->music->build);
            dfd->lvl->money -= 300;
            dfd->lvl_1->actual->txtu_tower =
                sfTexture_createFromFile
                ("sprite/attack_stone2.png", NULL);
            dfd->lvl_1->actual->rect_atk_stone =
                dfd->atk_tower->rect_atk_stone2;
            sfSprite_setTexture(dfd->lvl_1->actual->spr_tower,
                dfd->lvl_1->actual->txtu_tower, sfTrue);
    }
}

void finish_upgrade_stone(dfd_t *dfd)
{
    if (dfd->lvl_1->actual->upgrade == 0 && dfd->event->x
        > dfd->lvl_1->actual->pos_tower.x && dfd->event->x
        < dfd->lvl_1->actual->pos_tower.x + 164 && dfd->event->y
        > dfd->lvl_1->actual->pos_tower.y && dfd->event->y
        < dfd->lvl_1->actual->pos_tower.y + 177) {
            sfSprite_setTexture(dfd->lvl_1->actual->spr_upg,
                dfd->atk_tower->upg_stone, sfTrue);
            sfSprite_setPosition(dfd->lvl_1->actual->spr_upg,
                dfd->lvl_1->actual->pos_tower);
            dfd->lvl_1->actual->upgrade = 1;
        }
    if (dfd->lvl_1->actual->upgrade == 1 && (dfd->event->x
        < dfd->lvl_1->actual->pos_tower.x || dfd->event->x
        > dfd->lvl_1->actual->pos_tower.x + 164 || dfd->event->y
        < dfd->lvl_1->actual->pos_tower.y || dfd->event->y
        > dfd->lvl_1->actual->pos_tower.y + 177)) {
            dfd->lvl_1->actual->upgrade = 0;
        }
}

void upgrade_thief(dfd_t *dfd)
{
    if (dfd->lvl_1->actual->upgrade == 1 && dfd->event->x
        > dfd->lvl_1->actual->pos_tower.x && dfd->event->x
        < dfd->lvl_1->actual->pos_tower.x + 185 && dfd->event->y
        > dfd->lvl_1->actual->pos_tower.y && dfd->event->y
        < dfd->lvl_1->actual->pos_tower.y + 180 && dfd->lvl->money
        >= 420) {
            dfd->lvl_1->actual->upgrade = 2;
            sfMusic_stop(dfd->music->build);
            sfMusic_play(dfd->music->build);
            dfd->lvl->money -= 420;
            dfd->lvl_1->actual->txtu_tower =
                sfTexture_createFromFile
                ("sprite/thief2.png", NULL);
            sfSprite_setTexture(dfd->lvl_1->actual->spr_tower,
                dfd->lvl_1->actual->txtu_tower, sfTrue);
        }
}

void finish_upgrade_thief(dfd_t *dfd)
{
    if (dfd->lvl_1->actual->upgrade == 0 && dfd->event->x
        > dfd->lvl_1->actual->pos_tower.x && dfd->event->x
        < dfd->lvl_1->actual->pos_tower.x + 185 && dfd->event->y
        > dfd->lvl_1->actual->pos_tower.y && dfd->event->y
        < dfd->lvl_1->actual->pos_tower.y + 180) {
            sfSprite_setTexture(dfd->lvl_1->actual->spr_upg,
                dfd->atk_tower->upg_thief, sfTrue);
            sfSprite_setPosition(dfd->lvl_1->actual->spr_upg,
                dfd->lvl_1->actual->pos_tower);
            dfd->lvl_1->actual->upgrade = 1;
        }
    if (dfd->lvl_1->actual->upgrade == 1 && (dfd->event->x
        < dfd->lvl_1->actual->pos_tower.x || dfd->event->x
        > dfd->lvl_1->actual->pos_tower.x + 185 || dfd->event->y
        < dfd->lvl_1->actual->pos_tower.y || dfd->event->y
        > dfd->lvl_1->actual->pos_tower.y + 180)) {
            dfd->lvl_1->actual->upgrade = 0;
        }
}
