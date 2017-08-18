#include <stdio.h>
#include <assert.h>

int add_grace(int score){

	int new_score;
	if(score==49)
		new_score=score+1;
	else if(score>=45 && score<=48)
		new_score=score+2;
	else if(score>=40 && score<=44)
		new_score=score+3;
	else if(score>=35 && score<=39)
		new_score=score+4;
	else if(score>=30 && score<=34)
		new_score=score+5;
	else if(score>=25 && score<=29)
		new_score=score+6;
	else if(score<25)
		new_score=25;
	return new_score;
}

int main(){
	
	int score,new_score;
	printf("Enter student marks: ");
	scanf("%d",&score);
	printf("New score is: %d\n",add_grace(score));

	int score1=26,score2=32,score3=49,score4=45,score5=13;

	assert(add_grace(score1) == 32);
	assert(add_grace(score2) == 37);
	assert(add_grace(score3) == 50);
	assert(add_grace(score4) == 47);
	assert(add_grace(score5) == 25);

	return 0;
}