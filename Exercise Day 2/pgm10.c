#include <stdio.h>

int main(){

	char char1;
	printf("\nEnter a letter: ");
	scanf("%c",&char1);
	if(char1>=65 && char1<=90) //c belongs to upper case
		printf("Toggled case of %c is %c\n",char1,(char)(char1+32));
	else if(char1>=97 && char1<=122) //c belongs to lower case
		printf("Toggled case of %c is %c\n",char1,(char)(char1-32));
	else
		printf("Symbol doesn't belong to alphabet\n");
	
	return 0;
}