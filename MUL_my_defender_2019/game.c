/*
** EPITECH PROJECT, 2019
** game main
** File description:
** my_defender
*/

#include "include/my.h"

int many_argc(int argc, char **argv, dfd_t *dfd)
{
    if (argc != 1 && argv[1][0] == '-' && argv[1][1] == 'h') {
        write(1, "Finite defender created with CSFML.\n", 34);
        write(1, "\nUSAGE\n", 7);
        write(1, "      ./my_defender\n", 29);
        write(1, "\nOPTIONS\n", 9);
        write(1, "      -h: print the usage and quit.\n", 36);
        write(1, "      -i: launch the game in an infinite mode.\n", 47);
        write(1, "\nUSER INTERACTIONS\n", 19);
        write(1, "      MOUSE CLICK      Click..\n", 31);
        write(1, "      ESCAPE           Pause..\n", 31);
        write(1, "\nINFORMATIONS\n", 14);
        write(1, "\n      HAVE FUN !!\n\n", 20);
        return (-1);
    } else if (argc == 2)
        return (-1);
    return (0);
}

void timed(dfd_t *dfd)
{
    dfd->clocker->time = sfClock_getElapsedTime(dfd->clocker->clock);
    dfd->clocker->seconds = dfd->clocker->time.microseconds / 1000000.0;
}

void analyse_events(dfd_t *dfd)
{
    sfMouseButtonEvent click;
    while (sfRenderWindow_pollEvent(dfd->window, &dfd->event->event)) {
        skip_intro(dfd);
        if (dfd->event->event.type == sfEvtMouseButtonReleased) {
            dfd->event->x = dfd->event->event.mouseButton.x;
            dfd->event->y = dfd->event->event.mouseButton.y;
            change_menu(dfd);
            start_game(dfd);
            in_game_input(dfd);
        }
        check_menu(dfd);
        change_tower_hud(dfd);
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            event_escp(dfd);
        if (dfd->event->event.type == sfEvtClosed)
            sfRenderWindow_close(dfd->window);
    }
}

void game_loop(dfd_t *dfd)
{
    while (sfRenderWindow_isOpen(dfd->window)) {
        timed(dfd);
        analyse_events(dfd);
        if (dfd->launch->launch != 2)
            launch_game(dfd);
        if (dfd->lvl->start_game == 0 && dfd->launch->launch == 2)
            menu(dfd);
        if (dfd->lvl->start_game == 1)
            display_level_1(dfd);
        if (dfd->lvl->start_game == 2)
            display_level_2(dfd);
        if (dfd->lvl->start_game == 3)
            display_level_3(dfd);
    }
}

int main(int argc, char **argv, char **env)
{
    if (!*env)
        return (84);
    dfd_t *dfd = malloc(sizeof(dfd_t));
    if (dfd == NULL)
        return (84);
    if (many_argc(argc, argv, dfd) == -1)
        return (0);
    declare_value(dfd);
    sfVideoMode mode = {1920, 1080, 32};
    dfd->window = sfRenderWindow_create(mode, "Defender", sfDefaultStyle, NULL);
    if (!dfd->window)
        return EXIT_FAILURE;
    sfRenderWindow_setFramerateLimit(dfd->window, 60);
    new_cursor(dfd);
    game_loop(dfd);
    destroy_value(dfd);
    return (0);
}
