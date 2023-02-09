#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node* next;
} node ;
// using type def we can shorten the keywords. It is used to provide new names for exisiting datatypes

node* head=NULL;
node* createNode()
{
    node* temp= (node*) malloc(sizeof(node*));
    printf("Enter the data: ");
    // populating the data inside the structure variable
    scanf("%d",&temp->data);
    temp->next=NULL;
    return temp;
}

int main()
{
    node* th=createNode();
    printf("%d %p",th->data,th->next);
    return 0;
}
