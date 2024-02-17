#include <stdio.h>

int main () {
    int n;
    printf("Masukkan jumlah data :");
    scanf("%d", &n);

    int arr[n];
    printf("Masukkan data sejumlah %d :", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int jumlah = 0;
    for (int i = 0; i < n; i++){
        jumlah += arr[i];
    }

    double rata = jumlah / n;

    for (int i = 0; i < n  - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] > arr[j]){
                int sem = arr[i];
                arr[i] = arr[j];
                arr[j] = sem;
            }
        }
    }

    printf("Jumlah semua data : %d \n", jumlah);
    printf("Rata-rata data  : %2f", rata);
    if (n % 2 == 0) {
        float median = (float)(arr[n / 2 - 1] + arr[n / 2]) / 2;
        printf("%.2f\n", median);
    } else {
        printf("%d\n", arr[n / 2]);
    }
    return 0;
}   