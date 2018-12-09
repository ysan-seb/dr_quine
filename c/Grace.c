#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define FORMAT "#include <stdio.h>%3$c#include <fcntl.h>%3$c#include <unistd.h>%3$c#define FORMAT %4$c%1$s%4$c%3$c#define PARAM FORMAT,FORMAT,9,10,34%3$c#define MAIN int main(void) { int fd; if ((fd = open(%4$cGrace_kid.c%4$c, O_CREAT | O_RDWR, 0644)) < 0) return (-1); dprintf(fd, PARAM); if (close(fd) < 0) return (-1); return (0);}%3$c/*%3$c%2$ccomment%3$c*/%3$cMAIN;%3$c"
#define PARAM FORMAT,FORMAT,9,10,34
#define MAIN int main(void) { int fd; if ((fd = open("Grace_kid.c", O_CREAT | O_RDWR, 0644)) < 0) return (-1); dprintf(fd, PARAM); if (close(fd) < 0) return (-1); return (0);}
/*
	comment
*/
MAIN;
