#include <stdio.h>
#include <string.h>

int * grade_count(char grades[],int n)
{
	static int count[6]={0};
	int i;
	for(i=0;i<n;i++){
		switch(grades[i]){
			case 'A':count[0]++;break;
			case 'B':count[1]++;break;
			case 'C':count[2]++;break;
			case 'D':count[3]++;break;
			case 'E':count[4]++;break;
			case 'F':count[5]++;break;
		}
	}
	return count;
}

int main(){
	int n,i,j=0,*count;
	char grades[50],str[50];

	printf("Enter number of students: ");
	scanf("%d",&n);
	printf("Enter grades of %d students: ",n);
	for(i=0;i<n;i++)
		scanf("%s",&grades[i]);
	count=grade_count(grades,n);
	printf("Number of students with grade A: %d\n",count[0]);
	printf("Number of students with grade B: %d\n",count[1]);
	printf("Number of students with grade C: %d\n",count[2]);
	printf("Number of students with grade D: %d\n",count[3]);
	printf("Number of students with grade E: %d\n",count[4]);
	printf("Number of students with grade F: %d\n",count[5]);

	return 0;
}