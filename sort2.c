// Insertion Sort
#include <stdio.h>
void insertsort(int *arr, int n)
{
    int i, j, key;
    for (i = 1; i < n ; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j]  > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int arr[20], n, i;
    printf("How many elements you want to enter: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    insertsort(arr, n);
    printf("Elements after sorting is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}