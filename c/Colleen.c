#include <stdio.h>

/*
	first comment
*/

int ft_quine(char *s)
{
	printf(s,s,9,10,34);
	return (0);
}

int main(void)
{
	/*
		second comment
	*/
	return(ft_quine("#include <stdio.h>%3$c%3$c/*%3$c%2$cfirst comment%3$c*/%3$c%3$cint ft_quine(char *s)%3$c{%3$c%2$cprintf(s,s,9,10,34);%3$c%2$creturn (0);%3$c}%3$c%3$cint main(void)%3$c{%3$c%2$c/*%3$c%2$c%2$csecond comment%3$c%2$c*/%3$c%2$creturn(ft_quine(%4$c%1$s%4$c));%3$c}%3$c"));
}
