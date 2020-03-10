/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** malloc_game.c
*/

#include "fonctions.h"

#include "fonctions.h"

int game_malloc_menu(game_t *game)
{
    game->menu = malloc(sizeof(menu_t));
    if (game->menu == NULL)
        return (ERROR);
    game->menu->obj = malloc(sizeof(object_t));
    if (game->menu->obj == NULL)
        return (ERROR);
    game->menu->obj->background = malloc(sizeof(basicobject_t));
    if (game->menu->obj->background == NULL)
        return (ERROR);
    game->menu->obj->button = malloc(sizeof(basicobject_t) * 4);
    if (game->menu->obj->button == NULL)
        return (ERROR);
    game->menu->rect_button_a = malloc(sizeof(int) * 4);
    if (game->menu->rect_button_a == NULL)
        return (ERROR);
    game->menu->rect_button_b = malloc(sizeof(int) * 4);
    if (game->menu->rect_button_b == NULL)
        return (ERROR);
    return (0);
}

int game_malloc_play(game_t *game)
{
    game->play = malloc(sizeof(play_t));
    if (game->play == NULL)
        return (ERROR);
    game->play->obj = malloc(sizeof(object_t));
    if (game->play->obj == NULL)
        return (ERROR);
    game->play->obj->background = malloc(sizeof(basicobject_t));
    if (game->play->obj->background == NULL)
        return (ERROR);
    game->play->ennemi = malloc(sizeof(ennemi_t) * 20);
    if (game->play->ennemi == NULL)
        return (ERROR);
    game->play->location = malloc(sizeof(basicobject_t) * 5);
    if (game->play->location == NULL)
        return (ERROR);
    return (0);
}

int game_malloc_tower(game_t *game)
{
    game->play->tower_basic = malloc(sizeof(tower_t) * 6);
    if (game->play->tower_basic == NULL)
        return (ERROR);
    game->play->tower_slow = malloc(sizeof(tower_t) * 6);
    if (game->play->tower_slow == NULL)
        return (ERROR);
    game->play->tower_wall = malloc(sizeof(tower_t) * 6);
    if (game->play->tower_wall == NULL)
        return (ERROR);
    game->play->tower_profit = malloc(sizeof(tower_t) * 6);
    if (game->play->tower_profit == NULL)
        return (ERROR);
    return (0);
}

int game_malloc_tower_body(game_t *game)
{
    for (int i = 0; i != 6; i++) {
        game->play->tower_basic[i].body = malloc(sizeof(basicobject_t));
        if (game->play->tower_basic[i].body == NULL)
            return (ERROR);
        game->play->tower_slow[i].body = malloc(sizeof(basicobject_t));
        if (game->play->tower_slow[i].body == NULL)
            return (ERROR);
        game->play->tower_wall[i].body = malloc(sizeof(basicobject_t));
        if (game->play->tower_wall[i].body == NULL)
            return (ERROR);
        game->play->tower_profit[i].body = malloc(sizeof(basicobject_t));
        if (game->play->tower_profit[i].body == NULL)
            return (ERROR);
    }
    return (0);
}