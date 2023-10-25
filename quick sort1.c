#include <stdio.h>
void quicksort(int a[40], int f, int l) {
	int i,j,temp,pivot;
	if(f<l) {
		pivot=l;
		i=f;
		j=l;
		
		while(i<j) {
			while(a[i]<=a[pivot])
				i++;
			while(a[j]>a[pivot])
				j--;	
				if(i<j) {
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp; 
		
		quicksort(a,0,j-1);
		quicksort(a,j+1,1);
	}
}
int main() {
	int a[40],i,n;
	printf("Enter size of array: ");
	scanf("%d", &n);
	
	printf("Enter elements: ");
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	quicksort(a,0,n-1);
	printf("Sorted array: ");
	for(i=0;i<n;i++)
		printf("%d ", a[i]);
		
	return 0;
}
