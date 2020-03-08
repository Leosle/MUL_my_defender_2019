/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** destroy.c
*/

#include "fonctions.h"

void free_texture(game_t *game)
{
    sfTexture_destroy(game->menu->obj->background->texture);
    sfTexture_destroy(game->menu->obj->button->texture);
    sfTexture_destroy(game->play->obj->background->texture);
    sfTexture_destroy(game->play->location->texture);
    sfTexture_destroy(game->play->tower_basic->body->texture);
    sfTexture_destroy(game->play->tower_slow->body->texture);
    sfTexture_destroy(game->play->tower_wall->body->texture);
    sfTexture_destroy(game->play->tower_profit->body->texture);

}

void free_sprite(game_t *game)
{
    sfSprite_destroy(game->menu->obj->background->sprite);
    sfSprite_destroy(game->menu->obj->button->sprite);
    sfSprite_destroy(game->play->obj->background->sprite);
    sfSprite_destroy(game->play->location->sprite);
    sfSprite_destroy(game->play->tower_basic->body->sprite);
    sfSprite_destroy(game->play->tower_slow->body->sprite);
    sfSprite_destroy(game->play->tower_wall->body->sprite);
    sfSprite_destroy(game->play->tower_profit->body->sprite);

}