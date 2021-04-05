#include <stdio.h>
#include <ctype.h>


int stack[100];
int top = -1;

void push(int c){
	stack[++top] = c;
}

int pop(){
	return stack[top--];
}

void main(){
	char exp[100];
	int num, n1,n2,n3;
	scanf("%s", exp);
	char *e = exp;
	while(*e != '\0'){
		printf("curr char: %c \n", *e);
		if(isdigit(*e)){
			num = *e - 48;
			printf(" num : %d \n", num);
			push(num);

		}
		else{
			n1=pop();
			n2=pop();
			switch(*e){
				case '+':
					n3=n2+n1;
					break;
				case '-':
					n3=n2-n1;
					break;
				case '*':
					n3=n2*n1;
					break;

				case '/':
					n3=n2/n1;
					break;
			}
			push(n3);
		}
		e++;
	}
printf("Answer : %d ", pop());
}


