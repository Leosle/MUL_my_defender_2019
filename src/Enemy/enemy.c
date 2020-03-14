/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** enemy.c
*/

#include "../fonctions.h"

basicobject_t *init_ennemi(enemy_t *enemy, int n)
{
    sfIntRect rect = {0, 0, 90, 87};

    enemy[n].body->texture = sfTexture_createFromFile
                                        ("picture/enemy.png", NULL);
    enemy[n].body->sprite = sfSprite_create();
    sfSprite_setTexture(enemy[n].body->sprite, enemy[n].body->texture, 1);
    enemy[n].body->vector.x = 20 * (n - 15);
    enemy[n].body->vector.y = 500;
    sfSprite_setPosition(enemy[n].body->sprite, enemy[n].body->vector);
    enemy[n].body->rect = rect;
    sfSprite_setTextureRect(enemy[n].body->sprite, enemy[n].body->rect);
    return (enemy[n].body);
}

void create_enemy(enemy_t *enemy)
{
    for (int i = 0; i != 20; i++)
        enemy[i].body = init_ennemi(enemy, i);
}

void enemy_animation(sfRenderWindow *window, enemy_t *enemy, int n)
{
    sfVector2f position = sfSprite_getPosition(enemy[n].body->sprite);

    if (sfClock_getElapsedTime(enemy[n].clock).microseconds / 100000) {
        if (enemy[n].body->rect.left == 979)
            enemy[n].body->rect.left = 0;
        else
            enemy[n].body->rect.left += 89;
        sfSprite_setTextureRect(enemy[n].body->sprite, enemy[n].body->rect);
        sfClock_restart(enemy[n].clock);
    }
    if (position.x != 1506)
        sfRenderWindow_drawSprite(window, enemy[n].body->sprite, NULL);
}

void display_enemy(sfRenderWindow *window, game_t *game)
{
    for (int i = 0; i != 20; i++) {
        enemy_animation(window, game->play->enemy, i);
        enemy_move(game->play->enemy, i);
    }

}