#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


//push
// pop
// display

char stack[100];
int top = -1;
void push(char ele){
	if(top>=99)
		printf("OVERFLOW");
	else
		stack[++top] = ele;
}

char pop(){
	if(top==-1)
		printf("UNDERFLOW");
	else
	{
		return stack[top--];
	}
}
int precedence(char e){
	if(e=='^') return 3;
	if(e=='*'|| e == '/') return 2;
	if(e=='+'|| e == '-') return 1;
	return 0;
}

void display(){
	while(top!=-1){
		printf("%c ", pop());
	}
}
void main(){
	char exp[100];
	scanf("%s", exp);
	char *e = exp;
	char x;
	while(*e != '\0'){
		if(isalnum(*e))		printf("%c" , *e);
		else if(*e == '(')	push(*e);
		else if(*e == ')') 	{
			while((x=pop()) != '(') printf("%c",x);
		}else{
		while(precedence(stack[top]) >= precedence(*e)) printf("%c", pop());
		push(*e);
		}
	e++;
	}
	display();
}
