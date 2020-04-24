/*
** EPITECH PROJECT, 2020
** declare
** File description:
** int
*/

#include "include/my.h"

void declare_int_2(dfd_t *dfd)
{
    dfd->launch->launch = 0;
    dfd->event->x = 0;
    dfd->event->y = 0;
    dfd->menu->select = 0;
    dfd->menu->change = 0;
    dfd->set->music_opt = 0;
    dfd->set->sound_opt = 0;
    dfd->lvl->difficulty = 1;
    dfd->lvl->temp = 0;
    dfd->lvl->start_game = 0;
    dfd->escp->pause = 0;
    dfd->lvl_1->which_tower_to_display = 0;
    dfd->lvl_1->tower_clicked = 0;
    dfd->lvl_1->display_first_tower = 0;
    dfd->lvl_1->display_second_tower = 0;
    dfd->lvl_1->display_third_tower = 0;
    dfd->lvl_1->display_fourth_tower = 0;
    dfd->lvl_1->display_fifth_tower = 0;
    dfd->lvl_1->display_sixth_tower = 0;
    dfd->lvl_1->display_seventh_tower = 0;
}

void declare_int(dfd_t *dfd)
{
    declare_int_2(dfd);
    dfd->set->volume = 10;
    dfd->spell->select_fire = 0;
    dfd->spell->fire_boum = 0;
    dfd->spell->select_freeze = 0;
    dfd->spell->freeze_boum = 0;
    dfd->spell->select_def = 0;
    dfd->spell->def_boum = 0;
    dfd->lvl->remaining = 0;
    dfd->end->end = 0;
    dfd->lvl_1->number_tower = 0;
    dfd->hud->life = 100;
    dfd->hud->mana = 100;
    dfd->lvl->wave = 1;
    dfd->lvl->money = 0;
    dfd->lvl->hit_thief = 0;
    dfd->lvl->hit_magic = 0;
    dfd->hud->zone = 0;
    dfd->quit = 0;
    dfd->lvl_1->seconds_lvl1 = 0;
}
