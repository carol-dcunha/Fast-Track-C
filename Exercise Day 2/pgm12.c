#include <stdio.h>
#define MAX_ARRAY 32

int power(int base, int pow){
	int i;
	if(pow == 0)
		return 1;
	else if(pow == 1)
		return base;
	else
		return power(base,pow-1)*base;
	
}

int main()
{
	int binary,arr[MAX_ARRAY],i=0,decimal=0;
	printf("\nEnter a binary number: ");
	scanf("%d",&binary);
	while(binary>0){
		decimal+=(binary%10)*power(2,i++);
		binary/=10;
	}
	
	printf("Decimal equivalent: %d\n",decimal);
	return 0;
}