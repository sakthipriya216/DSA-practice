/* This progrom is written to print the array in reverse order without traversing the loop from reverse(len(arr)-1 to 0.*/

#include<stdio.h>
void printReverse(int arr[],int n)
{
    if(n>0)
    {
        printReverse(arr+1,n-1);
        printf("%d ",*arr);
    }
}

void main()
{
    int n;
    printf("Enter the arrray size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printReverse(arr,n);
}
