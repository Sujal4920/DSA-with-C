//program for Linear search
#include <stdio.h>
int linearsearch(int arr[],int n,int k)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == k)  
           return i+1;
    }
    return -1;
}
int main()
{
    int arr[25], i, n, k,f;
    printf("How many values you want to enter: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The entered %d values are: ", n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter element to be searched: ");
    scanf("%d", &k);
    f=linearsearch(arr,n,k);
    if(f==-1)
    {
        printf("Element does not exist");
    }
    else
    {
        printf("Element %d found at loc %d",k,f);
    }
    return 0;
}