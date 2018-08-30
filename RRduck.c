#include "my.h"

sprt fill_RRduck(sprt RRduck)
{
	RRduck.sprite = sfSprite_create();
	/*RRduck.rect->top = 0;
	RRduck.rect->left = 0;
	RRduck.rect->width = 34;
	RRduck.rect->height = 40;*/
	RRduck.texture = sfTexture_createFromFile("sprite/duckCORNERright.png", NULL); // remplacer par rect
	sfSprite_setTexture(RRduck.sprite, RRduck.texture, sfTrue);
	return (RRduck);
}
