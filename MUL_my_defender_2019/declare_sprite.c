/*
** EPITECH PROJECT, 2020
** declare
** File description:
** sprite
*/

#include "include/my.h"

void declare_sprite_2(dfd_t *dfd)
{
    dfd->launch->spr_game = sfSprite_create();
    sfSprite_setTexture(dfd->launch->spr_game, dfd->launch->game, sfTrue);
    dfd->menu->spr_menu = sfSprite_create();
    sfSprite_setTexture(dfd->menu->spr_menu, dfd->menu->menu, sfTrue);
    dfd->menu->spr_menu_p = sfSprite_create();
    sfSprite_setTexture(dfd->menu->spr_menu_p, dfd->menu->menu_p, sfTrue);
    dfd->menu->spr_menu_s = sfSprite_create();
    sfSprite_setTexture(dfd->menu->spr_menu_s, dfd->menu->menu_s, sfTrue);
    dfd->menu->spr_menu_e = sfSprite_create();
    sfSprite_setTexture(dfd->menu->spr_menu_e, dfd->menu->menu_e, sfTrue);
    dfd->menu->spr_menu_a = sfSprite_create();
    sfSprite_setTexture(dfd->menu->spr_menu_a, dfd->menu->menu_a, sfTrue);
    dfd->menu->spr_menu_d = sfSprite_create();
    sfSprite_setTexture(dfd->menu->spr_menu_d, dfd->menu->menu_d, sfTrue);
    dfd->menu->spr_menu_h = sfSprite_create();
    sfSprite_setTexture(dfd->menu->spr_menu_h, dfd->menu->menu_h, sfTrue);
    dfd->set->spr_set_e = sfSprite_create();
    sfSprite_setTexture(dfd->set->spr_set_e, dfd->set->set_e, sfTrue);
}

void declare_sprite_3(dfd_t *dfd)
{
    dfd->set->spr_m_off = sfSprite_create();
    sfSprite_setTexture(dfd->set->spr_m_off, dfd->set->off, sfTrue);
    dfd->set->spr_s_off = sfSprite_create();
    sfSprite_setTexture(dfd->set->spr_s_off, dfd->set->off, sfTrue);
    dfd->lvl->spr_lvl_e = sfSprite_create();
    sfSprite_setTexture(dfd->lvl->spr_lvl_e, dfd->lvl->lvl_e, sfTrue);
    dfd->lvl->spr_easy = sfSprite_create();
    sfSprite_setTexture(dfd->lvl->spr_easy, dfd->lvl->easy, sfTrue);
    dfd->lvl->spr_normal = sfSprite_create();
    sfSprite_setTexture(dfd->lvl->spr_normal, dfd->lvl->normal, sfTrue);
    dfd->lvl->spr_hard = sfSprite_create();
    sfSprite_setTexture(dfd->lvl->spr_hard, dfd->lvl->hard, sfTrue);
    dfd->lvl->spr_lvl1 = sfSprite_create();
    sfSprite_setTexture(dfd->lvl->spr_lvl1, dfd->lvl->lvl1, sfTrue);
    dfd->lvl->spr_lvl2 = sfSprite_create();
    sfSprite_setTexture(dfd->lvl->spr_lvl2, dfd->lvl->lvl2, sfTrue);
    dfd->lvl->spr_lvl3 = sfSprite_create();
    sfSprite_setTexture(dfd->lvl->spr_lvl3, dfd->lvl->lvl3, sfTrue);
    dfd->htp->spr_htp_e = sfSprite_create();
    sfSprite_setTexture(dfd->htp->spr_htp_e, dfd->htp->htp_e, sfTrue);
}

