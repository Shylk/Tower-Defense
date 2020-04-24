/*
** EPITECH PROJECT, 2019
** game struct
** File description:
** my_def
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/System/Types.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Vector2.h>
#include <stdio.h>
#include <SFML/Audio.h>
#include <SFML/Graphics/FontInfo.h>
#include <unistd.h>
#include <fcntl.h>
#include <SFML/Window/Export.h>

typedef struct launch_x launch_t;
struct launch_x
{
    sfTexture *game;
    sfSprite *spr_game;
    sfIntRect rct_game;
    sfVector2f pos_game;
    int launch;
};

typedef struct menu_x menu_t;
struct menu_x
{
    sfTexture *menu;
    sfSprite *spr_menu;
    sfTexture *menu_p;
    sfSprite *spr_menu_p;
    sfVector2f pos_menu_p;
    sfTexture *menu_e;
    sfSprite *spr_menu_e;
    sfVector2f pos_menu_e;
    sfTexture *menu_s;
    sfSprite *spr_menu_s;
    sfVector2f pos_menu_s;
    sfTexture *menu_a;
    sfSprite *spr_menu_a;
    sfVector2f pos_menu_a;
    sfTexture *menu_d;
    sfSprite *spr_menu_d;
    sfVector2f pos_menu_d;
    sfTexture *menu_h;
    sfSprite *spr_menu_h;
    sfVector2f pos_menu_h;
    int select;
    int change;
};

typedef struct set_x set_t;
struct set_x
{
    sfTexture *set;
    sfTexture *set_e;
    sfSprite *spr_set_e;
    sfVector2f pos_set_e;
    sfTexture *off;
    sfSprite *spr_m_off;
    sfVector2f pos_m_off;
    sfSprite *spr_s_off;
    sfVector2f pos_s_off;
    sfTexture *set_c;
    sfSprite *spr_set_c;
    sfVector2f pos_set_c;
    sfTexture *vol;
    sfSprite *spr_vol;
    sfVector2f pos_vol;
    sfTexture *plus;
    sfSprite *spr_plus;
    sfVector2f pos_plus;
    sfTexture *minus;
    sfSprite *spr_minus;
    sfVector2f pos_minus;
    int music_opt;
    int sound_opt;
    int volume;
};

typedef struct lvl_x lvl_t;
struct lvl_x
{
    sfTexture *lvl;
    sfTexture *lvl_e;
    sfSprite *spr_lvl_e;
    sfVector2f pos_lvl_e;
    sfTexture *easy;
    sfSprite *spr_easy;
    sfVector2f pos_easy;
    sfTexture *normal;
    sfSprite *spr_normal;
    sfVector2f pos_normal;
    sfTexture *hard;
    sfSprite *spr_hard;
    sfVector2f pos_hard;
    sfTexture *lvl1;
    sfSprite *spr_lvl1;
    sfVector2f pos_lvl1;
    sfTexture *lvl2;
    sfSprite *spr_lvl2;
    sfVector2f pos_lvl2;
    sfTexture *lvl3;
    sfSprite *spr_lvl3;
    sfVector2f pos_lvl3;
    int difficulty;
    int temp;
    int remaining;
    int start_game;
    int wave;
    int money;
    int hit_thief;
    int hit_magic;
    sfText *wave_txt;
    sfText *gold;
    sfText *nb_wave_txt;
    sfVector2f pos_wave;
    sfVector2f pos_gold;
    sfVector2f pos_nb_wave;
    sfFont *font;
    sfText *remaining_txt;
    sfVector2f pos_remaining;
    sfMusic *menu;
};

typedef struct htp_x htp_t;
struct htp_x
{
    sfTexture *htp;
    sfTexture *htp_e;
    sfSprite *spr_htp_e;
    sfVector2f pos_htp_e;
};

typedef struct escp_x escp_t;
struct escp_x
{
    sfTexture *escp;
    sfSprite *spr_escp;
    sfVector2f pos_escp;
    sfTexture *escp_q;
    sfSprite *spr_escp_q;
    sfVector2f pos_escp_q;
    sfTexture *escp_r;
    sfSprite *spr_escp_r;
    sfVector2f pos_escp_r;
    sfTexture *escp_h;
    sfSprite *spr_escp_h;
    sfVector2f pos_escp_h;
    int pause;
};

typedef struct clocker_x clocker_t;
struct clocker_x
{
    sfClock *clock;
    sfTime time;
    float seconds;
    float attack_spd;
    sfClock *clock_fire;
    sfTime time_fire;
    float seconds_fire;
    sfClock *clock_freeze;
    sfTime time_freeze;
    float seconds_freeze;
    sfClock *clock_def;
    sfTime time_def;
    float seconds_def;
};

typedef struct event_x event_t;
struct event_x
{
    sfEvent event;
    int x;
    int y;
};

typedef struct cursor_x cursor_t;
struct cursor_x
{
    sfCursor *cursor;
    sfTexture *mouse;
    sfSprite *spr_mouse;
    sfTexture *texture_mouse_ig;
    sfTexture *mouse_fire;
    sfTexture *mouse_freeze;
    sfTexture *mouse_def;
    sfSprite *spr_cursor_ig;
    sfVector2f pos_mouse;
    sfVector2f pos_mouse_tower;
};

typedef struct node node_t;
struct node
{
    sfTexture *txtu_mob;
    sfSprite *spr_mob;
    sfIntRect rect_mob;
    sfVector2f pos_mob;
    sfTexture *txtu_bat;
    sfSprite *spr_bat;
    sfIntRect rect_bat;
    sfVector2f pos_bat;
    sfTexture *txtu_yeti;
    sfSprite *spr_yeti;
    sfIntRect rect_yeti;
    sfVector2f pos_yeti;
    sfTexture *txtu_hp;
    sfSprite *spr_hp;
    sfVector2f pos_hp;
    sfTexture *txtu_def;
    sfSprite *spr_def;
    sfVector2f pos_def;
    sfIntRect rect_def;
    sfTexture *txtu_dead;
    sfSprite *spr_dead;
    sfIntRect rect_dead;
    sfText *hp_txt;
    sfVector2f pos_hp_txt;
    int hp;
    int alive;
    int path;
    int freeze;
    int gold;
    int max_hp_mob;
    int mob;
    struct node *next;
};

typedef struct tower tower_t;
struct tower
{
    sfTexture *txtu_tower;
    sfSprite *spr_tower;
    sfVector2f pos_tower;
    sfSprite *spr_atk_stone;
    sfVector2f pos_atk_stone;
    sfIntRect rect_atk_stone;
    sfIntRect rect_atk_stone2;
    sfSprite *spr_atk_bow;
    sfVector2f pos_atk_bow;
    sfIntRect rect_atk_bow;
    sfIntRect rect_atk_bow2;
    sfSprite *spr_upg;
    sfVector2f pos_upg;
    int display_tower;
    int which_tower;
    int hit_stone;
    int hit_bow;
    int hit_magic;
    int upgrade;
    sfClock *clock_tower;
    sfTime time_tower;
    float cooldown;
    sfClock *clock_stone;
    sfTime time_stone;
    float seconds_stone;
    sfClock *clock_bow;
    sfTime time_bow;
    float seconds_bow;
    struct tower *next;
};

typedef struct lvl_1 lvl_1_t;
struct lvl_1
{
    sfTexture *lvl_1_bg;
    sfSprite *spr_lvl_1_bg;
    sfTexture *mob_1_l;
    sfTexture *mob_1_r;
    sfSprite *spr_mob_1;
    sfVector2f pos_mob_1;
    sfIntRect rect_mob_1;
    sfTexture *bat_l;
    sfTexture *bat_r;
    sfSprite *spr_bat;
    sfVector2f pos_bat;
    sfIntRect rect_bat;
    sfTexture *yeti_l;
    sfTexture *yeti_r;
    sfSprite *spr_yeti;
    sfVector2f pos_yeti;
    sfIntRect rect_yeti;
    sfTexture *textu_panel;
    sfSprite *spr_panel;
    sfVector2f pos_panel;
    sfTexture *txt_hud;
    sfSprite *spr_tow_hud;
    sfVector2f pos_hud_tower;
    sfClock *clock_lvl1;
    sfTime time_lvl1;
    float seconds_lvl1;
    int which_tower_to_display;
    int tower_clicked;
    int display_first_tower;
    int display_second_tower;
    int display_third_tower;
    int display_fourth_tower;
    int display_fifth_tower;
    int display_sixth_tower;
    int display_seventh_tower;
    node_t *head;
    node_t *current;
    tower_t *first;
    tower_t *actual;
    int number_tower;
};

typedef struct lvl_2 lvl_2_t;
struct lvl_2
{
    sfTexture *lvl_2_bg;
    sfSprite *spr_lvl_2_bg;
};

typedef struct lvl_3 lvl_3_t;
struct lvl_3
{
    sfTexture *lvl_3_bg;
    sfSprite *spr_lvl_3_bg;
};

typedef struct spell spell_t;
struct spell
{
    sfTexture *fire;
    sfSprite *spr_fire;
    sfVector2f pos_fire;
    sfIntRect rect_fire;
    int select_fire;
    int fire_boum;
    sfTexture *freeze;
    sfSprite *spr_freeze;
    sfVector2f pos_freeze;
    sfIntRect rect_freeze;
    int select_freeze;
    int freeze_boum;
    int select_def;
    int def_boum;
};

typedef struct end end_t;
struct end
{
    sfTexture *win;
    sfSprite *spr_win;
    sfVector2f pos_win;
    sfTexture *lose;
    sfSprite *spr_lose;
    sfVector2f pos_lose;
    int end;
};

typedef struct hud hud_t;
struct hud
{
    sfTexture *txt_health;
    sfSprite *spr_health;
    sfVector2f pos_health;
    sfTexture *txt_mana;
    sfSprite *spr_mana;
    sfVector2f pos_mana;
    sfTexture *txt_bar;
    sfSprite *spr_bar_life;
    sfSprite *spr_bar_mana;
    sfVector2f pos_bar_life;
    sfVector2f pos_bar_mana;
    sfIntRect rect_life;
    sfIntRect rect_mana;
    sfTexture *txt_heart;
    sfSprite *spr_heart;
    sfVector2f pos_heart;
    sfTexture *txt_zip;
    sfSprite *spr_zip;
    sfVector2f pos_zip;
    sfTexture *txt_zone;
    sfSprite *spr_zone;
    int zone;
    int life;
    int mana;
};

typedef struct atk_tower atk_tower_t;
struct atk_tower
{
    sfTexture *atk_bow;
    sfTexture *atk_bow2;
    sfIntRect rect_atk_bow;
    sfIntRect rect_atk_bow2;
    sfTexture *atk_magic;
    sfTexture *atk_magic2;
    sfSprite *spr_atk_magic;
    sfSprite *spr_atk_magic2;
    sfVector2f pos_atk_magic;
    sfIntRect rect_atk_magic;
    sfTexture *atk_stone;
    sfTexture *atk_stone2;
    sfIntRect rect_atk_stone;
    sfIntRect rect_atk_stone2;
    sfTexture *atk_thief;
    sfSprite *spr_atk_thief;
    sfVector2f pos_atk_thief;
    sfTexture *upg_bow;
    sfTexture *upg_magic;
    sfTexture *upg_stone;
    sfTexture *upg_thief;
};

typedef struct music music_t;
struct music
{
    sfMusic *bow;
    sfMusic *magic;
    sfMusic *stone;
    sfMusic *thief;
    sfMusic *build;
    sfMusic *soundtrack;
};

typedef struct dfd
{
    sfRenderWindow *window;
    sfVideoMode video_mode;
    sfTexture *txt_quit;
    sfSprite *spr_quit;
    sfVector2f pos_quit;
    int quit;
    launch_t *launch;
    menu_t *menu;
    set_t *set;
    lvl_t *lvl;
    htp_t *htp;
    escp_t *escp;
    clocker_t *clocker;
    event_t *event;
    cursor_t *cursor;
    lvl_1_t *lvl_1;
    lvl_2_t *lvl_2;
    lvl_3_t *lvl_3;
    node_t *node;
    tower_t *tower;
    spell_t *spell;
    end_t *end;
    hud_t *hud;
    atk_tower_t *atk_tower;
    music_t *music;
} dfd_t;
