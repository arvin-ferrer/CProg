#include <stdio.h>
#include <math.h>

#define MAX_SIZE 20
#define SENTINEL -1

void readArray(int arr[], int *size) {

    int num, i = 0;
    printf("Enter numbers (end with %d):\n", SENTINEL);
    while (i < MAX_SIZE) {
        scanf("%d", &num);
        if (num == SENTINEL) break;
        arr[i++] = num;

    }
    *size = i;
}

int main() {
    int X[MAX_SIZE], Y[MAX_SIZE], Z[MAX_SIZE];
    int N = 0, i;
    double sum = 0.0;

    printf("Input for Array X:\n");
    readArray(X, &N);

    printf("Input for Array Y:\n");
    int M = 0;
    readArray(Y, &M);

    if (N != M) {
        printf("Error: Both arrays must have the same length.\n");
        return 1;
    }

    for (i = 0; i < N; i++) {
        Z[i] = X[i] * Y[i];
        sum += Z[i];
    }

    printf("Square root of the sum of products in Z: %.2f\n", sqrt(sum));

   
}


