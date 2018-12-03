#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#define CONV	"%d"
#define FORMAT	"#include <fcntl.h>%c#include <stdio.h>%c#include <stdlib.h>%c#define CONV%c%c%s%c%c#define FORMAT%c%c%s%c%c#define PARAM%c10,10,10,9,34,CONV,34,10,9,34,FORMAT,34,10,9,10,10,9,10,10,9,9,9,10,9,9,9,i,10,9,9,10,10,9,10,9,9,10,9,10,9,9,10,9,34,CONV,34,10,9,10,9,9,10,9,10,9,34,CONV,CONV,34,10,9,34,CONV,34,10,9,10,9,10,9,10,10%c%cint%cmain(void)%c{%c%cint%c%cfd;%c%cint%c%ci = %d;%c%cchar%cfilename[64], cmd[64], exec[64];%c%c%cif (i > 0 && __FILE__[5] != '.')%c%c%ci--;%c%celse if (i == 0)%c%c%creturn (0);%c%csprintf(filename, %cSully_%s.c%c, i);%c%cif (!(fd = open(filename, O_CREAT | O_RDWR, 0644)))%c%c%creturn (-1);%c%cdprintf(fd, FORMAT, PARAM);%c%csprintf(cmd, %cgcc Sully_%s.c -o Sully_%s%c, i, i);%c%csprintf(exec, %c./Sully_%s%c, i);%c%csystem(cmd);%c%csystem(exec);%c%creturn (0);%c}%c"
#define PARAM	10,10,10,9,34,CONV,34,10,9,34,FORMAT,34,10,9,10,10,9,10,10,9,9,9,10,9,9,9,i,10,9,9,10,10,9,10,9,9,10,9,10,9,9,10,9,34,CONV,34,10,9,10,9,9,10,9,10,9,34,CONV,CONV,34,10,9,34,CONV,34,10,9,10,9,10,9,10,10

int	main(void)
{
	int		fd;
	int		i = 5;
	char	filename[64], cmd[64], exec[64];

	if (i > 0 && __FILE__[5] != '.')
		i--;
	else if (i == 0)
		return (0);
	sprintf(filename, "Sully_%d.c", i);
	if (!(fd = open(filename, O_CREAT | O_RDWR, 0644)))
		return (-1);
	dprintf(fd, FORMAT, PARAM);
	sprintf(cmd, "gcc Sully_%d.c -o Sully_%d", i, i);
	sprintf(exec, "./Sully_%d", i);
	system(cmd);
	system(exec);
	return (0);
}
