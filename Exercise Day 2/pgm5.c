#include <stdio.h>


int main(){

	float initial_speed,final_speed=0,speed,dist,covered_dist;
	int sec;
	printf("Car speed in km/hr: ");
	scanf("%f",&initial_speed);
	printf("Distance between car and truck in mtrs: ");
	scanf("%f",&dist);
	printf("Time gap when truck starts moving in secs: ");
	scanf("%d",&sec);

	initial_speed=(initial_speed*5)/18;
	speed=(initial_speed+final_speed)/2;
	covered_dist=speed*sec;
	
	if(dist<=covered_dist)
		printf("Car and truck collides\n");
	else
		printf("Car and truck doesn't collide\n");
	return 0;
}