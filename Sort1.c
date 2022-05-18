// Adaptive Bubble sort 
#include <stdio.h>
void bubblesort(int *arr, int n)
{
    int i, j, ptr,flag=0;
    for (i = 0; i < n - 1; i++)
    {
        printf("Pass number: %d\n",i+1);
        flag=1;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                ptr = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = ptr;
                flag=0;
            }

        }
        if(flag)
        {
            return;
        }
    }
}
int main()
{
    int arr[20], n, i;
    printf("How many elements you want to enter: ");
    scanf("%d", &n);
    printf("\nNow enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Entered %d elements are: ", n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    bubblesort(arr, n);
    printf("After sorting: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}