/*
** EPITECH PROJECT, 2020
** setting
** File description:
** all function to handle the menu
*/

#include "include/my.h"

void change_set_sound(dfd_t *dfd)
{
    if (dfd->event->x > 1069 && dfd->event->x < 1196 && dfd->event->y > 481
        && dfd->event->y < 528) {
            if (dfd->set->sound_opt == 0) {
                dfd->set->sound_opt = 1;
                sfMusic_setVolume(dfd->music->build, 0);
                sfMusic_setVolume(dfd->music->bow, 0);
                sfMusic_setVolume(dfd->music->stone, 0);
                sfMusic_setVolume(dfd->music->magic, 0);
                sfMusic_setVolume(dfd->music->thief, 0);
            } else {
                dfd->set->sound_opt = 0;
                sfMusic_setVolume(dfd->music->build, dfd->set->volume);
                sfMusic_setVolume(dfd->music->bow, dfd->set->volume);
                sfMusic_setVolume(dfd->music->stone, dfd->set->volume);
                sfMusic_setVolume(dfd->music->magic, dfd->set->volume);
                sfMusic_setVolume(dfd->music->thief, dfd->set->volume);
            }
        }
}

void change_set_volume(dfd_t *dfd)
{
    if (dfd->event->x > 1264 && dfd->event->x < 1322 &&
        dfd->event->y > 639 && dfd->event->y < 698) {
            dfd->set->volume < 10
                ? dfd->set->volume++, dfd->set->pos_vol.x += 21 : 0;
            if (dfd->set->music_opt == 0)
                sfMusic_setVolume(dfd->music->soundtrack, dfd->set->volume);
        }
    if (dfd->event->x > 957 && dfd->event->x < 1019 &&
        dfd->event->y > 639 && dfd->event->y < 698) {
            dfd->set->volume > 0
                ? dfd->set->volume--, dfd->set->pos_vol.x -= 21 : 0;
            if (dfd->set->music_opt == 0)
                sfMusic_setVolume(dfd->music->soundtrack, dfd->set->volume);
        }
    sfSprite_setPosition(dfd->set->spr_vol, dfd->set->pos_vol);
}

void change_setting(dfd_t *dfd)
{
    if (dfd->event->x > 1069 && dfd->event->x < 1196 && dfd->event->y > 397
        && dfd->event->y < 447) {
            if (dfd->set->music_opt == 0) {
                dfd->set->music_opt = 1;
                sfMusic_setVolume(dfd->music->soundtrack, 0);
            } else {
                dfd->set->music_opt = 0;
                sfMusic_setVolume(dfd->music->soundtrack, dfd->set->volume);
            }
        }
    change_set_sound(dfd);
    if (dfd->event->x > 1293 && dfd->event->x < 1395 && dfd->event->y > 251
        && dfd->event->y < 351) {
            dfd->menu->change = 0;
            sfSprite_setTexture(dfd->menu->spr_menu, dfd->menu->menu, sfTrue);
        }
    change_set_volume(dfd);
}
