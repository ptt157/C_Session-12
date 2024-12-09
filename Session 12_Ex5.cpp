#include<stdio.h>

// Ham kiem tra so nguyen to
int kiemTraSoNguyenTo(int n) {
    if (n <= 1) return 0; // So <= 1 khong phai la so nguyen to
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0; // Neu chia het thi khong phai so nguyen to
    }
    return 1; // Neu khong chia het cho so nao thi la so nguyen to
}

int main() {
    int a, b;

    // Nhap 2 so nguyen
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    // Kiem tra so thu nhat
    if (kiemTraSoNguyenTo(a) == 1) {
        printf("%d la so nguyen to\n", a);
    } else {
        printf("%d khong phai la so nguyen to\n", a);
    }

    // Kiem tra so thu hai
    if (kiemTraSoNguyenTo(b) == 1) {
        printf("%d la so nguyen to\n", b);
    } else {
        printf("%d khong phai la so nguyen to\n", b);
    }

    return 0;
}

