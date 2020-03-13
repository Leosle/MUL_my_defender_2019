##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

RM	=	rm -rf

CC	=	gcc

SRC_DIR =		src/

FILE_LIST =		main.c 														\
				malloc_game.c 												\
				game.c 														\
				manage_event.c 												\
				map_game.c 													\
				Menu/menu.c 												\
				Menu/menu_event.c 											\
				Menu/music_menu.c 											\
				Menu/option_of_menu.c 										\
				Tower/tower_wall.c											\
				Tower/tower_basic.c											\
				Tower/tower_slow.c											\
				Tower/tower_profit.c										\
				Tower/location_tower.c										\
				Tower/create_tower.c										\
				Tower/draw_tower.c											\
				Tower/hitbox_tower.c										\
				Tower/event_tower.c											\
				Ennemi/ennemi.c 											\
				destroy.c 													\
				Castle/create_castle.c										\


SRC		= 		$(addprefix $(SRC_DIR), $(FILE_LIST))

OBJ		=		$(SRC:.c=.o)

NAME 	= 		my_defender

CFLAGS  =		-W -Wextra -Wall -I./include/
CFLAGS	+=		-fdiagnostics-color -g3
CFLAGS	+=		-lcsfml-window -lcsfml-graphics -lcsfml-audio -lcsfml-system

all: 	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	$(RM) src/*.o
	$(RM) src/Menu/*.o
	$(RM) src/Tower/*.o
	$(RM) src/Ennemi/*.o
	$(RM) src/Castle/*.o

fclean: clean
	$(RM) $(NAME)

re:		fclean all