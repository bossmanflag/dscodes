#include <stdio.h>
#include <stdlib.h>

void main(){
	int arr[] = { 3,512,1,2,4,0};
	for(int i = 1; i < 6; i++){
	int j = i;
	while(j>0 && arr[j-1]>arr[j]){
			int tmp = arr[j-1];
			arr[j-1] = arr[j];
			arr[j] = tmp;
		j=j-1;
		}
	}
	for(int i = 0; i< 6; i++)
		printf("%d ",arr[i]);
}
