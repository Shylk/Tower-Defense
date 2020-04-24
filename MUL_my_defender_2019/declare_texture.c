/*
** EPITECH PROJECT, 2020
** declare
** File description:
** texture
*/

#include "include/my.h"

void declare_texture_2(dfd_t *dfd)
{
    dfd->launch->game = sfTexture_createFromFile("sprite/launch.jpg", NULL);
    dfd->menu->menu = sfTexture_createFromFile("sprite/menutest.jpg", NULL);
    dfd->menu->menu_p = sfTexture_createFromFile("sprite/menu_p.png", NULL);
    dfd->menu->menu_s = sfTexture_createFromFile("sprite/menu_s.png", NULL);
    dfd->menu->menu_e = sfTexture_createFromFile("sprite/menu_e.png", NULL);
    dfd->menu->menu_a = sfTexture_createFromFile("sprite/argh.png", NULL);
    dfd->menu->menu_d = sfTexture_createFromFile("sprite/die.png", NULL);
    dfd->menu->menu_h = sfTexture_createFromFile("sprite/htp_s.png", NULL);
    dfd->set->set = sfTexture_createFromFile("sprite/setting.png", NULL);
    dfd->lvl->lvl = sfTexture_createFromFile("sprite/lvl.png", NULL);
    dfd->htp->htp = sfTexture_createFromFile("sprite/htp_menu.png", NULL);
    dfd->set->set_e = sfTexture_createFromFile("sprite/setting_e.png", NULL);
    dfd->lvl->lvl_e = sfTexture_createFromFile("sprite/lvl_e.jpg", NULL);
    dfd->htp->htp_e = sfTexture_createFromFile("sprite/htp_e.png", NULL);
    dfd->set->off = sfTexture_createFromFile("sprite/off.png", NULL);
    dfd->lvl->easy = sfTexture_createFromFile("sprite/easy.png", NULL);
    dfd->lvl->normal = sfTexture_createFromFile("sprite/normal.png", NULL);
    dfd->lvl->hard = sfTexture_createFromFile("sprite/hard.png", NULL);
    dfd->lvl->lvl1 = sfTexture_createFromFile("sprite/lvl_1.png", NULL);
    dfd->lvl->lvl2 = sfTexture_createFromFile("sprite/lvl_2.png", NULL);
}

void declare_texture_3(dfd_t *dfd)
{
    dfd->lvl->lvl3 = sfTexture_createFromFile("sprite/lvl_3.png", NULL);
    dfd->lvl_1->lvl_1_bg = sfTexture_createFromFile("sprite/bg_lv1.png", NULL);
    dfd->lvl_1->mob_1_l = sfTexture_createFromFile("sprite/mob_1_l.png", NULL);
    dfd->lvl_1->mob_1_r = sfTexture_createFromFile("sprite/mob_1_r.png", NULL);
    dfd->lvl_1->bat_l = sfTexture_createFromFile("sprite/bat_l.png", NULL);
    dfd->lvl_1->bat_r = sfTexture_createFromFile("sprite/bat_r.png", NULL);
    dfd->lvl_1->yeti_l = sfTexture_createFromFile("sprite/yeti_l.png", NULL);
    dfd->lvl_1->yeti_r = sfTexture_createFromFile("sprite/yeti_r.png", NULL);
    dfd->escp->escp = sfTexture_createFromFile("sprite/escp.png", NULL);
    dfd->escp->escp_q = sfTexture_createFromFile("sprite/escp_q.png", NULL);
    dfd->escp->escp_r = sfTexture_createFromFile("sprite/escp_r.png", NULL);
    dfd->escp->escp_h = sfTexture_createFromFile("sprite/escp_h.png", NULL);
    dfd->lvl_1->textu_panel = sfTexture_createFromFile("sprite/hud.png", NULL);
    dfd->lvl_1->txt_hud = sfTexture_createFromFile("sprite/hud_bow.png", NULL);
    dfd->set->set_c = sfTexture_createFromFile("sprite/setting_c.png", NULL);
    dfd->set->vol = sfTexture_createFromFile("sprite/vol.png", NULL);
    dfd->set->plus = sfTexture_createFromFile("sprite/plus.png", NULL);
    dfd->set->minus = sfTexture_createFromFile("sprite/minus.png", NULL);
    dfd->spell->fire = sfTexture_createFromFile("sprite/fire.png", NULL);
    dfd->spell->freeze = sfTexture_createFromFile("sprite/freeze.png", NULL);
}

void declare_texture_4(dfd_t *dfd)
{
    dfd->end->win = sfTexture_createFromFile("sprite/win.png", NULL);
    dfd->end->lose = sfTexture_createFromFile("sprite/lose.png", NULL);
    dfd->hud->txt_bar = sfTexture_createFromFile("sprite/bar.png", NULL);
    dfd->hud->txt_health = sfTexture_createFromFile("sprite/health.png", NULL);
    dfd->hud->txt_mana = sfTexture_createFromFile("sprite/mana.png", NULL);
    dfd->hud->txt_heart = sfTexture_createFromFile("sprite/heart.png", NULL);
    dfd->hud->txt_zip = sfTexture_createFromFile("sprite/zip.png", NULL);
    dfd->hud->txt_zone = sfTexture_createFromFile("sprite/zone.png", NULL);
    dfd->atk_tower->atk_bow =
        sfTexture_createFromFile("sprite/attack_bow.png", NULL);
    dfd->atk_tower->atk_magic =
        sfTexture_createFromFile("sprite/attack_magic.png", NULL);
    dfd->atk_tower->atk_bow2 =
        sfTexture_createFromFile("sprite/attack_bow2.png", NULL);
    dfd->atk_tower->atk_magic2 =
        sfTexture_createFromFile("sprite/attack_magic2.png", NULL);
}

void declare_texture(dfd_t *dfd)
{
    declare_texture_2(dfd);
    declare_texture_3(dfd);
    declare_texture_4(dfd);
    dfd->atk_tower->atk_stone =
        sfTexture_createFromFile("sprite/attack_stone.png", NULL);
    dfd->atk_tower->atk_thief =
        sfTexture_createFromFile("sprite/attack_thief.png", NULL);
    dfd->lvl_2->lvl_2_bg = sfTexture_createFromFile("sprite/bg_lv2.png", NULL);
    dfd->atk_tower->upg_bow =
        sfTexture_createFromFile("sprite/upg_bow.png", NULL);
    dfd->atk_tower->upg_magic =
        sfTexture_createFromFile("sprite/upg_magic.png", NULL);
    dfd->atk_tower->upg_stone =
        sfTexture_createFromFile("sprite/upg_stone.png", NULL);
    dfd->atk_tower->upg_thief =
        sfTexture_createFromFile("sprite/upg_thief.png", NULL);
    dfd->lvl_3->lvl_3_bg = sfTexture_createFromFile("sprite/bg_lv3.png", NULL);
    dfd->txt_quit = sfTexture_createFromFile("sprite/quit.png", NULL);
}
