#include <stdio.h>

void tigaBesar (int arr[], int n) {
    int satu, dua, tiga;

    for(int i = 0; i < n; i++) {
        if (arr[i] > satu) {
            tiga = dua;
            dua = satu;
            satu = arr[i];
        }
        else if (arr[i] > dua && arr[i] <= satu){
            tiga = dua;
            dua = arr[i];
        }
        else if (arr [i] > tiga && arr[i] <= dua){
            tiga = arr[i];
        }
    }
    printf("hasilnya %d, %d, %d", satu, dua, tiga);
}
int main () {
    int arr[] = {10, 123, 1, 70, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    tigaBesar(arr,n);

    return 0;
}