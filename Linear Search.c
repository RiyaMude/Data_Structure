#include <stdio.h>
int main() {
	int arr[]={10,20,40,50};
	int key=40;
	int i;
	int n=4;

for(i=0;i<n;i++) {
	if(arr[i]==key) {
		printf("Element found at index %d", i);
		break;
	}
}
if(i==n) {
	printf("Element not found");
}
return 0;
}
