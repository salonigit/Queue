#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int data;
    Queue * next;
}*front=NULL,* rear=NULL;

void enqueue(Queue *q,int x){
    Queue *t;
    t=new Queue;
    if(t==NULL){
        cout<<"Queue is full";
    }
    else{
        t->data=x;
        t->next=NULL;
        if(front==NULL)
        front=rear=t;
        else
        {
        rear->next=t;
        rear=t;
        }
        
    }
}
int dequeue()
{
 int x=-1;
 Queue * t;

 if(front==NULL)
 printf("Queue is Empty\n");
 else
 {
 x=front->data;
 t=front;
 front=front->next;
 free(t);
 }
 return x;
}
void Display(Queue q)
{
 Queue *p=front;
 while(p)
 {
 printf("%d ",p->data);
 p=p->next;
 }
 printf("\n");
}

int main(){
    Queue q;
    enqueue(&q,4);
    enqueue(&q,5);
    enqueue(&q,6);
    Display(q);
    dequeue();
    Display(q);
    return 0;
}