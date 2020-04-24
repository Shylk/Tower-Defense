/*
** EPITECH PROJECT, 2020
** declare
** File description:
** set sprite position
*/

#include "include/my.h"

void set_pos_2(dfd_t *dfd)
{
    sfSprite_setPosition(dfd->launch->spr_game, dfd->launch->pos_game);
    sfSprite_setPosition(dfd->set->spr_set_e, dfd->set->pos_set_e);
    sfSprite_setPosition(dfd->set->spr_m_off, dfd->set->pos_m_off);
    sfSprite_setPosition(dfd->set->spr_s_off, dfd->set->pos_s_off);
    sfSprite_setPosition(dfd->lvl->spr_lvl_e, dfd->lvl->pos_lvl_e);
    sfSprite_setPosition(dfd->lvl->spr_lvl1, dfd->lvl->pos_lvl1);
    sfSprite_setPosition(dfd->lvl->spr_lvl2, dfd->lvl->pos_lvl2);
    sfSprite_setPosition(dfd->lvl->spr_lvl3, dfd->lvl->pos_lvl3);
    sfSprite_setPosition(dfd->lvl->spr_easy, dfd->lvl->pos_easy);
    sfSprite_setPosition(dfd->lvl->spr_normal, dfd->lvl->pos_normal);
    sfSprite_setPosition(dfd->lvl->spr_hard, dfd->lvl->pos_hard);
    sfSprite_setPosition(dfd->htp->spr_htp_e, dfd->htp->pos_htp_e);
    sfSprite_setPosition(dfd->menu->spr_menu_p, dfd->menu->pos_menu_p);
    sfSprite_setPosition(dfd->menu->spr_menu_e, dfd->menu->pos_menu_e);
    sfSprite_setPosition(dfd->menu->spr_menu_s, dfd->menu->pos_menu_s);
    sfSprite_setPosition(dfd->menu->spr_menu_a, dfd->menu->pos_menu_a);
    sfSprite_setPosition(dfd->menu->spr_menu_d, dfd->menu->pos_menu_d);
    sfSprite_setPosition(dfd->menu->spr_menu_h, dfd->menu->pos_menu_h);
    sfSprite_setPosition(dfd->lvl_1->spr_mob_1, dfd->lvl_1->pos_mob_1);
    sfSprite_setPosition(dfd->lvl_1->spr_bat, dfd->lvl_1->pos_bat);
}

void set_pos_3(dfd_t *dfd)
{
    sfSprite_setPosition(dfd->lvl_1->spr_yeti, dfd->lvl_1->pos_yeti);
    sfSprite_setPosition(dfd->escp->spr_escp, dfd->escp->pos_escp);
    sfSprite_setPosition(dfd->escp->spr_escp_q, dfd->escp->pos_escp_q);
    sfSprite_setPosition(dfd->escp->spr_escp_r, dfd->escp->pos_escp_r);
    sfSprite_setPosition(dfd->escp->spr_escp_h, dfd->escp->pos_escp_h);
    sfSprite_setPosition(dfd->lvl_1->spr_panel, dfd->lvl_1->pos_panel);
    sfSprite_setPosition(dfd->lvl_1->spr_tow_hud, dfd->lvl_1->pos_hud_tower);
    sfSprite_setPosition(dfd->set->spr_set_c, dfd->set->pos_set_c);
    sfSprite_setPosition(dfd->set->spr_vol, dfd->set->pos_vol);
    sfSprite_setPosition(dfd->set->spr_plus, dfd->set->pos_plus);
    sfSprite_setPosition(dfd->set->spr_minus, dfd->set->pos_minus);
    sfSprite_setPosition(dfd->spell->spr_fire, dfd->spell->pos_fire);
    sfSprite_setPosition(dfd->spell->spr_freeze, dfd->spell->pos_freeze);
    sfSprite_setPosition(dfd->end->spr_win, dfd->end->pos_win);
    sfSprite_setPosition(dfd->end->spr_lose, dfd->end->pos_lose);
}

void set_pos(dfd_t *dfd)
{
    set_pos_2(dfd);
    set_pos_3(dfd);
    sfSprite_setPosition(dfd->hud->spr_bar_life, dfd->hud->pos_bar_life);
    sfSprite_setPosition(dfd->hud->spr_bar_mana, dfd->hud->pos_bar_mana);
    sfSprite_setPosition(dfd->hud->spr_health, dfd->hud->pos_health);
    sfSprite_setPosition(dfd->hud->spr_mana, dfd->hud->pos_mana);
    sfSprite_setPosition(dfd->hud->spr_heart, dfd->hud->pos_heart);
    sfSprite_setPosition(dfd->hud->spr_zip, dfd->hud->pos_zip);
    sfSprite_setPosition(dfd->spr_quit, dfd->pos_quit);
}
