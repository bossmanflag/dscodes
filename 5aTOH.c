#include <stdio.h>
#include <stdlib.h>

void TOH(int n, char f,char t, char a){
	if(n==1)
		printf("Move disk %d from %c to %c", n, f,t);
	else{
		TOH(n-1, f,a,t);
		printf("Move disk %d from %c to %c \n", n, f,t);
		TOH(n-1, a,t,f);
	}
}


void main(){
	TOH(3, 'A','B', 'C');
}
