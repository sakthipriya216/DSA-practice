#include <stdio.h>
#include <stdlib.h>

int size=0;
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL;
struct node* tail=NULL;

struct node* createNode()
{
    struct node* th=(struct node*)malloc(sizeof(struct node*));
    printf("Enter the element to be added: ");
    scanf("%d",&th->data);
    th->next=NULL;
    size++;
    return th;
}

void addFirst()
{
    struct node* temp=createNode();
    if(head==NULL)
    {
        head=temp;
        tail=temp;
        return;
    }
    temp->next=head;
    head=temp;
    return;
}

void addLast()
{
    struct node* temp=createNode();
    if(head==NULL)
    {
        head=temp;
        tail=temp;
        return;
    }
    tail->next=temp;
    tail=temp;
    return;
}

void addPos(int pos)
{
    if(pos<=0)
    {
        addFirst();
    }
    else if(pos>=size)
    {
        addLast();
    }
    else
    {
        struct node* th=head;
        struct node* temp=createNode();
        while(pos>1)
        {
            pos--;
            th=th->next;
        }
        th->next=temp->next;
        th->next=temp;
        return;
    }
}

void traverse()
{
    struct node* th=head;
    if(th==NULL)
    {
        printf("List is empty\n");
    }
    printf("Printing the elements:\n");
    while(th!=NULL)
    {
        printf("%d\n",th->data);
        th=th->next;
    }
    return;
}
int main()
{
    addFirst();
    addLast();
    addFirst();
    addLast();
    traverse();
    return 0;
}
