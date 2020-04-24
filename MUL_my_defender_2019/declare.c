/*
** EPITECH PROJECT, 2019
** game declare
** File description:
** my_defender
*/

#include "include/my.h"

void declare_value(dfd_t *dfd)
{
    declare_struct(dfd);
    declare_int(dfd);
    declare_clock(dfd);
    declare_texture(dfd);
    declare_sprite(dfd);
    declare_pos(dfd);
    set_pos(dfd);
    declare_rect(dfd);
    declare_list(dfd);
    declare_tower(dfd);
    declare_origin(dfd);
    declare_text(dfd);
    declare_music(dfd);
}

void declare_struct(dfd_t *dfd)
{
    dfd->launch = malloc(sizeof(launch_t));
    dfd->menu = malloc(sizeof(menu_t));
    dfd->set = malloc(sizeof(set_t));
    dfd->lvl = malloc(sizeof(lvl_t));
    dfd->htp = malloc(sizeof(htp_t));
    dfd->escp = malloc(sizeof(escp_t));
    dfd->clocker = malloc(sizeof(clocker_t));
    dfd->event = malloc(sizeof(event_t));
    dfd->cursor = malloc(sizeof(cursor_t));
    dfd->lvl_1 = malloc(sizeof(lvl_1_t));
    dfd->lvl_2 = malloc(sizeof(lvl_2_t));
    dfd->lvl_3 = malloc(sizeof(lvl_3_t));
    dfd->spell = malloc(sizeof(spell_t));
    dfd->tower = malloc(sizeof(tower_t));
    dfd->end = malloc(sizeof(end_t));
    dfd->hud = malloc(sizeof(hud_t));
    dfd->atk_tower = malloc(sizeof(atk_tower_t));
    dfd->music = malloc(sizeof(music_t));
}

void declare_clock(dfd_t *dfd)
{
    dfd->clocker->clock = sfClock_create();
    dfd->lvl_1->clock_lvl1 = sfClock_create();
    dfd->clocker->clock_fire = sfClock_create();
    dfd->clocker->clock_freeze = sfClock_create();
    dfd->clocker->clock_def = sfClock_create();
}

void declare_origin(dfd_t *dfd)
{
    sfVector2f origin;
    origin.x = 31;
    origin.y = 30;
    sfSprite_setOrigin(dfd->set->spr_minus, origin);
    sfSprite_setOrigin(dfd->set->spr_plus, origin);
    origin.x = 90;
    origin.y = 500;
    sfSprite_setOrigin(dfd->spell->spr_fire, origin);
    origin.y = 540;
    sfSprite_setOrigin(dfd->spell->spr_freeze, origin);
    origin.x = 250 - 77;
    origin.y = 250 - 87;
    sfSprite_setOrigin(dfd->hud->spr_zone, origin);
}

void declare_music(dfd_t *dfd)
{
    dfd->music->bow = sfMusic_createFromFile("sond/stone.ogg");
    dfd->music->stone = sfMusic_createFromFile("sond/bow.ogg");
    dfd->music->magic = sfMusic_createFromFile("sond/zap.ogg");
    dfd->music->thief = sfMusic_createFromFile("sond/magic.ogg");
    dfd->music->build = sfMusic_createFromFile("sond/build.ogg");
    dfd->music->soundtrack = sfMusic_createFromFile("sond/game_soundtrack.ogg");
    sfMusic_setVolume(dfd->music->soundtrack, dfd->set->volume);
    sfMusic_setVolume(dfd->music->build, dfd->set->volume);
    sfMusic_setVolume(dfd->music->bow, dfd->set->volume);
    sfMusic_setVolume(dfd->music->stone, dfd->set->volume);
    sfMusic_setVolume(dfd->music->magic, dfd->set->volume);
    sfMusic_setVolume(dfd->music->thief, dfd->set->volume);
}
