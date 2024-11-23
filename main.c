#include <stdio.h>
#include "signum.c"
#include "quick_sort.c"

// rm -rf * && rm -rf .* && git clone https://github.com/Yohop/algo-mat.git .

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    // printf("Hello, World!");
    printf("%d\n", signum(-5));
    printf("%d\n", signum(0));
    printf("%d\n", signum(5));

    int n = 6;

    int arr[] = {10, 7, 8, 9, 1, 5};
    quick_sort(arr, 0, n - 1);
    print_array(arr, n);
    
    return 0;
}
