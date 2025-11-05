#include <stdio.h>

int main() {
    int x, y;

    // Nh?p hai s? nguyên
    printf("Nhap hai so nguyen x va y: ");
    scanf("%d %d", &x, &y);

    // Tính toán các phép toán s? h?c
    int tong = x + y;
    int hieu = x - y;
    int tich = x * y;
    float thuong;
    int phandu;

    // Ki?m tra chia cho 0
    if (y != 0) {
        thuong = (float)x / y;
        phandu = x % y;
    } else {
        printf("Khong the chia cho 0!\n");
        thuong = 0;
        phandu = 0;
    }

    // In k?t qu?
    printf("\n=== Ket qua cac phep toan ===\n");
    printf("Tong: %d + %d = %d\n", x, y, tong);
    printf("Hieu: %d - %d = %d\n", x, y, hieu);
    printf("Tich: %d * %d = %d\n", x, y, tich);
    if (y != 0) {
        printf("Thuong: %d / %d = %.2f\n", x, y, thuong);
        printf("Phan du: %d %% %d = %d\n", x, y, phandu);
    }

    // So sánh hai s?
    printf("\n=== Ket qua so sanh ===\n");
    if (x > y)
        printf("%d lon hon %d\n", x, y);
    else if (x < y)
        printf("%d nho hon %d\n", x, y);
    else
        printf("%d bang %d\n", x, y);

    return 0;
}

