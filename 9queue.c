#include <stdio.h>
#include <stdlib.h>
# define  max 3
int queue[max];
int front = -1;
int rear = -1;
void enqueue(int ele){
	if(rear+1>= max)
		printf("FULL");
	else{
		if(front == -1) front = 0;
		queue[++rear]=ele;
	}
}

void dequeue(){

	if(front == -1)
		printf("EMPTY");
	else{
		printf("%d ", queue[front++]);
		if(front > rear)
			front = rear = -1;
	}
}

void display(){
	for(int i = front; i <= rear; i++)
		printf("%d ",queue[i]);
}

void main(){
	enqueue(10);
	enqueue(120);
	enqueue(23);
	enqueue(231);
	display();
	printf("\n");
	dequeue();
	printf("\n");
	display();
}
