#include <bits/stdc++.h>
using namespace std;

void selectionSort(int *A, int n);

int main() {

    int A[] = {2, 6, 8, 7, 10, 11, 2, 4, 1, 0, 5}, n, i;

    n = sizeof(A) / sizeof(int);

    selectionSort(A, n);

    printf("Vetor: ");

    for (i = 0; i < n; i++)
        printf(" %d", A[i]);

    return 0;
}

void selectionSort(int *A, int n){
  int i, j, k;

  for (i = 0; i < n - 1; i++) {
    j = i;

    for (k = j + 1; k < n; k++)
      if (A[k] < A[j])
        j = k;

    if (A[j] < A[i])
      swap(A[i], A[j]);
  }
}