/*
** EPITECH PROJECT, 2020
** tower management
** File description:
** tower management for lv1
*/

#include "include/my.h"

void drag_tower(dfd_t *dfd)
{
    dfd->cursor->pos_mouse_tower.x = dfd->cursor->pos_mouse.x - 110;
    dfd->cursor->pos_mouse_tower.y = dfd->cursor->pos_mouse.y - 120;
    sfSprite_setPosition(
        dfd->cursor->spr_cursor_ig, dfd->cursor->pos_mouse_tower);
    sfRenderWindow_drawSprite(dfd->window, dfd->cursor->spr_cursor_ig, NULL);
}

void set_texture_bow_tower_attack(dfd_t *dfd)
{
    dfd->lvl_1->actual->rect_atk_bow.left = 0;
    sfSprite_setTextureRect(dfd->lvl_1->actual->spr_tower,
                            dfd->lvl_1->actual->rect_atk_stone);
    sfClock_restart(dfd->lvl_1->actual->clock_bow);
}

void attack_and_break(dfd_t *dfd)
{
    for (int j = 0; j < 13 + (dfd->lvl->wave * 2); j++) {
        if (dfd->lvl_1->actual->display_tower == 1 &&
            dfd->lvl_1->actual->which_tower == 0) {
            attack_monster_bow(dfd);
            if (dfd->lvl_1->actual->hit_bow == 1) {
                dfd->lvl_1->actual->hit_bow = 0;
                break;
            }
        }
        if (dfd->lvl_1->actual->display_tower == 1 &&
            dfd->lvl_1->actual->which_tower == 3) {
            attack_monster_thief(dfd);
            if (dfd->lvl->hit_thief == 4) {
                dfd->lvl->hit_thief = 0;
                break;
            }
        }
        dfd->lvl_1->current = dfd->lvl_1->current->next;
    }
}

void tower_hit(dfd_t *dfd)
{
    dfd->lvl_1->current = dfd->lvl_1->head;
    dfd->lvl_1->actual = dfd->lvl_1->first;
    if (dfd->lvl_1->actual->seconds_bow >= 0.06)
        set_texture_bow_tower_attack(dfd);
    for (int i = 0; i < 7; i++) {
        attack_monster_stone(dfd);
        attack_monster_magic(dfd);
        attack_and_break(dfd);
        dfd->lvl_1->current = dfd->lvl_1->head;
        dfd->lvl_1->actual = dfd->lvl_1->actual->next;
    }
    dfd->lvl_1->actual = dfd->lvl_1->first;
}

void display_tower_on_map(dfd_t *dfd)
{
    dfd->lvl_1->actual = dfd->lvl_1->first;
    for (int i = 0; i < 7; i++) {
        if (dfd->lvl_1->actual->display_tower == 1) {
            display_tower_if_stone(dfd);
            display_tower_if_bow(dfd);
            if (dfd->lvl_1->actual->upgrade == 1)
                sfRenderWindow_drawSprite
                    (dfd->window, dfd->lvl_1->actual->spr_upg, NULL);
        }
        dfd->lvl_1->actual = dfd->lvl_1->actual->next;
    }
    dfd->lvl_1->actual = dfd->lvl_1->first;
}
