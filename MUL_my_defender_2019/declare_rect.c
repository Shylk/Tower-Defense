/*
** EPITECH PROJECT, 2020
** declare
** File description:
** rect
*/

#include "include/my.h"

void declare_rect_2(dfd_t *dfd)
{
    dfd->launch->rct_game.top = 0;
    dfd->launch->rct_game.left = 0;
    dfd->launch->rct_game.width = 600;
    dfd->launch->rct_game.height = 1080;
    dfd->lvl_1->rect_mob_1.top = 0;
    dfd->lvl_1->rect_mob_1.left = 0;
    dfd->lvl_1->rect_mob_1.width = 65;
    dfd->lvl_1->rect_mob_1.height = 62;
    dfd->lvl_1->rect_bat.top = 0;
    dfd->lvl_1->rect_bat.left = 0;
    dfd->lvl_1->rect_bat.width = 75;
    dfd->lvl_1->rect_bat.height = 64;
    dfd->lvl_1->rect_yeti.top = 0;
    dfd->lvl_1->rect_yeti.left = 0;
    dfd->lvl_1->rect_yeti.width = 170;
    dfd->lvl_1->rect_yeti.height = 174;
    dfd->spell->rect_fire.top = 0;
    dfd->spell->rect_fire.left = 0;
    dfd->spell->rect_fire.width = 210;
    dfd->spell->rect_fire.height = 600;
}

void declare_rect_3(dfd_t *dfd)
{
    dfd->spell->rect_freeze.top = 0;
    dfd->spell->rect_freeze.left = 0;
    dfd->spell->rect_freeze.width = 200;
    dfd->spell->rect_freeze.height = 600;
    dfd->hud->rect_life.top = 0;
    dfd->hud->rect_life.left = 0;
    dfd->hud->rect_life.width = 370;
    dfd->hud->rect_life.height = 38;
    dfd->hud->rect_mana.top = 0;
    dfd->hud->rect_mana.left = 0;
    dfd->hud->rect_mana.width = 370;
    dfd->hud->rect_mana.height = 38;
    dfd->atk_tower->rect_atk_bow.top = 0;
    dfd->atk_tower->rect_atk_bow.left = 0;
    dfd->atk_tower->rect_atk_bow.width = 49;
    dfd->atk_tower->rect_atk_bow.height = 59;
    dfd->atk_tower->rect_atk_bow2.top = 0;
    dfd->atk_tower->rect_atk_bow2.left = 0;
    dfd->atk_tower->rect_atk_bow2.width = 50;
    dfd->atk_tower->rect_atk_bow2.height = 46;
}

void declare_rect(dfd_t *dfd)
{
    declare_rect_2(dfd);
    declare_rect_3(dfd);
    dfd->atk_tower->rect_atk_magic.top = 0;
    dfd->atk_tower->rect_atk_magic.left = 0;
    dfd->atk_tower->rect_atk_magic.width = 42;
    dfd->atk_tower->rect_atk_magic.height = 138;
    dfd->atk_tower->rect_atk_stone.top = 0;
    dfd->atk_tower->rect_atk_stone.left = 0;
    dfd->atk_tower->rect_atk_stone.width = 164;
    dfd->atk_tower->rect_atk_stone.height = 177;
    dfd->atk_tower->rect_atk_stone2.top = 0;
    dfd->atk_tower->rect_atk_stone2.left = 0;
    dfd->atk_tower->rect_atk_stone2.width = 163;
    dfd->atk_tower->rect_atk_stone2.height = 188;
    sfSprite_setTextureRect(dfd->launch->spr_game, dfd->launch->rct_game);
    sfSprite_setTextureRect(dfd->spell->spr_fire, dfd->spell->rect_fire);
    sfSprite_setTextureRect(dfd->spell->spr_freeze, dfd->spell->rect_freeze);
    sfSprite_setTextureRect
        (dfd->atk_tower->spr_atk_magic, dfd->atk_tower->rect_atk_magic);
}
