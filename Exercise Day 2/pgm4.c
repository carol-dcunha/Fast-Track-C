#include <stdio.h>

int main(){
	
	float kmhr,ms;
	printf("\nEnter distance in km/hr: ");
	scanf("%f",&kmhr);
	ms=(kmhr*5)/18;

	printf("Distance is %.2f m/s\n",ms);
	return 0;
}