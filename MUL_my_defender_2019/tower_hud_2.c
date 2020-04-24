/*
** EPITECH PROJECT, 2020
** tower
** File description:
** hud 2
*/

#include "include/my.h"

void set_and_draw_hud(dfd_t *dfd)
{
    sfSprite_setTexture(dfd->lvl_1->spr_tow_hud, dfd->lvl_1->txt_hud, sfTrue);
    sfRenderWindow_drawSprite(dfd->window, dfd->lvl_1->spr_tow_hud, NULL);
    sfText_setString
        (dfd->lvl->remaining_txt, make_int_a_string(dfd->lvl->remaining));
    sfText_setString(dfd->lvl->gold, make_int_a_string(dfd->lvl->money));
    sfText_setString(dfd->lvl->nb_wave_txt, make_int_a_string(dfd->lvl->wave));
    sfRenderWindow_drawText(dfd->window, dfd->lvl->remaining_txt, NULL);
    sfRenderWindow_drawText(dfd->window, dfd->lvl->wave_txt, NULL);
    sfRenderWindow_drawText(dfd->window, dfd->lvl->gold, NULL);
    sfRenderWindow_drawText(dfd->window, dfd->lvl->nb_wave_txt, NULL);
    sfRenderWindow_drawSprite(dfd->window, dfd->hud->spr_bar_life, NULL);
    sfRenderWindow_drawSprite(dfd->window, dfd->hud->spr_bar_mana, NULL);
    sfRenderWindow_drawSprite(dfd->window, dfd->hud->spr_zip, NULL);
    sfRenderWindow_drawSprite(dfd->window, dfd->hud->spr_heart, NULL);
    sfSprite_setTextureRect(dfd->hud->spr_health, dfd->hud->rect_life);
    sfRenderWindow_drawSprite(dfd->window, dfd->hud->spr_health, NULL);
    sfSprite_setTextureRect(dfd->hud->spr_mana, dfd->hud->rect_mana);
    sfRenderWindow_drawSprite(dfd->window, dfd->hud->spr_mana, NULL);
}

void check_bar_mana_2(dfd_t *dfd)
{
    if (dfd->hud->mana >= 50 && dfd->hud->mana < 60)
        dfd->hud->rect_mana.width = 185;
    if (dfd->hud->mana >= 60 && dfd->hud->mana < 70)
        dfd->hud->rect_mana.width = 222;
    if (dfd->hud->mana >= 70 && dfd->hud->mana < 80)
        dfd->hud->rect_mana.width = 259;
    if (dfd->hud->mana >= 80 && dfd->hud->mana < 90)
        dfd->hud->rect_mana.width = 296;
    if (dfd->hud->mana >= 90 && dfd->hud->mana < 100)
        dfd->hud->rect_mana.width = 333;
    if (dfd->hud->mana >= 100) {
        dfd->hud->mana = 100;
        dfd->hud->rect_mana.width = 370;
    }
}

void check_bar_life_2(dfd_t *dfd)
{
    if (dfd->hud->life >= 50 && dfd->hud->life < 60)
        dfd->hud->rect_life.width = 185;
    if (dfd->hud->life >= 60 && dfd->hud->life < 70)
        dfd->hud->rect_life.width = 222;
    if (dfd->hud->life >= 70 && dfd->hud->life < 80)
        dfd->hud->rect_life.width = 259;
    if (dfd->hud->life >= 80 && dfd->hud->life < 90)
        dfd->hud->rect_life.width = 296;
    if (dfd->hud->life >= 90 && dfd->hud->life < 100)
        dfd->hud->rect_life.width = 333;
    if (dfd->hud->life >= 100) {
        dfd->hud->life = 100;
        dfd->hud->rect_life.width = 370;
    }
}

void when_tower_hud_is_clicked_2(dfd_t *dfd)
{
    if (dfd->lvl_1->which_tower_to_display == 2 && dfd->lvl->money >= 220) {
        dfd->cursor->texture_mouse_ig = sfTexture_createFromFile
            ("sprite/stone1.png", NULL);
        dfd->lvl_1->tower_clicked = 1;
    }
    if (dfd->lvl_1->which_tower_to_display == 3 && dfd->lvl->money >= 350) {
        dfd->cursor->texture_mouse_ig = sfTexture_createFromFile
            ("sprite/thief1.png", NULL);
        dfd->lvl_1->tower_clicked = 1;
    }
    sfSprite_setTexture(dfd->cursor->spr_cursor_ig,
                        dfd->cursor->texture_mouse_ig, sfTrue);
}

void when_tower_hud_is_clicked(dfd_t *dfd)
{
    if (dfd->lvl_1->which_tower_to_display == 0 && dfd->lvl->money >= 100) {
        dfd->cursor->texture_mouse_ig = sfTexture_createFromFile
            ("sprite/bow1.png", NULL);
        dfd->lvl_1->tower_clicked = 1;
    }
    if (dfd->lvl_1->which_tower_to_display == 1 && dfd->lvl->money >= 170
        && dfd->lvl->wave != 1) {
            dfd->cursor->texture_mouse_ig = sfTexture_createFromFile
                ("sprite/magic1.png", NULL);
            dfd->lvl_1->tower_clicked = 1;
        }
    when_tower_hud_is_clicked_2(dfd);
}
