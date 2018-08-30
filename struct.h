typedef struct spt {
	sfSprite *sprite;
	sfVector2f offset;
	sfVector2f origin;
	sfTexture *texture;
	sfIntRect *rect;
}sprt;

typedef struct tmTEK {
	sfClock *clock;
	sfTime time;
	float seconds;
}tme;

typedef struct mouseTEK {
	sfMouseButtonEvent button;
	sfVector2i but_coord;
}mse;
