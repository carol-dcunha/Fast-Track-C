#include <stdio.h>

int main(){
	
	float joules, kWh;
	int secs;
	printf("\nEnter the energy consumption in joules: ");
	scanf("%f",&joules);
	printf("Enter the time duration in seconds: ");
	scanf("%d",&secs);

	kWh = joules/(1000*secs);

	printf("Power consumption for %.2f J in %d seconds is %.2f\n",joules,secs,kWh);
	return 0;
}