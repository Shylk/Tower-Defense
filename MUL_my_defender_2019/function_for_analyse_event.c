/*
** EPITECH PROJECT, 2020
** analyse
** File description:
** event
*/

#include "include/my.h"

void skip_intro(dfd_t *dfd)
{
    if (dfd->launch->launch != 2 &&
        dfd->event->event.type == sfEvtKeyReleased)
        dfd->launch->launch = 2;
}

void in_game_input(dfd_t *dfd)
{
    if (dfd->quit == 2)
        event_anti_restart(dfd);
    change_escp(dfd);
    click_tower_hud(dfd);
    if ((dfd->lvl->start_game == 1 || dfd->lvl->start_game == 2 ||
        dfd->lvl->start_game == 3) && dfd->escp->pause == 0) {
        drop_tower(dfd);
        drop_tower_lv2(dfd);
        drop_tower_lv3(dfd);
        spell(dfd);
        set_pos_fire(dfd);
    }
    change_end(dfd);
}
