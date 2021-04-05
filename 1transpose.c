#include <stdio.h>
#include <stdlib.h>

void main(){
	int n;
	int m;
	printf("enter size of mat");
	scanf("%d %d", &m,&n);
	int c = 0;
	int mat[m][n];
	for(int i = 0; i<m;i++)
		for(int j = 0;j<n;j++){
			scanf("%d",&mat[i][j]);
			if(mat[i][j] == 0)
				c++;
		}
	if((m*n)/2 < c){
		printf("sparse mat \n");
		int arr[3][n];
		int in = 0;
		for(int i=0; i<m; i++)
			for(int j =0;j<n;j++){
				if(mat[i][j] != 0){
					arr[0][in] = mat[i][j];
					arr[1][in] = i;
					arr[2][in] = j;
					in++;
				}
			}
		for(int i=0;i < 3; i++){
			for(int j=0; j<n;j++)
				printf("%d" , arr[i][j]);
		printf("\n");
		}

	}else
		printf("not sparse mat");
}
