#include <stdio.h>
#include <string.h>

int check_palindrome(char str[]){

	int len=strlen(str),i;
	for(i=0;i<len/2;i++){
		if(str[i]!=str[len-1-i])
			return 0;
	}
	return 1;
}

int main(){

	char str[10];
	printf("Enter a string: ");
	scanf("%s",str);
	if(check_palindrome(str))
		printf("%s is a palindrome\n",str);
	else
		printf("%s is not a palindrome\n",str);
	return 0;
}