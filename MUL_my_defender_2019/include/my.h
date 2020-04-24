/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** contains prototype of all functions in libmy
*/

#include "main.h"

int main(int argc, char **argv, char **env);
int launch_game(dfd_t *dfd);
void menu(dfd_t *dfd);

void timed(dfd_t *dfd);

void analyse_events(dfd_t *dfd);
void skip_intro(dfd_t *dfd);
void in_game_input(dfd_t *dfd);

void check_menu(dfd_t *dfd);
void check_menu_home(dfd_t *dfd);
void check_menu_lvl(dfd_t *dfd);
void hover_level_button(dfd_t *dfd);
void check_menu_set(dfd_t *dfd);
void check_menu_htp(dfd_t *dfd);
void check_escp(dfd_t *dfd);
void spell(dfd_t *dfd);
void unfreeze(dfd_t *dfd);
void check_hit_fire(dfd_t *dfd);
void select_def(dfd_t *dfd);
void select_fire(dfd_t *dfd);
void select_freeze(dfd_t *dfd);
void launch_spell(dfd_t *dfd);
void fire_boum(dfd_t *dfd);
void freeze_boum(dfd_t *dfd);
void def_boum(dfd_t *dfd);
void set_pos_fire(dfd_t *dfd);
void set_pos_freeze(dfd_t *dfd);
void set_pos_def(dfd_t *dfd);
void check_bar_mana(dfd_t *dfd);
void check_bar_life(dfd_t *dfd);
void start_game(dfd_t *dfd);

void change_menu(dfd_t *dfd);
void change_lvl(dfd_t *dfd);
void upgrade_tower_sprite(dfd_t *dfd);
void change_setting(dfd_t *dfd);
void change_htp(dfd_t *dfd);
void event_escp(dfd_t *dfd);
void change_escp(dfd_t *dfd);
void change_end(dfd_t *dfd);
void change_list(dfd_t *dfd);
void make_bat(dfd_t *dfd, int i, int space);
void make_bat_2(dfd_t *dfd);
void make_yeti(dfd_t *dfd, int i, int space);
void make_yeti_2(dfd_t *dfd);
void start_lvl2(dfd_t *dfd);
void start_lvl3(dfd_t *dfd);
void change_list(dfd_t *dfd);
void change_list_2(dfd_t *dfd);
void upgrade_tower(dfd_t *dfd);
void upgrade_bow(dfd_t *dfd);
void finish_upgrade_bow(dfd_t *dfd);
void upgrade_thief(dfd_t *dfd);
void finish_upgrade_thief(dfd_t *dfd);
void upgrade_magic(dfd_t *dfd);
void finish_upgrade_magic(dfd_t *dfd);
void upgrade_stone(dfd_t *dfd);
void finish_upgrade_stone(dfd_t *dfd);
void change_set_sound(dfd_t *dfd);
void change_set_volume(dfd_t *dfd);

void different_menu(dfd_t *dfd);
void menu_lvl(dfd_t *dfd);
void menu_setting(dfd_t *dfd);
void menu_htp(dfd_t *dfd);
void end_game(dfd_t *dfd);
void set_texture_left_or_right(dfd_t *dfd);
void set_clock(dfd_t *dfd);

void new_cursor(dfd_t *dfd);
void move_cursor(dfd_t *dfd);

int many_argc(int argc, char **argv, dfd_t *dfd);

void declare_value(dfd_t *dfd);
void declare_struct(dfd_t *dfd);
void declare_int(dfd_t *dfd);
void declare_clock(dfd_t *dfd);
void declare_texture(dfd_t *dfd);
void declare_sprite(dfd_t *dfd);
void declare_pos(dfd_t *dfd);
void set_pos(dfd_t *dfd);
void declare_rect(dfd_t *dfd);
void declare_list(dfd_t *dfd);
void declare_tower(dfd_t *dfd);
void declare_origin(dfd_t *dfd);
void declare_text(dfd_t *dfd);
void declare_music(dfd_t *dfd);

void destroy_value(dfd_t *dfd);
void destroy_clock(dfd_t *dfd);
void destroy_struct(dfd_t *dfd);
void destroy_texture(dfd_t *dfd);
void destroy_music(dfd_t *dfd);
void destroy_sprite(dfd_t *dfd);
void free_list(dfd_t *dfd);

void move_path_mob(dfd_t *dfd);
void move_rect_mob_1(dfd_t *dfd);
void pause_ingame(dfd_t *dfd);
void display_level_1(dfd_t *dfd);

void event_anti_restart(dfd_t *dfd);

void change_tower_hud(dfd_t *dfd);
void click_tower_hud(dfd_t *dfd);
void drag_tower(dfd_t *dfd);
void drop_tower(dfd_t *dfd);
void drop_tower_1(dfd_t *dfd);
void drop_tower_2(dfd_t *dfd);
void drop_tower_3(dfd_t *dfd);
void drop_tower_4(dfd_t *dfd);
void drop_tower_5(dfd_t *dfd);
void drop_tower_6(dfd_t *dfd);
void drop_tower_7(dfd_t *dfd);
void load_tower(dfd_t *dfd);
void drop_tower_1_and_2(dfd_t *dfd);
void drop_tower_3_and_4(dfd_t *dfd);
void drop_tower_5_and_6(dfd_t *dfd);
void drop_last_tower(dfd_t *dfd);
void display_tower_on_map(dfd_t *dfd);
void display_hud(dfd_t *dfd);
void when_a_monster_die(dfd_t *dfd);
void tower_hit(dfd_t *dfd);
void attack_monster_bow(dfd_t *dfd);

