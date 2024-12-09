#include<stdio.h>

// Ham kiem tra so hoan hao
int kiemTraSoHoanHao(int n) {
    if (n <= 1) return 0; // So nho hon hoac bang 1 khong phai so hoan hao
    int tong = 0;
    
    // Tinh tong cac uoc so cua n (tru chinh no)
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }

    // Kiem tra neu tong cac uoc so bang n
    return tong == n; 
}

int main() {
    int a, b;

    // Nhap 2 so nguyen
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    // Kiem tra so dau tien
    if (kiemTraSoHoanHao(a)) {
        printf("%d la so hoan hao\n", a);
    } else {
        printf("%d khong phai la so hoan hao\n", a);
    }

    // Kiem tra so thu hai
    if (kiemTraSoHoanHao(b)) {
        printf("%d la so hoan hao\n", b);
    } else {
        printf("%d khong phai la so hoan hao\n", b);
    }

    return 0;
}

