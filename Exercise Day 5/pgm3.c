#include <stdio.h>
#define MAX_STRING_SIZE 50

int string_length(char *str){
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
} 

char* string_reverse(char *str){
	int i,j=0,len=string_length(str);
	static char reverse[MAX_STRING_SIZE];
	for(i=len-1;i>=0;i--)
		reverse[j++]=str[i];
	reverse[j]='\0';
	return reverse;
}

int main(){
	char str1[MAX_STRING_SIZE],*reverse;
	int n;
	printf("Enter a string: ");
	scanf("%s",str1);
	reverse=string_reverse(str1);
	printf("Reversed string is: %s\n",reverse);
	return 0;
}