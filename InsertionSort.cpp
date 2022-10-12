#include <bits/stdc++.h>
using namespace std;

void insertionSort(int *A, int n);

int main() {

    int A[] = {2, 6, 8, 7, 10, 11, 2, 4, 1, 0, 5}, n, i;

    n = sizeof(A) / sizeof(int);

    insertionSort(A, n);

    printf("Vetor: ");

    for (i = 0; i < n; i++)
        printf(" %d", A[i]);

    return 0;
}

void insertionSort(int *A, int n){
  int i, j, k;

  for (i = 1; i < n; i++) {
    k = A[i];
    j = i - 1;

    while (j >= 0 && A[j] > k) {
      A[j+1] = A[j];
      j--;
    }

    A[j+1] = k;
  }
}