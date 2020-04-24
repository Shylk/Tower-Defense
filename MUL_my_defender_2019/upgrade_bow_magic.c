/*
** EPITECH PROJECT, 2020
** upgrade bow magic
** File description:
** all function to handle the menu
*/

#include "include/my.h"

void upgrade_tower(dfd_t *dfd)
{
    if (dfd->lvl_1->actual->display_tower == 1
        && dfd->lvl_1->actual->which_tower == 0) {
            upgrade_bow(dfd);
            finish_upgrade_bow(dfd);
        }
    if (dfd->lvl_1->actual->display_tower == 1
        && dfd->lvl_1->actual->which_tower == 1) {
            upgrade_magic(dfd);
            finish_upgrade_magic(dfd);
        }
    if (dfd->lvl_1->actual->display_tower == 1
        && dfd->lvl_1->actual->which_tower == 2) {
            upgrade_stone(dfd);
            finish_upgrade_stone(dfd);
        }
    if (dfd->lvl_1->actual->display_tower == 1
        && dfd->lvl_1->actual->which_tower == 3) {
            upgrade_thief(dfd);
            finish_upgrade_thief(dfd);
    }
}

void upgrade_bow(dfd_t *dfd)
{
    if (dfd->lvl_1->actual->upgrade == 1
        && dfd->event->x > dfd->lvl_1->actual->pos_tower.x
        && dfd->event->x < dfd->lvl_1->actual->pos_tower.x + 164
        && dfd->event->y > dfd->lvl_1->actual->pos_tower.y
        && dfd->event->y < dfd->lvl_1->actual->pos_tower.y + 174
        && dfd->lvl->money >= 150) {
            dfd->lvl_1->actual->upgrade = 2;
            sfMusic_stop(dfd->music->build);
            sfMusic_play(dfd->music->build);
            dfd->lvl->money -= 150;
            dfd->lvl_1->actual->txtu_tower =
                sfTexture_createFromFile("sprite/bow2.png", NULL);
            sfSprite_setTexture(dfd->lvl_1->actual->spr_atk_bow,
                dfd->atk_tower->atk_bow2, sfTrue);
            sfSprite_setTexture(dfd->lvl_1->actual->spr_tower,
                dfd->lvl_1->actual->txtu_tower, sfTrue);
            sfSprite_setTextureRect(dfd->lvl_1->actual->spr_atk_bow,
                dfd->lvl_1->actual->rect_atk_bow);
        }
}

void finish_upgrade_bow(dfd_t *dfd)
{
    if (dfd->lvl_1->actual->upgrade == 0
        && dfd->event->x > dfd->lvl_1->actual->pos_tower.x
        && dfd->event->x < dfd->lvl_1->actual->pos_tower.x + 164
        && dfd->event->y > dfd->lvl_1->actual->pos_tower.y
        && dfd->event->y < dfd->lvl_1->actual->pos_tower.y + 174) {
            sfSprite_setTexture(dfd->lvl_1->actual->spr_upg,
                dfd->atk_tower->upg_bow, sfTrue);
            sfSprite_setPosition(dfd->lvl_1->actual->spr_upg,
                dfd->lvl_1->actual->pos_tower);
            dfd->lvl_1->actual->upgrade = 1;
        }
    if (dfd->lvl_1->actual->upgrade == 1
        && (dfd->event->x < dfd->lvl_1->actual->pos_tower.x
        || dfd->event->x > dfd->lvl_1->actual->pos_tower.x + 164
        || dfd->event->y < dfd->lvl_1->actual->pos_tower.y
        || dfd->event->y
        > dfd->lvl_1->actual->pos_tower.y + 174)) {
            dfd->lvl_1->actual->upgrade = 0;
        }
}

void upgrade_magic(dfd_t *dfd)
{
    if (dfd->lvl_1->actual->upgrade == 1
        && dfd->event->x > dfd->lvl_1->actual->pos_tower.x
        && dfd->event->x < dfd->lvl_1->actual->pos_tower.x + 175
        && dfd->event->y > dfd->lvl_1->actual->pos_tower.y
        && dfd->event->y < dfd->lvl_1->actual->pos_tower.y + 188
        && dfd->lvl->money >= 260) {
            dfd->lvl_1->actual->upgrade = 2;
            sfMusic_stop(dfd->music->build);
            sfMusic_play(dfd->music->build);
            dfd->lvl->money -= 260;
            dfd->lvl_1->actual->txtu_tower =
                sfTexture_createFromFile
                ("sprite/magic2.png", NULL);
            sfSprite_setTexture(dfd->lvl_1->actual->spr_tower,
                dfd->lvl_1->actual->txtu_tower, sfTrue);
        }
}

void finish_upgrade_magic(dfd_t *dfd)
{
    if (dfd->lvl_1->actual->upgrade == 0 && dfd->event->x
        > dfd->lvl_1->actual->pos_tower.x && dfd->event->x
        < dfd->lvl_1->actual->pos_tower.x + 175 && dfd->event->y
        > dfd->lvl_1->actual->pos_tower.y && dfd->event->y
        < dfd->lvl_1->actual->pos_tower.y + 188) {
            sfSprite_setTexture(dfd->lvl_1->actual->spr_upg,
                dfd->atk_tower->upg_magic, sfTrue);
            sfSprite_setPosition(dfd->lvl_1->actual->spr_upg,
                dfd->lvl_1->actual->pos_tower);
            dfd->lvl_1->actual->upgrade = 1;
        }
    if (dfd->lvl_1->actual->upgrade == 1
        && (dfd->event->x < dfd->lvl_1->actual->pos_tower.x
        || dfd->event->x > dfd->lvl_1->actual->pos_tower.x + 175
        || dfd->event->y < dfd->lvl_1->actual->pos_tower.y
        || dfd->event->y
        > dfd->lvl_1->actual->pos_tower.y + 188)) {
            dfd->lvl_1->actual->upgrade = 0;
        }
}
