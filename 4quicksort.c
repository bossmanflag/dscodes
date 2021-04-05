#include <stdio.h>
#include <stdlib.h>

int arr[] = {2,5,1,7,3,0,9};
int part(int l, int h){
	int i =l, j=h;
	int pivot = arr[i];
	while(i<j){
		do{
			i++;
		}while(pivot>=arr[i]);
		do
			j--;
		while(pivot<arr[j]);
		if(i<j){
			//swap
			int t = arr[i];
			arr[i] = arr[j];
			arr[j] = t;
		}
	}
	int t = arr[l];
	arr[l] = arr[j];
	arr[j] = t;
	return j;
}

void quickSort(l,h){
	if(l<h){
	int j =	part(l,h);
	quickSort(l,j);
	quickSort(j+1,h);
	}
}



void main(){
	quickSort(0,6);
	for(int i=0;i<6; i++)
		printf("%d ", arr[i]);
}
