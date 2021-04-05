#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node node;
node *head = NULL;

void add(int val){
    node *n = (node*) malloc(sizeof(node));
    n->data = val;
    n->next = NULL;
    node *t = head;
    if(head==NULL){
        head = n;
    }
    else
    {
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = n;
    }
}

void display(){
    node *t = head;
        while (t->next != NULL)
        {
            printf("%d ", t->data);
            t = t->next;
        }
        printf("%d ", t->data);
    
}

void removeEnd(){
    node *t = head;
    node *t2 = head;
    while (t->next != NULL)
    {
        //printf("%d ",t->data);
           t2 = t;
        t = t->next;
     
    }
    free(t);
    t2->next = NULL;
}
void main()
{
    add(10);
    add(20);
    add(30);
    //display();
    removeEnd();
    display();
}