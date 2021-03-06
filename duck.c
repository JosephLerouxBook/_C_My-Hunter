#include "my.h"

sprt fill_duck(sprt duck)
{
        duck.sprite = sfSprite_create();
        duck.rect->top = 0;
        duck.rect->left = 0;
        duck.rect->width = 110;
        duck.rect->height = 110;
        duck.texture = sfTexture_createFromFile("sprite/duck.png", duck.rect);
        sfSprite_setTexture(duck.sprite, duck.texture, sfTrue);
        duck.offset.x = 0.3;
        duck.offset.y = 0.05;
        return(duck);
}

int duck_hitbox(sfMouseButtonEvent event, sprt duck)
{
	sfVector2f hitbox = sfSprite_getPosition(duck.sprite);

	if (event.x >= (hitbox.x - 60) && event.y >= (hitbox.y - 13) &&
	    event.x <= (hitbox.x + 160) && event.y <= (hitbox.y + 113)) {
		my_putstr("Hit ! \n");
		return (1);
	} else {
		my_putstr("Miss ! \n");
		return(0);
	}
}

sprt bounce_sprite_duck(sprt duck)
{
        sfVector2f sprite_coord = sfSprite_getPosition(duck.sprite);
	sfVector2f scale_left = {-1, 1};
	sfVector2f scale_right = {1, 1};
	
	if (sprite_coord.x >= 1270) {
		duck.offset.x *= -1;
		sfSprite_setScale(duck.sprite, scale_left);
	}
	if (sprite_coord.x <= 0  && sprite_coord.y > 0) {
		duck.offset.x *= -1;
		duck.offset.y *= -1.1;
		sfSprite_setScale(duck.sprite, scale_right);
	}
	if (sprite_coord.y >= 800) {
		duck.offset.y *= -1;
	}
	if (sprite_coord.y <= 0) {
		duck.offset.y *= -1;
	}
	
	return (duck);
}
