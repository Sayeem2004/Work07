#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_array(int *A, int n) {
    printf("[ ");
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("]\n");
    return;
}

double array_average(int *A, int n) {
    double sum = 0;
    int i;
    for (i = 0; i < n; i++)
        sum += A[i];
    return sum / n;
}

void copy_array(int *A, int *B, int n) {
    int i;
    for (i = 0; i < n; i++)
        B[i] = A[i];
    return;
}

int main() {
    // Creating Example Arrays
    int n = 10;
    int A[n], B[n], i;
    srand(time(NULL));
    for (i = 0; i < n; i++) {
        A[i] = rand();
        B[i] = rand();
    }

    // Step 1
    printf("values of A: ");
    print_array(A, n);
    printf("values of B: ");
    print_array(B, n);
    printf("\n");

    // Step 2
    printf("average of A: %lf\n", array_average(A, n));
    printf("average of B: %lf\n", array_average(B, n));
    printf("\n");

    // Step 3
    copy_array(A, B, n);
    printf("values of A: ");
    print_array(A, n);
    printf("values of B: ");
    print_array(B, n);
}
