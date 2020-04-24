/*
** EPITECH PROJECT, 2020
** cursor
** File description:
** cursor management
*/

#include "include/my.h"

void move_cursor(dfd_t *dfd)
{
    if (dfd->event->event.type == sfEvtMouseMoved) {
        dfd->event->x = dfd->event->event.mouseMove.x;
        dfd->event->y = dfd->event->event.mouseMove.y;
    }
    dfd->cursor->pos_mouse.x = dfd->event->x - 16;
    dfd->cursor->pos_mouse.y = dfd->event->y - 2;
    sfSprite_setPosition(dfd->cursor->spr_mouse, dfd->cursor->pos_mouse);
    sfRenderWindow_drawSprite(dfd->window, dfd->cursor->spr_mouse, NULL);
}

void new_cursor(dfd_t *dfd)
{
    sfRenderWindow_setMouseCursorVisible(dfd->window, sfFalse);
    dfd->cursor->mouse = sfTexture_createFromFile("sprite/cursor.png", NULL);
    dfd->cursor->mouse_fire =
        sfTexture_createFromFile("sprite/fire_ball.png", NULL);
    dfd->cursor->mouse_freeze =
        sfTexture_createFromFile("sprite/freeze_ball.png", NULL);
    dfd->cursor->mouse_def =
        sfTexture_createFromFile("sprite/mouse_def.png", NULL);
    dfd->cursor->spr_mouse = sfSprite_create();
    sfSprite_setTexture(dfd->cursor->spr_mouse, dfd->cursor->mouse, sfTrue);
}
