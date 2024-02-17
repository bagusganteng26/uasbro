#include <stdio.h>

int bSearch(int arr[], int n, int x) {
    int kiri = 0, kanan = n - 1;
    int steps = 0; 

    while (kiri <= kanan) {
        int teng = kiri + (kanan - kiri) / 2;
        steps++; 

        if (arr[teng] == x) {
            printf("Langkah %d: Data ditemukan pada indeks ke-%d\n", steps, teng);
            return teng;
        }
        else if (arr[teng] < x) {
            kiri = teng + 1;
        }
        else {
            kanan = teng - 1;
        }
    }
    printf("Langkah %d: Data tidak ditemukan\n", steps);
    return -1;
}

int main() {
    int n;
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    int arr[n];
    printf("Masukkan data (terurut):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Masukkan nilai yang ingin dicari: ");
    scanf("%d", &x);

    int result = bSearch(arr, n, x);

    if (result != -1) {
        printf("Data %d berada pada posisi ke-%d\n", x, result + 1);
    }

    return 0;
}
