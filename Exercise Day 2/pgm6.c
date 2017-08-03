#include <stdio.h>

int main(){

	float final_vel,initial_vel,dist,dec,velocity;
	printf("Landing velocity of the aircraft in km/hr: ");
	scanf("%f",&final_vel);
	printf("Remaining runway length in mtrs: ");
	scanf("%f",&dist);
	printf("Aircraft deceleration: ");
	scanf("%f",&dec);

	initial_vel=(initial_vel*5)/18;
	velocity=(initial_vel*initial_vel)+(2*dec*dist);
	final_vel=0;

	if(final_vel == velocity)
		printf("Aircraft lands safely within the runway\n");
	else
		printf("Aircraft doesn't land safely within the runway\n");
	return 0;

}