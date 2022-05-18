//program for binary search
#include <stdio.h>
int binarysearch(int arr[], int n, int k)
{
    int mid, low = 0, high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        if (arr[mid] > k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[30], n, i, k, bin;
    printf("how many values you want to enter: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEntered elements are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter element to be searched: ");
    scanf("%d", &k);
    bin = binarysearch(arr, n, k);
    if (bin == -1)
        printf("element doen not exist");
    else
        printf("element %d found at location %d", k, bin + 1);
    return 0;
}