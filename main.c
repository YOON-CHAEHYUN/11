#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char*proverb="All that gliters is not gold";
void setpointer(char**q)
{
	*q=proverb;
}

int main(int argc, char *argv[]) {
	char*p="zzz";
	setpointer(&p);
	printf("%s\n",p);
	
	return 0;
}
