/*
** EPITECH PROJECT, 2020
** menu management
** File description:
** handling the main menu files
*/

#include "include/my.h"

void menu(dfd_t *dfd)
{
    sfRenderWindow_clear(dfd->window, sfBlack);
    sfRenderWindow_drawSprite(dfd->window, dfd->menu->spr_menu, NULL);
    dfd->menu->change == 0 ? different_menu(dfd) : 0;
    dfd->menu->change == 1 ? menu_setting(dfd) : 0;
    dfd->menu->change == 2 ? menu_lvl(dfd) : 0;
    dfd->menu->change == 3 ? menu_htp(dfd) : 0;
    move_cursor(dfd);
    sfRenderWindow_display(dfd->window);
}

void different_menu(dfd_t *dfd)
{
    if (dfd->menu->select == 1)
        sfRenderWindow_drawSprite(dfd->window, dfd->menu->spr_menu_p, NULL);
    if (dfd->menu->select == 2)
        sfRenderWindow_drawSprite(dfd->window, dfd->menu->spr_menu_e, NULL);
    if (dfd->menu->select == 3)
        sfRenderWindow_drawSprite(dfd->window, dfd->menu->spr_menu_s, NULL);
    if (dfd->menu->select == 4)
        sfRenderWindow_drawSprite(dfd->window, dfd->menu->spr_menu_a, NULL);
    if (dfd->menu->select == 5)
        sfRenderWindow_drawSprite(dfd->window, dfd->menu->spr_menu_d, NULL);
    if (dfd->menu->select == 6)
        sfRenderWindow_drawSprite(dfd->window, dfd->menu->spr_menu_h, NULL);
}

void menu_lvl(dfd_t *dfd)
{
    if (dfd->menu->select == 7)
        sfRenderWindow_drawSprite(dfd->window, dfd->lvl->spr_lvl_e, NULL);
    if (dfd->menu->select == 8)
        sfRenderWindow_drawSprite(dfd->window, dfd->lvl->spr_lvl1, NULL);
    if (dfd->menu->select == 9)
        sfRenderWindow_drawSprite(dfd->window, dfd->lvl->spr_lvl2, NULL);
    if (dfd->menu->select == 10)
        sfRenderWindow_drawSprite(dfd->window, dfd->lvl->spr_lvl3, NULL);
    if (dfd->lvl->difficulty == 1)
        sfRenderWindow_drawSprite(dfd->window, dfd->lvl->spr_easy, NULL);
    if (dfd->lvl->difficulty == 2)
        sfRenderWindow_drawSprite(dfd->window, dfd->lvl->spr_normal, NULL);
    if (dfd->lvl->difficulty == 3)
        sfRenderWindow_drawSprite(dfd->window, dfd->lvl->spr_hard, NULL);
    if (dfd->quit == 2)
        sfRenderWindow_drawSprite(dfd->window, dfd->spr_quit, NULL);
}

void menu_setting(dfd_t *dfd)
{
    if (dfd->menu->select == 11)
        sfRenderWindow_drawSprite(dfd->window, dfd->set->spr_set_e, NULL);
    if (dfd->set->music_opt == 1)
        sfRenderWindow_drawSprite(dfd->window, dfd->set->spr_m_off, NULL);
    if (dfd->set->sound_opt == 1)
        sfRenderWindow_drawSprite(dfd->window, dfd->set->spr_s_off, NULL);
    sfRenderWindow_drawSprite(dfd->window, dfd->set->spr_vol, NULL);
    sfRenderWindow_drawSprite(dfd->window, dfd->set->spr_set_c, NULL);
    sfRenderWindow_drawSprite(dfd->window, dfd->set->spr_plus, NULL);
    sfRenderWindow_drawSprite(dfd->window, dfd->set->spr_minus, NULL);
}

void menu_htp(dfd_t *dfd)
{
    if (dfd->menu->select == 12)
        sfRenderWindow_drawSprite(dfd->window, dfd->htp->spr_htp_e, NULL);
}
