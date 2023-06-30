//QUEUE IMPLEMENTATION USING ARRAY

#include <stdio.h>
#define max 4 
int queue[max];
int rear=0,front=0,size=0;
void display();
void enqueue(int);
void dequeue();
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
}
void enqueue(int item)
{
    rear=(rear+1)%max;
    if(front==rear)
    {
        printf("Queue full!!\n");
        if(rear==0)
        {
            rear=max-1;
        }
        else
        {
            rear=rear-1;
        }
        return;
    }
    queue[rear]=item;
    printf("%d is added\n",queue[rear]);
}
void dequeue()
{
    if(front==rear)
    {
        printf("Queue empty\n");
        return;
    }
    printf("%d is removed!\n",queue[front]);
    front=(front+1)%max;
}
void display()
{
    for(int i=front+1;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
}
