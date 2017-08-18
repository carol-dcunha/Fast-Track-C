#include <stdio.h>

int compare(int arr1[], int arr2[], int n){

	int i=0;
	for(i=0;i<n;i++){
		if(arr1[i]!=arr2[i])
			return 0;
	}
	return 1;

}
int main(){

	int ret,n,arr1[10],arr2[10],i;
	printf("Enter number of elements in the array: ");
	scanf("%d",&n);
	printf("Enter first array: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr1[i]);
	printf("Enter second array: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr2[i]);
	if(compare(arr1,arr2,n)==0)
		printf("Arrays aren't equal\n");
	else
		printf("Arrays are equal\n");
}