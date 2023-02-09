#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};

struct node* head=NULL;
struct node* createNode()
{
    struct node* temp= (struct node*) malloc(sizeof(struct node*));
    printf("Enter the data: ");
    // populating the data inside the structure variable
    scanf("%d",&temp->data);
    temp->next=NULL;
    return temp;
}

int main()
{
    struct node* th=createNode();
    printf("%d %p",th->data,th->next);
    return 0;
}
