#include<stdio.h>

int tinhGiaiThua(int n) {
    int giaiThua = 1;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    return giaiThua;
}

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Giai thua khong xac dinh cho so am.\n");
    } else {
        printf("Giai thua cua %d la: %d\n", n, tinhGiaiThua(n));
    }

    return 0;
}

