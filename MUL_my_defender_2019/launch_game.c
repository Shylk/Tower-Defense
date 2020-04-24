/*
** EPITECH PROJECT, 2020
** menu management
** File description:
** all function to handle the menu
*/

#include "include/my.h"

int launch_game(dfd_t *dfd)
{
    if (dfd->clocker->seconds >= 0.1 && dfd->launch->launch == 0) {
        dfd->launch->rct_game.left += 600;
        if (dfd->launch->rct_game.left == 5400)
            dfd->launch->launch = 1;
        sfClock_restart(dfd->clocker->clock);
    }
    if (dfd->clocker->seconds >= 1 && dfd->launch->launch == 1) {
        dfd->launch->rct_game.left += 600;
        dfd->launch->launch = 2;
        sfClock_restart(dfd->clocker->clock);
        return (1);
    }
    sfRenderWindow_clear(dfd->window, sfBlack);
    sfSprite_setTextureRect(dfd->launch->spr_game, dfd->launch->rct_game);
    sfRenderWindow_drawSprite(dfd->window, dfd->launch->spr_game, NULL);
    sfRenderWindow_display(dfd->window);
    return (0);
}

void change_end(dfd_t *dfd)
{
    if (dfd->end->end != 0) {
        if (dfd->event->x > 746 && dfd->event->x < 1171 && dfd->event->y > 822
            && dfd->event->y < 934)
                sfRenderWindow_close(dfd->window);
    }
}

void upgrade_tower_sprite(dfd_t *dfd)
{
    for (int i = 0; i < 7; i++) {
        upgrade_tower(dfd);
        dfd->lvl_1->actual = dfd->lvl_1->actual->next;
    }
    dfd->lvl_1->actual = dfd->lvl_1->first;
}

void event_anti_restart(dfd_t *dfd)
{
    if (dfd->event->x > 806 && dfd->event->x < 1108 && dfd->event->y > 587
        && dfd->event->y < 739 && dfd->menu->change == 2
        && dfd->lvl->start_game == 0)
            sfRenderWindow_close(dfd->window);
}
