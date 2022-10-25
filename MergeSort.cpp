#include <bits/stdc++.h>
using namespace std;

void mergesort(int *A, int p, int r);

int main() {

    int A[] = {2, 6, 8, 7, 10, 11, 2, 4, 1, 0, 5}, n, i;

    n = sizeof(A) / sizeof(int);

    mergesort(A, 0, n);

    printf("Aor: ");

    for (i = 0; i < n; i++)
        printf(" %d", A[i]);

    return 0;
}

void combinar(int *A, int p, int q, int r) {
  int nl, nr, i, j, k;

  nl = q - p + 1; 
  nr = r - q;

  int L[nl], R[nr];

  for (i = 0; i < nl; i++)
    L[i] = A[p+i];

  for (j = 0; j < nr; j++)
    R[j] = A[q+j+1];

  i = j = 0;

  for (k = p; k <= r; k++)
    if (j == nr || (i < nl && L[i] <= R[j]))
      A[k] = L[i++];
    else
      A[k] = R[j++];
}

void mergesort(int *A, int p, int r) {
  int q;

  if (p < r) {
    q = (p + r) / 2;
    mergesort(A, p, q);
    mergesort(A, q + 1, r);
    combinar(A, p, q, r);
  }
}