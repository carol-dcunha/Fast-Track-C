#include <stdio.h>

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
	int m,n;
	printf("\nEnter values for m and n: ");
	scanf("%d%d",&m,&n);
	printf("pow(%d,%d) = %d\n",m,n,power(m,n));
	return 0;
}