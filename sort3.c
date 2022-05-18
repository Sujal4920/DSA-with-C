//selection sort
#include <stdio.h>
void selectionsort(int* arr,int n)
{
    int i,j,temp,min;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }

        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        
    }

}
int main()
{
    int arr[30],n,i;
    printf("How many elements you want to enter: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionsort(arr,n);
    printf("After sorting: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}