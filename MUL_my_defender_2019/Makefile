##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=	game.c				\
		function_for_analyse_event.c	\
		declare.c			\
		declare_int.c			\
		declare_texture.c		\
		declare_pos.c			\
		declare_rect.c			\
		declare_sprite.c		\
		declare_sprite_2.c		\
		declare_set_pos.c		\
		prepare_first_node.c		\
		declare_list.c			\
		declare_tower.c			\
		declare_tower_2.c		\
		declare_text.c			\
		destroy.c			\
		load_sprite_tower.c		\
		load_pos_tower.c		\
		load_pos_tower_2.c		\
		cursor.c			\
		check_menu.c			\
		check_menu_2.c			\
		change_menu.c			\
		launch_game.c			\
		event_pause.c			\
		setting.c			\
		upgrade_stone_thief.c		\
		upgrade_bow_magic.c		\
		start_the_game.c		\
		make_monster.c			\
		menu_management.c		\
		health_bar.c			\
		path_mob_level_1.c		\
		path_mob_level_1_2.c		\
		path_mob_level_1_3.c		\
		path_mob_level_1_4.c		\
		path_mob_level_2.c		\
		path_mob_level_3.c		\
		path_mob_level_2_2.c		\
		path_mob_level_2_3.c		\
		path_mob_level_3_2.c		\
		level_1_management.c		\
		level_1_management_2.c		\
		level_2_management.c		\
		level_3_management.c		\
		display_tower_for_tower_management.c	\
		tower_management.c		\
		tower_hud.c			\
		tower_hud_2.c			\
		mob_management.c		\
		thief_tower_attack.c		\
		bow_tower_attack.c		\
		magic_tower_attack.c		\
		stone_tower_attack.c		\
		stone_tower_attack_2.c		\
		drop_tower_management.c		\
		drop_tower.c			\
		drop_tower_lvl_2.c		\
		drop_tower_lvl_3.c		\
		spell.c				\
		boum_spell.c			\
		select_spell.c			\
		set_pos_spell.c			\
		load_pos_tower_lv2.c		\
		load_pos_tower_lv2_2.c		\
		load_pos_tower_lv3.c		\
		load_pos_tower_lv3_2.c		\
		make_int_a_string.c		\
		lib_revstr.c			\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_defender

FLAGS = -l csfml-graphics -l csfml-audio -l csfml-system -l csfml-window

all: $(NAME)

$(NAME):	$(OBJ)
	@ gcc -o $(NAME) -g3 $(SRC) $(FLAGS)
	@ echo "[OK]: Compiled succesfully !"
	@ rm -f $(OBJ)
	@ echo "[INFO]: Removed compiled files"
	@ rm -f *~ *#
	@ echo "[INFO]: Removed useless files"

%.o:	%.c
	@ echo "[INFO]: Compiling" $<
	@ gcc -o $@ -c $<

clean:
	@ rm -f $(OBJ)
	@ echo "[INFO]: Removed compiled files"
	@ rm -f *~ *#
	@ echo "[INFO]: Removed useless files"

fclean:	clean
	@ rm -f $(NAME)
	@ echo "[INFO]: Removed binary ->" $(NAME)

re: fclean all

.PHONY: all re clean fclean
