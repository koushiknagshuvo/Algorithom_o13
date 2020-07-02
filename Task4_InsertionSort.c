#include <stdio.h>


int main() {
    int n, a[100], j, x;
    printf("Enter Array Size:") ;
    scanf("%d",&n);
    printf("Enter Elements of Array: ") ;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        x = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > x) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
    }
    printf("Insertion sorted list in ascending: ") ;
    for (int i = 0; i < n; i++) 
    printf("%d",a[i]);

    return 0;
}