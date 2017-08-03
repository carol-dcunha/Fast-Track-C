#include <stdio.h>

int main(){
	
	float watts, lumens_watt, lumens;
	printf("\nEnter the power consumption in watts: ");
	scanf("%f",&watts);
	printf("Enter the luminous efficacy in lumens per watt: ");
	scanf("%f",&lumens_watt);

	lumens=watts*lumens_watt;

	printf("Luminous Flux is %.2f\n",lumens);
	return 0;
}