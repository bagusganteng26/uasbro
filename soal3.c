#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int ren, int ting) {
    int pivot = arr[ting];
    int i = ren - 1;

    for (int j = ren; j < ting; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[ting]); 
    return i + 1;
}
void quickSort(int arr[], int ren, int ting) {
    if (ren < ting) {
        int pi = partition(arr, ren, ting);
        quickSort(arr, ren, pi - 1);
        quickSort(arr, pi + 1, ting);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array sebelum diurutkan: \n");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Array setelah diurutkan: \n");
    printArray(arr, n);

    return 0;
}
