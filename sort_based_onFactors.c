// Sort elements on the basis of number of factors

#include <stdio.h>
struct number
{
    int num;
    int factors;
};

void swap(struct number* a, struct number* b)
{
    struct number t = *a;
    *a = *b;
    *b = t;
}

int fact(int n)
{
    int c=0;
    if(n==0 || n==1)
        return 1;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
            c++;
    }
    return c+2;
}

int main()
{
    int n;
    scanf("%d",&n);
    struct number arr[n];
    
    for(int i=0;i<n;i++)
    {
        printf("Print the %d element\n",i);
        scanf("%d ",&arr[i].num);
        int x = fact(arr[i].num);
        arr[i].factors = x;
    }
    
    //sorting in ascending order
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j].factors > arr[j+1].factors)
            {
                swap(&arr[j] , &arr[j+1]);
            }
        }
    }
    
    for(int i=0;i<n;i++)
        printf("%d - %d\n",arr[i].num,arr[i].factors);
        
    return 0;
}
