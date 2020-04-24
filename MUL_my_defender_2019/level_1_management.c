/*
** EPITECH PROJECT, 2020
** level1
** File description:
** management lv1
*/

#include "include/my.h"

void pause_ingame(dfd_t *dfd)
{
    if (dfd->escp->pause == 1) {
        sfRenderWindow_drawSprite(dfd->window, dfd->escp->spr_escp, NULL);
        if (dfd->menu->select == 13)
            sfRenderWindow_drawSprite(dfd->window, dfd->escp->spr_escp_q, NULL);
        if (dfd->menu->select == 14)
            sfRenderWindow_drawSprite(dfd->window, dfd->escp->spr_escp_r, NULL);
        if (dfd->menu->select == 15)
            sfRenderWindow_drawSprite(dfd->window, dfd->escp->spr_escp_h, NULL);
    }
}

void set_clock(dfd_t *dfd)
{
    dfd->lvl_1->time_lvl1 = sfClock_getElapsedTime(dfd->lvl_1->clock_lvl1);
    dfd->lvl_1->seconds_lvl1 = dfd->lvl_1->time_lvl1.microseconds / 1000000.0;
}

void move_ennemies_level_1(dfd_t *dfd)
{
    monsters_animation_lvl1(dfd);
    for (int i = 0; i < 13 + (dfd->lvl->wave * 2); i++) {
        dfd->lvl_1->current->freeze == 0 ? move_path_mob(dfd) : 0;
        dfd->lvl_1->current->alive == 0 ? sfRenderWindow_drawSprite
            (dfd->window, dfd->lvl_1->current->spr_mob, NULL) : 0;
        break_def_direction_monster_lvl1(dfd);
        display_tower_on_map(dfd);
        monsters_health_bar(dfd);
        dfd->lvl_1->current->alive == 0 ? dfd->lvl->remaining += 1 : 0;
        if (dfd->lvl_1->current->gold != 0 && dfd->lvl_1->current->alive == 1) {
            dfd->lvl->money += (10 * dfd->lvl_1->current->gold);
            dfd->lvl_1->current->gold = 0;
        }
        dfd->lvl_1->current = dfd->lvl_1->current->next;
    }
    change_wave_and_endgame_lvl1(dfd);
    dfd->lvl_1->current = dfd->lvl_1->head;
}

void display_level_1(dfd_t *dfd)
{
    sfRenderWindow_clear(dfd->window, sfBlack);
    sfRenderWindow_drawSprite(dfd->window, dfd->lvl_1->spr_lvl_1_bg, NULL);
    if (dfd->end->end == 0) {
        if (dfd->escp->pause == 0) {
            move_ennemies_level_1(dfd);
            display_hud(dfd);
            launch_spell(dfd);
            tower_hit(dfd);
        }
        if (dfd->lvl_1->tower_clicked == 1 && dfd->escp->pause == 0)
            drag_tower(dfd);
        pause_ingame(dfd);
    } else {
        sfMusic_stop(dfd->music->soundtrack);
        end_game(dfd);
    }
    move_cursor(dfd);
    sfRenderWindow_display(dfd->window);
}

void end_game(dfd_t *dfd)
{
    if (dfd->end->end == 1)
        sfRenderWindow_drawSprite(dfd->window, dfd->end->spr_win, NULL);
    if (dfd->end->end == 2)
        sfRenderWindow_drawSprite(dfd->window, dfd->end->spr_lose, NULL);
}
