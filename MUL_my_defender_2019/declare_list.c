/*
** EPITECH PROJECT, 2020
** declare
** File description:
** list monster
*/

#include "include/my.h"

void declare_list_2(dfd_t *dfd)
{
    dfd->lvl_1->current->next = malloc(sizeof(node_t));
    dfd->lvl_1->current = dfd->lvl_1->current->next;
    dfd->lvl_1->current->rect_mob = dfd->lvl_1->rect_mob_1;
    dfd->lvl_1->current->rect_dead = dfd->lvl_1->rect_mob_1;
    dfd->lvl_1->current->txtu_mob =
        sfTexture_createFromFile("sprite/mob_1_l.png", NULL);
    dfd->lvl_1->current->rect_mob = dfd->lvl_1->rect_mob_1;
    if (rand() % 2 == 0)
        dfd->lvl_1->current->rect_mob.left += 130;
    if (rand() % 2 == 0)
        dfd->lvl_1->current->rect_mob.left += 65;
    dfd->lvl_1->current->max_hp_mob = 50;
    dfd->lvl_1->current->txtu_dead =
        sfTexture_createFromFile("sprite/mob_die_l.png", NULL);
    dfd->lvl_1->current->spr_dead = sfSprite_create();
    sfSprite_setTexture(dfd->lvl_1->current->spr_dead,
                        dfd->lvl_1->current->txtu_dead, sfTrue);
    sfSprite_setTextureRect
        (dfd->lvl_1->current->spr_dead, dfd->lvl_1->current->rect_dead);
}

void declare_list_3(dfd_t *dfd, int space)
{
    dfd->lvl_1->current->spr_mob = sfSprite_create();
    sfSprite_setTexture(dfd->lvl_1->current->spr_mob,
                        dfd->lvl_1->current->txtu_mob, sfTrue);
    dfd->lvl_1->current->mob = 3;
    dfd->lvl_1->current->pos_mob.x = 1300 + space * 2;
    dfd->lvl_1->current->pos_mob.y = 120 + (space / 15) - rand() % 15;
    dfd->lvl_1->current->hp = dfd->lvl_1->current->max_hp_mob;
    dfd->lvl_1->current->alive = 0;
    dfd->lvl_1->current->path = 0;
    dfd->lvl_1->current->freeze = 0;
    dfd->lvl_1->current->txtu_def =
        sfTexture_createFromFile("sprite/def.png", NULL);
    dfd->lvl_1->current->spr_def = sfSprite_create();
    sfSprite_setTexture(dfd->lvl_1->current->spr_def,
                        dfd->lvl_1->current->txtu_def, sfTrue);
    dfd->lvl_1->current->rect_def.top = 0;
    dfd->lvl_1->current->rect_def.left = 0;
    dfd->lvl_1->current->rect_def.width = 200;
    dfd->lvl_1->current->rect_def.height = 600;
}

void declare_list_4(dfd_t *dfd)
{
    dfd->lvl_1->current->pos_def.x = 0;
    dfd->lvl_1->current->pos_def.y = 0;
    dfd->lvl_1->current->gold = 1;
    dfd->lvl_1->current->txtu_hp =
        sfTexture_createFromFile("sprite/hp_mob.png", NULL);
    dfd->lvl_1->current->spr_hp = sfSprite_create();
    sfSprite_setTexture(dfd->lvl_1->current->spr_hp,
                        dfd->lvl_1->current->txtu_hp, sfTrue);
    dfd->lvl_1->current->pos_hp_txt.x = dfd->lvl_1->current->pos_hp.x + 25;
    dfd->lvl_1->current->pos_hp_txt.y = dfd->lvl_1->current->pos_hp.y - 7;
    dfd->lvl->font = sfFont_createFromFile("font/edo.ttf");
    dfd->lvl_1->current->hp_txt = sfText_create();
    sfText_setFont(dfd->lvl_1->current->hp_txt, dfd->lvl->font);
    sfText_setString(dfd->lvl_1->current->hp_txt, "hp");
    sfText_setColor(dfd->lvl_1->current->hp_txt, sfWhite);
    sfText_setCharacterSize(dfd->lvl_1->current->hp_txt, 25);
    sfText_setPosition
        (dfd->lvl_1->current->hp_txt, dfd->lvl_1->current->pos_hp_txt);
}

void declare_list(dfd_t *dfd)
{
    int space = 65;

    dfd->lvl_1->head = NULL;
    dfd->lvl_1->head = malloc(sizeof(node_t));
    dfd->lvl_1->current = dfd->lvl_1->head;
    prepare_first_node(dfd);
    for (int i = 0; i < 19; i++, space += 65) {
        declare_list_2(dfd);
        declare_list_3(dfd, space);
        declare_list_4(dfd);
    }
    dfd->lvl_1->current = NULL;
    dfd->lvl_1->current = dfd->lvl_1->head;
}
