#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define FORMAT "#include <fcntl.h>%4$c#include <stdio.h>%4$c#include <stdlib.h>%4$c#include <string.h>%4$c#include <unistd.h>%4$c#define FORMAT %5$c%1$s%5$c%4$c#define PARAM FORMAT,i,9,10,34%4$c%4$cint	main(void)%4$c{%4$c%3$cint fd;%4$c%3$cint i = %2$d;%4$c%3$cchar filename[64], cmd[256] = {0};%4$c%4$c%3$cif (i <= 0)%4$c%3$c%3$creturn (0);%4$c%3$cif (strcmp(__FILE__, %5$cSully.c%5$c))%4$c%3$c%3$ci--;%4$c%3$csprintf(filename, %5$cSully_%%d.c%5$c, i);%4$c%3$cif ((fd = open(filename, O_CREAT | O_RDWR, 0644)) < 0)%4$c%3$c%3$creturn (-1);%4$c%3$cdprintf(fd, FORMAT, PARAM);%4$c%3$csprintf(cmd, %5$cgcc Sully_%%d.c -o Sully_%%d && ./Sully_%%d%5$c, i, i, i);%4$c%3$csystem(cmd);%4$c%3$cif (close(fd) < 0)%4$c%3$c%3$creturn (-1);%4$c%3$creturn (0);%4$c}%4$c"
#define PARAM FORMAT,i,9,10,34

int	main(void)
{
	int fd;
	int i = 5;
	char filename[64], cmd[256] = {0};

	if (i <= 0)
		return (0);
	if (strcmp(__FILE__, "Sully.c"))
		i--;
	sprintf(filename, "Sully_%d.c", i);
	if ((fd = open(filename, O_CREAT | O_RDWR, 0644)) < 0)
		return (-1);
	dprintf(fd, FORMAT, PARAM);
	sprintf(cmd, "gcc Sully_%d.c -o Sully_%d && ./Sully_%d", i, i, i);
	system(cmd);
	if (close(fd) < 0)
		return (-1);
	return (0);
}
