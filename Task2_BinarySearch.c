#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, a[100], k, lo = 0, h, mid, index;
    printf("Enter Array Size:");
    scanf("%d", &n);
    printf("Enter Elements of Array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter Search Key: ");
    scanf("%d", &k);
    h = n - 1;
    bool found = false;
    while (lo <= h)
    {
        mid = (lo + h) / 2;
        if (a[mid] == k)
        {
            found = true;
            index = mid;
            break;
        }
        else if (a[mid] > k)
            h = mid - 1;
        else
            lo = mid + 1;
    }
    if (!found)
        printf("Not Found");
    else
        printf(" found at index: %d %d", k, index);

    return 0;
}