/*
** EPITECH PROJECT, 2019
** game destroy
** File description:
** my_runner
*/

#include "include/my.h"

void destroy_clock_and_texture(dfd_t *dfd)
{
    sfClock_destroy(dfd->clocker->clock);
    sfTexture_destroy(dfd->launch->game);
}

void destroy_value(dfd_t *dfd)
{
    destroy_clock_and_texture(dfd);
    destroy_sprite(dfd);
    destroy_music(dfd);
    destroy_struct(dfd);
}

void destroy_sprite(dfd_t *dfd)
{
    sfSprite_destroy(dfd->launch->spr_game);
}

void destroy_music(dfd_t *dfd)
{
    sfMusic_stop(dfd->music->build);
    sfMusic_stop(dfd->music->bow);
    sfMusic_stop(dfd->music->stone);
    sfMusic_stop(dfd->music->magic);
    sfMusic_stop(dfd->music->thief);
    sfMusic_stop(dfd->music->soundtrack);
    sfMusic_destroy(dfd->music->build);
    sfMusic_destroy(dfd->music->bow);
    sfMusic_destroy(dfd->music->stone);
    sfMusic_destroy(dfd->music->magic);
    sfMusic_destroy(dfd->music->thief);
    sfMusic_destroy(dfd->music->soundtrack);
}

void destroy_struct(dfd_t *dfd)
{
    free(dfd->launch);
    free(dfd->clocker);
    free(dfd->event);
    free(dfd);
}
