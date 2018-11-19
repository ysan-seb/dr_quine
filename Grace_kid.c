#include <stdio.h>
#include <fcntl.h>

# define FORMAT	"#include <stdio.h>%c#include <fcntl.h>%c%c# define FORMAT%c%c%s%c%c# define PARAM%cFORMAT,10,10,10,9,34,FORMAT,34,10,9,10,9,34,34,10,10,10,10,10,10%c# define MAIN%cint main(void) { int file; file = open(%cGrace_kid.c%c, O_CREAT | O_RDWR, 0644); dprintf(file, PARAM); return (0);}%c%c/*%c** Comment%c*/%c%cMAIN;"
# define PARAM	FORMAT,10,10,10,9,34,FORMAT,34,10,9,10,9,34,34,10,10,10,10,10,10
# define MAIN	int main(void) { int file; file = open("Grace_kid.c", O_CREAT | O_RDWR, 0644); dprintf(file, PARAM); return (0);}

/*
** Comment
*/

MAIN;