#include <stdio.h>
#define MAX_STRING_SIZE 50

int string_length(char *str){
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
} 

int string_compare(char *str1,char *str2){
	int i,ret=1;
	int len1=string_length(str1),len2=string_length(str2);
	if(len1==len2){
		for(i=0;i<len1;i++)
			if(str1[i]!=str2[i])
				ret=0;
	}else
		ret=0;
	return ret;
	
}

int main(){
	char str1[MAX_STRING_SIZE],str2[MAX_STRING_SIZE];
	int n;
	printf("Enter a string: ");
	scanf("%s",str1);
	printf("Enter another string: ");
	scanf("%s",str2);
	if(string_compare(str1,str2)==1)
		printf("Strings are equal\n");
	else
		printf("Strings are not equal\n");
	return 0;
}