/*
** EPITECH PROJECT, 2020
** start management
** File description:
** all function to handle the menu
*/

#include "include/my.h"

void start_lvl2(dfd_t *dfd)
{
    if (dfd->event->x > 889 && dfd->event->x < 1019 &&
        dfd->event->y > 415 && dfd->event->y < 545 &&
        dfd->menu->change == 2 && dfd->lvl->start_game == 0
        && dfd->quit == 0) {
            sfMusic_stop(dfd->music->soundtrack);
            sfMusic_play(dfd->music->soundtrack);
            sfMusic_setLoop(dfd->music->soundtrack, sfTrue);
            change_list(dfd);
            dfd->hud->life = 125 - (dfd->lvl->difficulty * 25);
            dfd->hud->mana = 100;
            dfd->lvl->wave = 1;
            dfd->lvl->start_game = 2;
            dfd->quit = 1;
            dfd->lvl->money = 350 + (dfd->lvl->difficulty * 100);
    } else
        start_lvl3(dfd);
}

void start_lvl3(dfd_t *dfd)
{
    if (dfd->event->x > 1180 && dfd->event->x < 1303 &&
        dfd->event->y > 415 && dfd->event->y < 551 &&
        dfd->menu->change == 2 && dfd->lvl->start_game == 0 && dfd->quit == 0) {
            sfMusic_stop(dfd->music->soundtrack);
            sfMusic_play(dfd->music->soundtrack);
            sfMusic_setLoop(dfd->music->soundtrack, sfTrue);
            change_list(dfd);
            dfd->hud->life = 125 - (dfd->lvl->difficulty * 25);
            dfd->hud->mana = 100;
            dfd->lvl->wave = 1;
            dfd->lvl->start_game = 3;
            dfd->quit = 1;
            dfd->lvl->money = 350 + (dfd->lvl->difficulty * 100);
    } else if (dfd->quit == 1)
        dfd->quit = 2;
}

void start_game(dfd_t *dfd)
{
    if (dfd->event->x > 609 && dfd->event->x < 733 &&
        dfd->event->y > 415 && dfd->event->y < 545 &&
        dfd->menu->change == 2 && dfd->menu->select == 8 &&
        dfd->lvl->start_game == 0 && dfd->quit == 0) {
            sfMusic_stop(dfd->music->soundtrack);
            sfMusic_play(dfd->music->soundtrack);
            sfMusic_setLoop(dfd->music->soundtrack, sfTrue);
            change_list(dfd);
            dfd->hud->life = 125 - (dfd->lvl->difficulty * 25);
            dfd->hud->mana = 100;
            dfd->lvl->wave = 1;
            dfd->lvl->start_game = 1;
            dfd->quit = 1;
            dfd->lvl->money = 350 + (dfd->lvl->difficulty * 100);
    } else
        start_lvl2(dfd);
}

void change_list_2(dfd_t *dfd)
{
    dfd->lvl_1->current->alive = 0;
    dfd->lvl_1->current->hp = dfd->lvl_1->current->max_hp_mob;
    sfSprite_setTexture(dfd->lvl_1->current->spr_dead,
        dfd->lvl_1->current->txtu_dead, sfTrue);
    sfSprite_setTexture(dfd->lvl_1->current->spr_mob,
        dfd->lvl_1->current->txtu_mob, sfTrue);
    dfd->lvl_1->current = dfd->lvl_1->current->next;
}

void change_list(dfd_t *dfd)
{
    int space = 65;

    for (int i = 0; i < 13 + (dfd->lvl->wave * 2); i++, space += 65) {
        dfd->lvl_1->current->max_hp_mob = 50 + (dfd->lvl->difficulty * 10);
        dfd->lvl_1->current->pos_mob.x = 1300 + space * 2;
        dfd->lvl_1->current->pos_mob.y = 120 + (space / 15) - rand() % 15;
        dfd->lvl_1->current->alive = 0;
        dfd->lvl_1->current->path = 0;
        dfd->lvl_1->current->freeze = 0;
        dfd->lvl_1->current->gold = 1;
        dfd->lvl_1->current->txtu_hp =
            sfTexture_createFromFile("sprite/hp_mob.png", NULL);
        make_bat(dfd, i, space);
        make_yeti(dfd, i, space);
        change_list_2(dfd);
    }
    dfd->lvl_1->current = dfd->lvl_1->head;
}
