#include <stdio.h>
#define MAX_STRING_SIZE 50

int string_length(char str[]){
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
} 

char* string_copy(char str[]){
	int i,len=string_length(str);
	static char copy[MAX_STRING_SIZE];
	for(i=0;i<len;i++)
		copy[i]=str[i];
	copy[i]='\0';
	return copy;
}


char* string_copy_nchars(char str[],int n){
	int i,len=string_length(str);
	static char copy[MAX_STRING_SIZE];
	if(n<=len){
		for(i=0;i<n;i++)
			copy[i]=str[i];
	}else{
		for(i=0;i<len;i++)
			copy[i]=str[i];
	}
	copy[i]='\0';
	return copy;
}


char* string_concatenate(char str1[],char str2[]){
	int i,j=0;
	int len1=string_length(str1),len2=string_length(str2);
	static char new_str[MAX_STRING_SIZE];
	for(i=0;i<len1;i++)
		new_str[j++]=str1[i];
	for(i=0;i<len2;i++)
		new_str[j++]=str2[i];
	new_str[j]='\0';
	return new_str;
}

int main(){
	char str1[MAX_STRING_SIZE],str2[MAX_STRING_SIZE];
	int n;
	printf("Enter a string: ");
	scanf("%s",str1);
	getc(stdin);
	printf("Length of string: %d\n",string_length(str1));
	printf("Copied string is: %s\n",string_copy(str1));
	printf("Enter number of characters to copy: ");
	scanf("%d",&n);
	printf("Copied string upto %d characters: %s\n",n,string_copy_nchars(str1,n));
	printf("Enter another string: ");
	scanf("%s",str2);
	getc(stdin);
	printf("Concatenation of %s and %s: %s\n",str1,str2,string_concatenate(str1,str2));
	return 0;
}