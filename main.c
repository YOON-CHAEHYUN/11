#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char*proverb="All that gliters is not gold";

int main(int argc, char *argv[]) {
	int i, j;
	int grade[5];
	
	j=0;
	
	for(i=0;i<5;i++)
	{
		printf("grade[%i]=",i);
		scanf("%d",&grade[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("grade[%i]=%i\n",i,*(grade+i));
		j+= *(grade+i);
	}
	printf("average: %i",j/5);
	
	
	return 0;
}
