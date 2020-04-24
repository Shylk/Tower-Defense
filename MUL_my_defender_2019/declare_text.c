/*
** EPITECH PROJECT, 2020
** declare
** File description:
** text
*/

#include "include/my.h"

void declare_text_2(dfd_t *dfd)
{
    sfText_setFont(dfd->lvl->gold, dfd->lvl->font);
    sfText_setString(dfd->lvl->gold, "gold");
    sfText_setColor(dfd->lvl->gold, sfWhite);
    sfText_setCharacterSize(dfd->lvl->gold, 30);
    sfText_setPosition(dfd->lvl->gold, dfd->lvl->pos_gold);
    dfd->lvl->wave_txt = sfText_create();
    dfd->lvl->nb_wave_txt = sfText_create();
    sfText_setFont(dfd->lvl->wave_txt, dfd->lvl->font);
    sfText_setFont(dfd->lvl->nb_wave_txt, dfd->lvl->font);
    sfText_setString(dfd->lvl->wave_txt, "Wave : ");
    sfText_setString(dfd->lvl->nb_wave_txt, make_int_a_string(dfd->lvl->wave));
    sfText_setCharacterSize(dfd->lvl->wave_txt, 100);
    sfText_setCharacterSize(dfd->lvl->nb_wave_txt, 100);
    sfText_setPosition(dfd->lvl->wave_txt, dfd->lvl->pos_wave);
    sfText_setPosition(dfd->lvl->nb_wave_txt, dfd->lvl->pos_nb_wave);
}

void declare_text(dfd_t *dfd)
{
    dfd->lvl->font = sfFont_createFromFile("font/edo.ttf");
    dfd->lvl->remaining_txt = sfText_create();
    sfText_setFont(dfd->lvl->remaining_txt, dfd->lvl->font);
    sfText_setString(dfd->lvl->remaining_txt, "remaining");
    sfText_setColor(dfd->lvl->remaining_txt, sfWhite);
    sfText_setCharacterSize(dfd->lvl->remaining_txt, 30);
    sfText_setPosition(dfd->lvl->remaining_txt, dfd->lvl->pos_remaining);
    dfd->lvl->font = sfFont_createFromFile("font/edo.ttf");
    dfd->lvl->gold = sfText_create();
    declare_text_2(dfd);
}
