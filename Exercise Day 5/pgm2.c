#include <stdio.h>
#define MAX_STRING_SIZE 50

int string_length(char *str){
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
} 

int main(){
	char str1[MAX_STRING_SIZE];
	int n;
	printf("Enter a string: ");
	scanf("%s",str1);
	printf("Length of string: %d\n",string_length(str1));
	return 0;
}