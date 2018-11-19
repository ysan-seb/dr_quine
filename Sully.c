#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

# define FORMAT "#include <stdio.h>%c#include <fcntl.h>%c#include <stdlib.h>%c%c# define FORMAT %c%s%c%c# define PARAM  10,10,10,10,34,FORMAT,34,10,10,10,10,10,10,34,34,10,10,i,10,10,10,10,9,10,9,34,i,i,i,34,10,9,10%c%cint     main(void)%c{%c    int     fd;%c    char    filename[10] = %cSully_ .c%c;%c%c    int     i = %d;%c    filename[6] = --i + '0';%c    filename[9] = 0;%c    fd = open(filename, O_CREAT | O_RDWR, 0644);%c%cdprintf(fd, FORMAT, PARAM);%c%csystem(%cgcc Sully_%d.c -o Sully_%d && ./Sully_%d%c);%c%creturn (0);%c}"
# define PARAM  10,10,10,10,34,FORMAT,34,10,10,10,10,10,10,34,34,10,10,i,10,10,10,10,9,10,9,34,i,i,i,34,10,9,10

int     main(void)
{
    int     fd;
    char    filename[10] = "Sully_ .c";

    int     i = 5;
    filename[6] = --i + '0';
    filename[9] = 0;
    fd = open(filename, O_CREAT | O_RDWR, 0644);
    dprintf(fd, FORMAT, PARAM);
    system("gcc Sully_4.c -o Sully_4 && ./Sully_4");
    return (0);
}