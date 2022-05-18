//program for jump serach
#include <stdio.h>
#include<math.h>
int jumpsearch(int arr[],int n,int k)
{
    int jump,low=0,i;
    jump=sqrt(n);
    for(i=0;i<n;i+=jump)
    {
        if(arr[i]==k)
        return i;
        if(arr[i]<k)
        low=i;
        else
           break;
    }
    for(i=low;i<n;i++)
    {
        if(arr[i]==k)
        return i;
    }
    return -1;
}
int main()
{
     int arr[20],n,k,i,loc;
     printf("How many elements you want to enter: ");
     scanf("%d",&n);
     printf("Enter %d elements:\n",n);
     for(i=0;i<n;i++)
     {
       scanf("%d",&arr[i]);
     }
     printf("Entered elements are:\n");
     for(i=0;i<n;i++)
     {
         printf("%d ",arr[i]);
     }
     printf("\nEnter element to be searched: ");
     scanf("%d",&k);
     loc=jumpsearch(arr,n,k);
     if(loc==-1)
     printf("element does not exist:");
     else
     printf("Element %d found at location %d",k,loc+1);
    return 0;
}