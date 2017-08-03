#include <stdio.h>

int main(){

	int num,sum=0,temp_num;
	printf("\nEnter a number: ");
	scanf("%d",&num);
	temp_num=num;
	while(temp_num>0){
		sum+=temp_num%10;
		temp_num/=10;
	}
	printf("Sum of digits of %d: %d\n",num,sum);
	return 0;
}