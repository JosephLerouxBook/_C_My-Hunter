#include "my.h"

sprt fill_chocobo(sprt chocobo)
{
	chocobo.sprite = sfSprite_create();

	chocobo.rect->top = 0;
	chocobo.rect->left = 0;
	chocobo.rect->width = 27;
	chocobo.rect->height = 25;

	chocobo.texture = sfTexture_createFromFile("sprite/cyr.png", chocobo.rect);
	sfSprite_setTexture(chocobo.sprite, chocobo.texture, sfTrue);

	return(chocobo);
}