void declare_sprite_4(dfd_t *dfd)
{
    dfd->lvl_1->spr_lvl_1_bg = sfSprite_create();
    sfSprite_setTexture(dfd->lvl_1->spr_lvl_1_bg, dfd->lvl_1->lvl_1_bg, sfTrue);
    dfd->lvl_1->spr_mob_1 = sfSprite_create();
    sfSprite_setTexture(dfd->lvl_1->spr_mob_1, dfd->lvl_1->mob_1_l, sfTrue);
    dfd->lvl_1->spr_bat = sfSprite_create();
    sfSprite_setTexture(dfd->lvl_1->spr_bat, dfd->lvl_1->bat_l, sfTrue);
    dfd->lvl_1->spr_yeti = sfSprite_create();
    sfSprite_setTexture(dfd->lvl_1->spr_yeti, dfd->lvl_1->yeti_l, sfTrue);
    dfd->escp->spr_escp = sfSprite_create();
    sfSprite_setTexture(dfd->escp->spr_escp, dfd->escp->escp, sfTrue);
    dfd->escp->spr_escp_q = sfSprite_create();
    sfSprite_setTexture(dfd->escp->spr_escp_q, dfd->escp->escp_q, sfTrue);
    dfd->escp->spr_escp_r = sfSprite_create();
    sfSprite_setTexture(dfd->escp->spr_escp_r, dfd->escp->escp_r, sfTrue);
    dfd->escp->spr_escp_h = sfSprite_create();
    sfSprite_setTexture(dfd->escp->spr_escp_h, dfd->escp->escp_h, sfTrue);
    dfd->lvl_1->spr_panel = sfSprite_create();
    sfSprite_setTexture(dfd->lvl_1->spr_panel, dfd->lvl_1->textu_panel, sfTrue);
}

void declare_sprite_5(dfd_t *dfd)
{
    dfd->lvl_1->spr_tow_hud = sfSprite_create();
    sfSprite_setTexture(dfd->lvl_1->spr_tow_hud, dfd->lvl_1->txt_hud, sfTrue);
    dfd->cursor->spr_cursor_ig = sfSprite_create();
    dfd->set->spr_set_c = sfSprite_create();
    sfSprite_setTexture(dfd->set->spr_set_c, dfd->set->set_c, sfTrue);
    dfd->set->spr_vol = sfSprite_create();
    sfSprite_setTexture(dfd->set->spr_vol, dfd->set->vol, sfTrue);
    dfd->set->spr_plus = sfSprite_create();
    sfSprite_setTexture(dfd->set->spr_plus, dfd->set->plus, sfTrue);
    dfd->set->spr_minus = sfSprite_create();
    sfSprite_setTexture(dfd->set->spr_minus, dfd->set->minus, sfTrue);
    dfd->spell->spr_fire = sfSprite_create();
    sfSprite_setTexture(dfd->spell->spr_fire, dfd->spell->fire, sfTrue);
    dfd->spell->spr_freeze = sfSprite_create();
    sfSprite_setTexture(dfd->spell->spr_freeze, dfd->spell->freeze, sfTrue);
    dfd->end->spr_win = sfSprite_create();
    sfSprite_setTexture(dfd->end->spr_win, dfd->end->win, sfTrue);
    dfd->end->spr_lose = sfSprite_create();
    sfSprite_setTexture(dfd->end->spr_lose, dfd->end->lose, sfTrue);
}

void declare_sprite(dfd_t *dfd)
{
    declare_sprite_2(dfd);
    declare_sprite_3(dfd);
    declare_sprite_4(dfd);
    declare_sprite_5(dfd);
    declare_sprite_6(dfd);
    sfSprite_setTexture
        (dfd->atk_tower->spr_atk_magic, dfd->atk_tower->atk_magic, sfTrue);
    dfd->atk_tower->spr_atk_magic2 = sfSprite_create();
    sfSprite_setTexture
        (dfd->atk_tower->spr_atk_magic2, dfd->atk_tower->atk_magic2, sfTrue);
    dfd->atk_tower->spr_atk_thief = sfSprite_create();
    sfSprite_setTexture
        (dfd->atk_tower->spr_atk_thief, dfd->atk_tower->atk_thief, sfTrue);
    dfd->lvl_2->spr_lvl_2_bg = sfSprite_create();
    sfSprite_setTexture(dfd->lvl_2->spr_lvl_2_bg, dfd->lvl_2->lvl_2_bg, sfTrue);
    dfd->lvl_3->spr_lvl_3_bg = sfSprite_create();
    sfSprite_setTexture(dfd->lvl_3->spr_lvl_3_bg, dfd->lvl_3->lvl_3_bg, sfTrue);
    dfd->spr_quit = sfSprite_create();
    sfSprite_setTexture(dfd->spr_quit, dfd->txt_quit, sfTrue);
}
