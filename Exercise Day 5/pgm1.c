#include <stdio.h>
#define MAX_STRING_SIZE 50

int string_length(char *str){
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
} 

char* string_copy(char *str){
	int i,len=string_length(str);
	static char copy[MAX_STRING_SIZE];
	for(i=0;i<len;i++)
		copy[i]=str[i];
	copy[i]='\0';
	return copy;
}

int main(){
	char str1[MAX_STRING_SIZE],*copy;
	int n;
	printf("Enter a string: ");
	scanf("%s",str1);
	copy=string_copy(str1);
	printf("Copied string is: %s\n",copy);
	return 0;
}