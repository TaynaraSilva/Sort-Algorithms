#include <bits/stdc++.h>
using namespace std;

void selectionSort(int *A, int n);

int main() {

    int A[] = {2, 6, 8, 7, 10, 11, 2, 4, 1, 0, 5}, n, i;

    n = sizeof(A) / sizeof(int);

    selectionSort(A, n);

    printf("Aor: ");

    for (i = 0; i < n; i++)
        printf(" %d", A[i]);

    return 0;
}

void selectionSort(int *A, int n){
    int i, j, gap = 1, value;

    while (gap < n)
        gap = 3 * gap + 1;

    while (gap > 0) {
        
        for(i = gap; i < n; i++) {
            value = A[i];
            j = i;
            while (j > gap-1 && value <= A[j - gap]) {
                A[j] = A[j - gap];
                j = j - gap;
            }
            A[j] = value;
        }
        gap = gap/3;
    }     
}
    