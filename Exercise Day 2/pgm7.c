#include <stdio.h>

int factorial(int n){
	if(n==0)
		return 1;
	else
		return factorial(n-1)*n;
}

float compute_series(int n)
{
	int i,fact;
	float sum=0;
	for(i=1;i<=n;i++){
		fact=factorial(i);
		sum+=(float)1/fact;
	}
	return sum;
}

int main(){

	int n,i;

	printf("\nEnter number of terms: ");
	scanf("%d",&n);
    printf("Sum of series  ");
    for(i=1;i<n;i++)
    	printf("1/%d! + ",i);
    printf("1/%d!",i);
    printf("  is %.4f\n",compute_series(n));

	return 0;
}