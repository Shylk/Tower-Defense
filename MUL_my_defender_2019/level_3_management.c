/*
** EPITECH PROJECT, 2020
** level 3
** File description:
** third level
*/

#include "include/my.h"

void animation_monsters_lvl3(dfd_t *dfd)
{
    set_clock(dfd);
    if (dfd->lvl_1->seconds_lvl1 > 0.04) {
        for (int i = 0; i < 13 + (dfd->lvl->wave * 2); i++) {
            if (dfd->lvl_1->current->freeze == 0 &&
                dfd->lvl_1->current->alive == 0)
                move_rect_mob_1(dfd);
            when_a_monster_die(dfd);
            dfd->lvl_1->current = dfd->lvl_1->current->next;
        }
        dfd->lvl_1->current = dfd->lvl_1->head;
        sfClock_restart(dfd->lvl_1->clock_lvl1);
    }
    dfd->lvl->remaining = 0;
}

void break_def_and_direction_monsters_lvl3(dfd_t *dfd)
{
    if (dfd->spell->def_boum == 1 && dfd->lvl_1->current->alive == 0) {
        dfd->lvl_1->current->pos_def.x = dfd->lvl_1->current->pos_mob.x - 40;
        dfd->lvl_1->current->pos_def.y = dfd->lvl_1->current->pos_mob.y - 495;
        sfSprite_setPosition
            (dfd->lvl_1->current->spr_def, dfd->lvl_1->current->pos_def);
        sfRenderWindow_drawSprite
            (dfd->window, dfd->lvl_1->current->spr_def, NULL);
    }

    if (dfd->lvl_1->current->alive == 1 &&
        dfd->lvl_1->current->rect_dead.left < 650) {
        set_texture_left_or_right(dfd);
        sfRenderWindow_drawSprite
            (dfd->window, dfd->lvl_1->current->spr_dead, NULL);
    }
}

void wave_and_endgame(dfd_t *dfd)
{
    dfd->lvl->remaining == 0 && dfd->lvl->wave == 2? dfd->end->end = 1 : 0;
    if (dfd->lvl->remaining == 0 && dfd->lvl->wave != 2) {
        declare_list(dfd);
        change_list(dfd);
        dfd->lvl->wave++;
        dfd->lvl->money += 50;
        dfd->hud->mana += 25;
    }
}

void move_ennemies_level_3(dfd_t *dfd)
{
    animation_monsters_lvl3(dfd);
    for (int i = 0; i < 13 + (dfd->lvl->wave * 2); i++) {
        dfd->lvl_1->current->freeze == 0 ? move_path_mob_lvl_3(dfd) : 0;
        dfd->lvl_1->current->alive == 0 ? sfRenderWindow_drawSprite
            (dfd->window, dfd->lvl_1->current->spr_mob, NULL) : 0;
        break_def_and_direction_monsters_lvl3(dfd);
        monsters_health_bar(dfd);
        display_tower_on_map(dfd);
        dfd->lvl_1->current->alive == 0 ? dfd->lvl->remaining += 1 : 0;
        if (dfd->lvl_1->current->gold == 1 && dfd->lvl_1->current->alive == 1) {
            dfd->lvl_1->current->gold = 0;
            dfd->lvl->money += 10;
        }
        dfd->lvl_1->current = dfd->lvl_1->current->next;
    }
    wave_and_endgame(dfd);
    dfd->lvl_1->current = dfd->lvl_1->head;
}

void display_level_3(dfd_t *dfd)
{
    sfRenderWindow_clear(dfd->window, sfBlack);
    sfRenderWindow_drawSprite(dfd->window, dfd->lvl_3->spr_lvl_3_bg, NULL);
    if (dfd->end->end == 0) {
        if (dfd->escp->pause == 0) {
            move_ennemies_level_3(dfd);
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

