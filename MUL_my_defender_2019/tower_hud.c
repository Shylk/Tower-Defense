/*
** EPITECH PROJECT, 2020
** tower hud
** File description:
** tower hud management
*/

#include "include/my.h"

void change_tower_hud(dfd_t *dfd)
{
    if (dfd->lvl->start_game == 1 || dfd->lvl->start_game == 2 ||
        dfd->lvl->start_game == 3) {
        if (dfd->event->x > 1795 && dfd->event->x < 1882 &&
            dfd->event->y > 507 && dfd->event->y < 715 &&
            dfd->event->event.type == sfEvtMouseWheelScrolled &&
            dfd->lvl_1->tower_clicked == 0)
            dfd->lvl_1->which_tower_to_display++;
    }
    if (dfd->lvl_1->which_tower_to_display > 3)
        dfd->lvl_1->which_tower_to_display = 0;
}

void click_tower_hud(dfd_t *dfd)
{
    if ((dfd->lvl->start_game == 1 || dfd->lvl->start_game == 2 ||
        dfd->lvl->start_game == 3) && dfd->escp->pause == 0) {
        if (dfd->event->x > 1795 && dfd->event->x < 1882 &&
            dfd->event->y > 507 && dfd->event->y < 715 &&
            dfd->lvl_1->tower_clicked == 1) {
            dfd->lvl_1->tower_clicked = 0;
        }
        else if (dfd->event->x > 1795 && dfd->event->x < 1882 &&
                dfd->event->y > 507 && dfd->event->y < 715 &&
                dfd->lvl_1->tower_clicked == 0) {
            when_tower_hud_is_clicked(dfd);
        }
    }
}

void display_hud(dfd_t *dfd)
{
    sfRenderWindow_drawSprite(dfd->window, dfd->lvl_1->spr_panel, NULL);
    if (dfd->lvl_1->which_tower_to_display == 0)
        dfd->lvl_1->txt_hud = sfTexture_createFromFile
            ("sprite/hud_bow.png", NULL);
    if (dfd->lvl_1->which_tower_to_display == 1 && dfd->lvl->wave != 1)
        dfd->lvl_1->txt_hud = sfTexture_createFromFile
            ("sprite/hud_magic.jpg", NULL);
    if (dfd->lvl_1->which_tower_to_display == 1 && dfd->lvl->wave == 1)
        dfd->lvl_1->txt_hud = sfTexture_createFromFile
            ("sprite/hud_magic_block.png", NULL);
    if (dfd->lvl_1->which_tower_to_display == 2)
        dfd->lvl_1->txt_hud = sfTexture_createFromFile
            ("sprite/hud_stone.jpg", NULL);
    if (dfd->lvl_1->which_tower_to_display == 3)
        dfd->lvl_1->txt_hud = sfTexture_createFromFile
            ("sprite/hud_thief.png", NULL);
    check_bar_mana(dfd);
    check_bar_life(dfd);
    set_and_draw_hud(dfd);
    if (dfd->hud->zone == 1)
        sfRenderWindow_drawSprite(dfd->window, dfd->hud->spr_zone, NULL);
}

void check_bar_mana(dfd_t *dfd)
{
    if (dfd->hud->mana >= 0 && dfd->hud->mana < 10)
        dfd->hud->rect_mana.width = 0;
    if (dfd->hud->mana >= 10 && dfd->hud->mana < 20)
        dfd->hud->rect_mana.width = 37;
    if (dfd->hud->mana >= 20 && dfd->hud->mana < 30)
        dfd->hud->rect_mana.width = 74;
    if (dfd->hud->mana >= 30 && dfd->hud->mana < 40)
        dfd->hud->rect_mana.width = 111;
    if (dfd->hud->mana >= 40 && dfd->hud->mana < 50)
        dfd->hud->rect_mana.width = 148;
    check_bar_mana_2(dfd);
}

void check_bar_life(dfd_t *dfd)
{
    if (dfd->hud->life >= 0 && dfd->hud->life < 10) {
        dfd->hud->rect_life.width = 0;
        dfd->end->end = 2;
    }
    if (dfd->hud->life >= 10 && dfd->hud->life < 20)
        dfd->hud->rect_life.width = 37;
    if (dfd->hud->life >= 20 && dfd->hud->life < 30)
        dfd->hud->rect_life.width = 74;
    if (dfd->hud->life >= 30 && dfd->hud->life < 40)
        dfd->hud->rect_life.width = 111;
    if (dfd->hud->life >= 40 && dfd->hud->life < 50)
        dfd->hud->rect_life.width = 148;
    check_bar_life_2(dfd);
}
