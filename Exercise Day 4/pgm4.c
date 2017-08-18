#include <stdio.h>

void swap(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void sort(int arr[],int n,char sort_type){
	int i,j;
	int temp[n];
	for(i=0;i<n;i++)
		temp[i]=arr[i];
	
	switch(sort_type){
		case 'a':for(i=0;i<n-1;i++)
						for(j=0;j<n-1-i;j++)
							if(temp[j]>temp[j+1])
								swap(&temp[j],&temp[j+1]);
					printf("Array in ascending order: ");
					break;
		case 'd':for(i=0;i<n-1;i++)
						for(j=0;j<n-1-i;j++)
							if(temp[j]<temp[j+1])
								swap(&temp[j],&temp[j+1]);
					printf("Array in descending order: ");
					break;
	
	}

	for(i=0;i<n;i++)
		printf("%d ",temp[i]);
	printf("\n");
	
}
int main(){

	int ret,n,arr1[10],i;
	printf("How many numbers do you want to sort? ");
	scanf("%d",&n);
	printf("Enter the numbers: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr1[i]);
	
	sort(arr1,n,'a');
	sort(arr1,n,'d');
	return 0;
}