void monsters_health_bar(dfd_t *dfd);

void display_level_2(dfd_t *dfd);
void drop_tower_lv2(dfd_t *dfd);
void drop_tower_1_and_2_lv2(dfd_t *dfd);
void drop_tower_3_and_4_lv2(dfd_t *dfd);
void drop_tower_5_and_6_lv2(dfd_t *dfd);
void drop_last_tower_lv2(dfd_t *dfd);
void load_pos_tower_lv2(dfd_t *dfd);
void move_path_mob_lvl_2(dfd_t *dfd);

void first_part_path_lvl1(dfd_t *dfd);
void second_part_path_lvl1(dfd_t *dfd);
void set_rect_1_path_lvl1(dfd_t *dfd);
void set_rect_2_path_lvl1(dfd_t *dfd);
void set_rect_3_path_lvl1(dfd_t *dfd);
void part_1_path_lvl1(dfd_t *dfd);
void part_2_path_lvl1(dfd_t *dfd);
void part_3_path_lvl1(dfd_t *dfd);
void part_4_path_lvl1(dfd_t *dfd);
void part_5_path_lvl1(dfd_t *dfd);
void part_6_path_lvl1(dfd_t *dfd);
void part_7_path_lvl1(dfd_t *dfd);
void part_8_path_lvl1(dfd_t *dfd);
void part_9_path_lvl1(dfd_t *dfd);
void part_10_path_lvl1(dfd_t *dfd);
void part_11_path_lvl1(dfd_t *dfd);
void part_12_path_lvl1(dfd_t *dfd);

void display_level_3(dfd_t *dfd);
void drop_tower_lv3(dfd_t *dfd);
void drop_tower_1_and_2_lv3(dfd_t *dfd);
void drop_tower_3_and_4_lv3(dfd_t *dfd);
void drop_tower_5_and_6_lv3(dfd_t *dfd);
void drop_last_tower_lv3(dfd_t *dfd);
void load_pos_tower_lv3(dfd_t *dfd);
void move_path_mob_lvl_3(dfd_t *dfd);

void path_11(dfd_t *dfd);
void path_10_2(dfd_t *dfd);
void path_10(dfd_t *dfd);
void path_9(dfd_t *dfd);
void path_8(dfd_t *dfd);
void path_7(dfd_t *dfd);
void path_6(dfd_t *dfd);
void path_4_and_5(dfd_t *dfd);
void path_3_2(dfd_t *dfd);

void lvl_3_path_4(dfd_t *dfd);
void lvl_3_path_4_2(dfd_t *dfd);
void lvl_3_path_5_and_6(dfd_t *dfd);
void lvl_3_path_7_and_8(dfd_t *dfd);
void lvl_3_path_9_and_10(dfd_t *dfd);

void monsters_animation_lvl1(dfd_t *dfd);
void break_def_direction_monster_lvl1(dfd_t *dfd);
void change_wave_and_endgame_lvl1(dfd_t *dfd);

void declare_int(dfd_t *dfd);
void declare_int_2(dfd_t *dfd);
void declare_sprite_6(dfd_t *dfd);

void prepare_first_node(dfd_t *dfd);
void declare_tower_6(dfd_t *dfd);

void load_pos_tower(dfd_t *dfd);
void load_pos_tower_5(dfd_t *dfd);
void load_pos_tower_6(dfd_t *dfd);
void load_pos_tower_7(dfd_t *dfd);

void attack_monster_thief(dfd_t *dfd);
void attack_monster_magic(dfd_t *dfd);
void attack_monster_bow(dfd_t *dfd);
void attack_monster_stone(dfd_t *dfd);
void set_animation_down(dfd_t *dfd);

void display_tower_if_stone(dfd_t *dfd);
void display_tower_if_bow(dfd_t *dfd);

void set_health_bar(dfd_t *dfd);
void set_to_the_right_monster(dfd_t *dfd);
void set_to_the_right_monster_2(dfd_t *dfd);

void load_pos_tower_lv2_5(dfd_t *dfd);
void load_pos_tower_lv2_6(dfd_t *dfd);
void load_pos_tower_lv2_7(dfd_t *dfd);

void load_pos_tower_lv3_5(dfd_t *dfd);
void load_pos_tower_lv3_6(dfd_t *dfd);
void load_pos_tower_lv3_7(dfd_t *dfd);

void set_and_draw_hud(dfd_t *dfd);
void check_bar_mana_2(dfd_t *dfd);
void check_bar_life_2(dfd_t *dfd);
void when_tower_hud_is_clicked_2(dfd_t *dfd);
void when_tower_hud_is_clicked(dfd_t *dfd);

char *make_int_a_string(int my_int);
char *my_revstr(char *str);
int my_getnbr(char const *str);
int my_strlen(char const *str);
int my_putchar(char c);
void my_putstr(char *str);
char *get_next_line(int fd);
