#include <stdio.h>
#define MAX_ARRAY 32

int main()
{
	int decimal,arr[MAX_ARRAY],i=0;
	printf("\nEnter a decimal number: ");
	scanf("%d",&decimal);
	while(decimal>0){
		arr[i++]=decimal%2;
		decimal/=2;
	}
	printf("Binary representation: ");
	for(;i>=0;i--)
		printf("%d",arr[i]);
	printf("\n");
	return 0;
}