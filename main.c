#include "my.h"

void analyse_event(sfRenderWindow *window, sfEvent event, sprt duck)
{
	mse left_click;
	left_click.but_coord = sfMouse_getPosition(window);
	left_click.button.x = left_click.but_coord.x;
	left_click.button.y = left_click.but_coord.y;
	
	while (sfRenderWindow_pollEvent(window, &event)) {
		if (event.type == sfEvtClosed)
			sfRenderWindow_close(window);
		if (event.type == sfEvtMouseButtonPressed)
			print_mouse_coord(left_click, event, duck, window);
	
	}
}

int main(int ac, char **av)
{
	sprt duck = fill_duck(duck);
	sprt background;
	tme tms;
	sfEvent event;
	sfVideoMode mode = {1280, 770, 32};
	sfRenderWindow *window = sfRenderWindow_create
		(mode, "My_hunter", sfResize | sfClose, NULL);
	tms.clock =  sfClock_create();
	background.sprite = spritemaker("background.png");
	if (ac > 1) {
		check_option(av[1]);
	}
        else if (ac == 1) {
		while (sfRenderWindow_isOpen(window)) {
			tms.time = sfClock_getElapsedTime(tms.clock);
			tms.seconds = tms.time.microseconds / 1000000;
			if (tms.seconds > 0.5) {
				move_rect(duck, 110, "sprite/duck.png", 220);
				sfClock_restart(tms.clock);
			}
			analyse_event(window, event, duck);
			sfRenderWindow_clear(window, sfBlack);
			sfRenderWindow_drawSprite(window, background.sprite , NULL);
			sfRenderWindow_drawSprite(window, duck.sprite, NULL);
			duck = bounce_sprite_duck(duck);
			sfSprite_move(duck.sprite, duck.offset);
			sfRenderWindow_display(window);
		}
	}
}


