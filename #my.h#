#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Text.h>
#include <SFML/System/Vector2.h>
#include <SFML/Audio.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/InputStream.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Text.h>
#include <SFML/System/Vector2.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFF_SIZE (4096)

#include "struct.h"
#include "my_printf/my.h"

static int score = 0;

//display.c : basics displayings fucntion.
void my_putchar(char c);
void my_putstr(char *str);
void my_put_nbr(int nb);

//duck.c : what it need for the duck sprite to work.
sprt fill_duck(sprt duck);
sprt bounce_sprite_duck(sprt duck);
int duck_hitbox(sfMouseButtonEvent event, sprt duck);

//print.c : special function, needed to print coor.
void print_mouse_coord(mse click, sfEvent event, sprt duck, sfRenderWindow *window);

//sprite.c :  function to make animated sprites.
sfSprite *spritemaker(char *path);
void move_rect(sprt anim, int pix_move, char *path, int pix_max);

//openndreadfile.c : open and read the .txt in "Options" folder
void open_read_display(char *path);
int my_strcmp(char const *s1, char const *s2);
int check_option(char *av);

//chocobo.c : what it need for the chocobo sprite to work
sprt fill_chocobo(sprt chocobo);

//RRduck.c
sprt fill_RRduck(sprt RRduck);
