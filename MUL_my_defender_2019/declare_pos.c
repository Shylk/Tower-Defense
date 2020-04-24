/*
** EPITECH PROJECT, 2020
** declare
** File description:
** pos
*/

#include "include/my.h"

void declare_pos_2(dfd_t *dfd)
{
    dfd->launch->pos_game.x = 640;
    dfd->launch->pos_game.y = 0;
    dfd->menu->pos_menu_p.x = 847;
    dfd->menu->pos_menu_p.y = 714;
    dfd->menu->pos_menu_s.x = 66;
    dfd->menu->pos_menu_s.y = 52;
    dfd->menu->pos_menu_e.x = 1801;
    dfd->menu->pos_menu_e.y = 24;
    dfd->menu->pos_menu_a.x = 146;
    dfd->menu->pos_menu_a.y = 493;
    dfd->menu->pos_menu_d.x = 1485;
    dfd->menu->pos_menu_d.y = 763;
    dfd->menu->pos_menu_h.x = 252;
    dfd->menu->pos_menu_h.y = 46;
    dfd->set->pos_set_e.x = 1296;
    dfd->set->pos_set_e.y = 253;
    dfd->set->pos_m_off.x = 1065;
    dfd->set->pos_m_off.y = 397;
    dfd->set->pos_s_off.x = 1065;
    dfd->set->pos_s_off.y = 478;
}

void declare_pos_3(dfd_t *dfd)
{
    dfd->lvl->pos_lvl_e.x = 1379;
    dfd->lvl->pos_lvl_e.y = 169;
    dfd->lvl->pos_easy.x = 775;
    dfd->lvl->pos_easy.y = 615;
    dfd->lvl->pos_normal.x = 735;
    dfd->lvl->pos_normal.y = 589;
    dfd->lvl->pos_hard.x = 677;
    dfd->lvl->pos_hard.y = 542;
    dfd->lvl->pos_lvl1.x = 601;
    dfd->lvl->pos_lvl1.y = 411;
    dfd->lvl->pos_lvl2.x = 887;
    dfd->lvl->pos_lvl2.y = 410;
    dfd->lvl->pos_lvl3.x = 1177;
    dfd->lvl->pos_lvl3.y = 409;
    dfd->htp->pos_htp_e.x = 1763;
    dfd->htp->pos_htp_e.y = 19;
    dfd->lvl_1->pos_mob_1.x = 1700;
    dfd->lvl_1->pos_mob_1.y = 100;
    dfd->lvl_1->pos_bat.x = 1700;
    dfd->lvl_1->pos_bat.y = 100;
}

void declare_pos_4(dfd_t *dfd)
{
    dfd->lvl_1->pos_yeti.x = 1700;
    dfd->lvl_1->pos_yeti.y = 100;
    dfd->escp->pos_escp.x = 460;
    dfd->escp->pos_escp.y = 235;
    dfd->escp->pos_escp_q.x = 985;
    dfd->escp->pos_escp_q.y = 362;
    dfd->escp->pos_escp_r.x = 745;
    dfd->escp->pos_escp_r.y = 572;
    dfd->escp->pos_escp_h.x = 615;
    dfd->escp->pos_escp_h.y = 360;
    dfd->lvl_1->pos_panel.x = 1750;
    dfd->lvl_1->pos_panel.y = 0;
    dfd->lvl_1->pos_hud_tower.x = 1787;
    dfd->lvl_1->pos_hud_tower.y = 500;
    dfd->set->pos_set_c.x = 747;
    dfd->set->pos_set_c.y = 639;
    dfd->set->pos_vol.x = 991;
    dfd->set->pos_vol.y = 645.2;
    dfd->set->pos_plus.x = 1293;
    dfd->set->pos_plus.y = 668;
}

void declare_pos_5(dfd_t *dfd)
{
    dfd->set->pos_minus.x = 987;
    dfd->set->pos_minus.y = 668;
    dfd->spell->pos_fire.x = 0;
    dfd->spell->pos_fire.y = 0;
    dfd->spell->pos_freeze.x = 0;
    dfd->spell->pos_freeze.y = 0;
    dfd->lvl->pos_remaining.x = 1842;
    dfd->lvl->pos_remaining.y = 938;
    dfd->end->pos_win.x = 640;
    dfd->end->pos_win.y = 140;
    dfd->end->pos_lose.x = 640;
    dfd->end->pos_lose.y = 140;
    dfd->hud->pos_bar_life.x = 60;
    dfd->hud->pos_bar_life.y = 20;
    dfd->hud->pos_bar_mana.x = 60;
    dfd->hud->pos_bar_mana.y = 80;
    dfd->hud->pos_health.x = 66;
    dfd->hud->pos_health.y = 24;
    dfd->hud->pos_mana.x = 66;
    dfd->hud->pos_mana.y = 84;
}

void declare_pos(dfd_t *dfd)
{
    declare_pos_2(dfd);
    declare_pos_3(dfd);
    declare_pos_4(dfd);
    declare_pos_5(dfd);
    dfd->hud->pos_heart.x = 17;
    dfd->hud->pos_heart.y = 22;
    dfd->hud->pos_zip.x = 17;
    dfd->hud->pos_zip.y = 82;
    dfd->lvl->pos_wave.x = 40;
    dfd->lvl->pos_wave.y = 110;
    dfd->lvl->pos_nb_wave.x = 320;
    dfd->lvl->pos_nb_wave.y = 110;
    dfd->lvl->pos_gold.x = 1842;
    dfd->lvl->pos_gold.y = 834;
    dfd->pos_quit.x = 477;
    dfd->pos_quit.y = 226;
}
