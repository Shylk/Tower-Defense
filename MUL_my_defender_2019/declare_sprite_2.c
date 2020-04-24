/*
** EPITECH PROJECT, 2020
** declare
** File description:
** sprite
*/

#include "include/my.h"

void declare_sprite_6(dfd_t *dfd)
{
    dfd->hud->spr_bar_life = sfSprite_create();
    sfSprite_setTexture(dfd->hud->spr_bar_life, dfd->hud->txt_bar, sfTrue);
    dfd->hud->spr_bar_mana = sfSprite_create();
    sfSprite_setTexture(dfd->hud->spr_bar_mana, dfd->hud->txt_bar, sfTrue);
    dfd->hud->spr_health = sfSprite_create();
    sfSprite_setTexture(dfd->hud->spr_health, dfd->hud->txt_health, sfTrue);
    dfd->hud->spr_mana = sfSprite_create();
    sfSprite_setTexture(dfd->hud->spr_mana, dfd->hud->txt_mana, sfTrue);
    dfd->hud->spr_zip = sfSprite_create();
    sfSprite_setTexture(dfd->hud->spr_zip, dfd->hud->txt_zip, sfTrue);
    dfd->hud->spr_heart = sfSprite_create();
    sfSprite_setTexture(dfd->hud->spr_heart, dfd->hud->txt_heart, sfTrue);
    dfd->hud->spr_zone = sfSprite_create();
    sfSprite_setTexture(dfd->hud->spr_zone, dfd->hud->txt_zone, sfTrue);
    dfd->atk_tower->spr_atk_magic = sfSprite_create();
}
