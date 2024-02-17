#include <stdio.h>

void findCommonElements(int arrA[], int arrB[], int arrC[], int nA, int nB, int nC) {
    int i = 0, j = 0, k = 0;

    printf("Elemen-elemen yang sama pada ketiga array: ");

    while (i < nA && j < nB && k < nC) {
        if (arrA[i] == arrB[j] && arrB[j] == arrC[k]) {
            printf("%d ", arrA[i]);
            i++;
            j++;
            k++;
        }
        else if (arrA[i] < arrB[j]) {
            i++;
        }
        else if (arrB[j] < arrC[k]) {
            j++;
        }
        else {
            k++;
        }
    }
    printf("\n");
}

int main() {
    int arrA[] = {1, 5, 10, 20, 40, 80};
    int arrB[] = {6, 7, 20, 80, 100};
    int arrC[] = {3, 4, 15, 20, 30, 70, 80, 120};

    int nA = sizeof(arrA) / sizeof(arrA[0]);
    int nB = sizeof(arrB) / sizeof(arrB[0]);
    int nC = sizeof(arrC) / sizeof(arrC[0]);

    findCommonElements(arrA, arrB, arrC, nA, nB, nC);

    return 0;
}
