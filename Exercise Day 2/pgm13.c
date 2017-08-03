#include <stdio.h>

int main(){
	
	int num,reverse=0,digit,temp;
	printf("\nEnter a number: ");
	scanf("%d",&num);
	temp=num;
	while(temp>0){
		digit=temp%10;
		reverse=reverse*10+digit;
	    temp/=10;
	}
	if(reverse==num)
		printf("It is a palindrome\n");
	else
		printf("It isn't a palindrome\n");
	return 0;
}