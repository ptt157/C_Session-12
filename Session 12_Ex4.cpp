#include<stdio.h>

int timSoLonNhat(int arr[], int size) {
    int max = arr[0]; // Gia su phan tu dau tien la lon nhat
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Cap nhat gia tri lon nhat
        }
    }
    return max;
}

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int soLonNhat = timSoLonNhat(arr, n);
    printf("So lon nhat trong mang la: %d\n", soLonNhat);

    return 0;
}

