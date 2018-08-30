#include "my.h"

void open_read_display(char *path)
{
	char buff[BUFF_SIZE + 1];
	int fd = open(path, O_RDONLY);
	read(fd, &buff, BUFF_SIZE);
	my_putstr(buff);
//	my_putchar('\n');
}

int     my_strcmp(char const *s1, char const *s2)
{
        int     i = 0;

        while (s1[i] != '\0') {
                if (s1[i] > s2[i])
                        return (1);
                else if (s1[i] == s2[i])
                        i++;
                else if (s1[i] < s2[i])
                        return (-1);

        }
        return (0);
}

int check_option(char *av)
{
        if (my_strcmp(av, "-h") == 0) {
                open_read_display("Options/helper.txt");
		return;
	}
	else if (my_strcmp(av, "-r") == 0) {
                open_read_display("Options/rules.txt");
		return;
	}
        return (0);
}
