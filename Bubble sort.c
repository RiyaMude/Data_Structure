#include <stdio.h>
int main() {
	int a[5]={15,16,6,8,5};
	int n=5;
	int i, j, temp, flag;
	
	for(i=0;i<n-1;i++) {
		flag=0;
		for(j=0;j<n-i-1;j++) {
			if(a[j] > a[j+1]) {
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}	
		if(flag==0) {
			break;
		}
	}
	printf("Bubble sort: ");
	for(i=0;i<n;i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
