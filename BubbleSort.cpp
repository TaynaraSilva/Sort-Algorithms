#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *A, int n);

int main() {

    int A[] = {2, 6, 8, 7, 10, 11, 2, 4, 1, 0, 5}, n, i;

    n = sizeof(A) / sizeof(int);

    bubbleSort(A, n);

    printf("Vetor: ");

    for (i = 0; i < n; i++)
        printf(" %d", A[i]);

    return 0;
}

void bubbleSort(int *A, int n){
    int i, j;

    for (i = n ; i >  2; i--)
        for (j = 0; j < i ; j++)
            if (A[j] > A[j+1])
                swap(A[j], A[j+1]);

}