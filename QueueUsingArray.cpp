#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int front;
    int rear;
    int size;
    int *Q;
};

void create(Queue * q,int size){
    q->Q=new int[size];
    q->size=size;
    q->front=q->rear=-1;
}

void enqueue(Queue *q,int x){
    if(q->rear==q->size-1){
        cout<<"Queue is full";
    }
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}

void dequeue(Queue *q){
    if(q->rear==q->front){
        cout<<"Queue is empty";
    }
    else{
        q->front++;
    }
}

void display(Queue q){
    // int i=q.front+1;
    // while(i<=q.rear)
    // {
    //     cout<<q.Q[i];
    //     i++;
    // }
    for(int i=q.front+1;i<=q.rear;i++)
        {
            cout<<q.Q[i]<<" ";
        }
}

int main(){
    Queue q;
    create(&q,5);
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    display(q);
    dequeue(&q);
    display(q);
    return 0;
}