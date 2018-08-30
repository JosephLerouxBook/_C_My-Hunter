#include "my.h"

void print_mouse_coord(mse click, sfEvent event, sprt duck, sfRenderWindow *window)
{
	sfVector2f ori;
	
	srand(time(0));
	ori.y = rand() % 400 + 300;
	click.button = event.mouseButton;
	if (score > 150) {
		open_read_display("Options/win.txt");
		sfRenderWindow_close(window);
		return;
	}
	if (duck_hitbox(click.button, duck) == 1) {
		sfTexture_destroy(duck.texture);
		sfSprite_destroy(duck.sprite);
		duck.sprite = sfSprite_create();
		duck.texture =
			sfTexture_createFromFile("sprite/duck.png", duck.rect);
		sfSprite_setTexture(duck.sprite, duck.texture, sfTrue);
		sfSprite_setPosition(duck.sprite, ori);
		sfRenderWindow_drawSprite(window, duck.sprite, NULL);
		score += 10;
		my_printf("Votre score : %i\n", score);
	}
	my_printf("mouse x : %d mouse y : %d\n", click.button.x, click.button.y); 
}
