#include <stdio.h>

int check(int num1,int num2,int num3){

	int first=1,second=1,temp;
	while(first < num1){
		temp=first+second;
		first=second;
		second=temp;
	}
	if((first == num1) && (second == num2) && (first+second == num3))
		return 1;
	return 0;

}

int main(){

	int num1,num2,num3;
	printf("\nEnter 3 numbers: ");
	scanf("%d%d%d",&num1,&num2,&num3);

	if(check(num1,num2,num3))
		printf("They belong to Fibonacci series\n");
	else
		printf("They do not belong to Fibonacci series\n");
	return 0;
}
