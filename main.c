#include <stdio.h>
#include "signum.c"

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

    return 0;
}
