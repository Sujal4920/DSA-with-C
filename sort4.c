// Merge sort
#include <stdio.h>
void merge(int arr[], int mid, int low, int high)
{
    int i, j, k, arr1[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i<=mid && j<=high)
    {
        if (arr[i] < arr[j])
        {
            arr1[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            arr1[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
            arr1[k] = arr[i];
            k++;i++;
    }
    while(j<=high){
        arr1[k]=arr[i];
        k++;j++;
    }
    for(i=low;i<=high;i++)
    {
        arr[i]=arr1[i];
    }
}
void mergesort(int arr[],int low,int high)
{
   int mid;
   if(low<high){
       mid=(low+high)/2;
       mergesort(arr,low,mid);
       mergesort(arr,mid+1,high);
       merge(arr,mid,low,high);
   }
}
int main()
{
    int arr[20], n, i;
    printf("How mant elements you want to enter: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    mergesort(arr,0,n-1);
    printf("After sorting: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}