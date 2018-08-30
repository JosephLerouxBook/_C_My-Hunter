#include "my.h"

sfSprite *spritemaker(char *path)
{
        sfSprite      *sprite;
        sfTexture     *texture;
        texture = sfTexture_createFromFile(path, NULL);
        if(!texture)
                return(0);
        sprite = sfSprite_create();
        sfSprite_setTexture(sprite, texture, sfTrue);
        return(sprite);
}

void move_rect(sprt anim, int pix_move, char *path, int pix_max)
{
        sfTexture_destroy(anim.texture);
        anim.rect->left = anim.rect->left + pix_move;
        anim.texture = sfTexture_createFromFile(path, anim.rect);
        if (anim.rect->left == pix_max)
                anim.rect->left = 0;
}

/*
void move_rect(sfSprite *sprite, sfIntRect *rect,
		sftexture *texture, int pix_move, char *path, int pix_max)
{
	sfTexture_destroy(texture);
	rect->left = rect->left + pix_move;
	texture = sfTexture_createFromFile(path, rect);
	if (rect-> == pix_max)
		rect->left = 0;
}
*/
