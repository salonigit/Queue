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
    q->front=q->rear=0;
}

void enqueue(Queue *q,int x){
    if((q->rear+1)%q->size==q->front){
        cout<<"Queue is full"<<endl;
    }
    else{
        // q->Q[(q->rear+1)%q->size]=x;
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;

    }
}

void dequeue(Queue *q){
    if(q->rear==q->front){
        cout<<"Queue is empty"<<endl;
    }
    else{
        q->front=(q->front+1)%q->size;
    }
}

void display(Queue q){
    // int i=q.front+1;
    // while(i<=q.rear)
    // {
    //     cout<<q.Q[i];
    //     i++;
    // }
    for(int i=(q.front+1)%q.size;i<=(q.rear)%q.size;i++)
        {
            cout<<q.Q[i]<<" ";
        }
        cout<<endl;
}

int main(){
    Queue q;
    create(&q,5);
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);
    enqueue(&q,5);
    display(q);
    dequeue(&q);
    display(q);
    return 0;
}