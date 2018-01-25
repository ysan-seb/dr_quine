#include <stdio.h>

/*
	first comment
*/

int ft_quine(char *s)
{
	printf(s,10,10,10,9,10,10,10,10,10,9,10,9,10,10,10,10,10,9,10,9,9,10,9,10,9,34,s,34,10,10);
	return (0);
}

int main(void)
{
	/*
		second comment
	*/
	return(ft_quine("#include <stdio.h>%c%c/*%c%cfirst comment%c*/%c%cint ft_quine(char *s)%c{%c%cprintf(s,10,10,10,9,10,10,10,10,10,9,10,9,10,10,10,10,10,9,10,9,9,10,9,10,9,34,s,34,10,10);%c%creturn (0);%c}%c%cint main(void)%c{%c%c/*%c%c%csecond comment%c%c*/%c%creturn(ft_quine(%c%s%c));%c}%c"));
}
